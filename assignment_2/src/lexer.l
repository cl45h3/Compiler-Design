%{

#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include "parser.tab.h"
using std::string; using std::vector; using std::map; using std::set; using std::cout; using std::endl;
extern void reportSyntaxErrorAt(int line, int column, const char* message);

int currentLineNumber = 1, currentColumn = 1, tokenStartLine = 1, tokenStartColumn = 1;

bool currentParserTokenIsLexicalError = false;
#define YY_USER_ACTION { \
    tokenStartLine=currentLineNumber; tokenStartColumn=currentColumn; \
    yylloc.first_line=tokenStartLine; yylloc.first_column=tokenStartColumn; \
    for(int i=0;i<yyleng;i++){ if(yytext[i]=='\n'){currentLineNumber++;currentColumn=1;} else if(yytext[i]=='\t') currentColumn+=4; else currentColumn++; } \
    yylloc.last_line=currentLineNumber; yylloc.last_column=currentColumn-1; \
}
struct LexicalToken { string lexeme,type; LexicalToken(const string& a,const string& b):lexeme(a),type(b){} };
struct LexicalError { string message; int lineNumber,column; LexicalError(const string& a,int b,int c):message(a),lineNumber(b),column(c){} };
struct SymbolEntry { string name; int occurrences; };
vector<LexicalToken> tokenList; vector<LexicalError> errorList; map<string,SymbolEntry> symbolTable; map<string,int> keywordTable;

static set<string> knownTypeNames = {"FILE"};
void registerTypeName(const char* n) { if(n) knownTypeNames.insert(n); }
bool isKnownTypeName(const char* n) { return n && knownTypeNames.count(n); }
void addToken(const char* t,const char* x){ tokenList.emplace_back(x,t); }
void addError(const char*,const char* c){ errorList.emplace_back("ERROR: "+string(c),tokenStartLine,tokenStartColumn); }
void addSymbol(const char* n){ string k(n); auto i=symbolTable.find(k); if(i==symbolTable.end()) symbolTable[k]={k,1}; else i->second.occurrences++; }
void addKeyword(const char* n){ keywordTable[string(n)]++; }
size_t lexicalErrorCount(){ return errorList.size(); }
void printLexicalErrors(){ for(const auto& e:errorList) cout << e.message << " at line " << e.lineNumber << ", column " << e.column << endl; }
void printTokenTable(){ cout << "=================================================================" << endl << "                    SYNTAX ANALYSIS TOKEN TABLE" << endl << "=================================================================" << endl; printf("%-20s %s\n","Token","Token_Type"); cout << "-----------------------------------------------------------------" << endl; for(const auto& t:tokenList) printf("%-20s %s\n",t.lexeme.c_str(),t.type.c_str()); cout << "-----------------------------------------------------------------" << endl << "Total tokens found: " << tokenList.size() << endl; }
#define RET(display, code) do { currentParserTokenIsLexicalError=false; addToken(display,yytext); yylval.text=strdup(yytext); return code; } while(0)
#define KEY(code) do { currentParserTokenIsLexicalError=false; addToken("KEYWORD",yytext); addKeyword(yytext); yylval.text=strdup(yytext); return code; } while(0)

#define LEXERR(message) do { currentParserTokenIsLexicalError=true; addError(yytext,message); yylval.text=strdup(yytext); return INVALID_TOKEN; } while(0)
%}
%option noyywrap nounput noinput
%x INCL BADPP

DIGIT [0-9]
LETTER [a-zA-Z_]
IDENTIFIER {LETTER}({LETTER}|{DIGIT})*
INT_SUFFIX_U [uU]
INT_SUFFIX_L [lL]
INT_SUFFIX_LL ([lL][lL])
INT_SUFFIX ({INT_SUFFIX_U}?{INT_SUFFIX_L}?)|({INT_SUFFIX_U}?{INT_SUFFIX_LL}?)|({INT_SUFFIX_L}?{INT_SUFFIX_U}?)|({INT_SUFFIX_LL}?{INT_SUFFIX_U}?)
FLOAT_SUFFIX [fFlL]
INTEGER_LITERAL {DIGIT}+{INT_SUFFIX}?
FLOAT_LITERAL ({DIGIT}*\.{DIGIT}+|{DIGIT}+\.){FLOAT_SUFFIX}?
BOOLEAN_LITERAL (true|false)
EXPONENT [eE][+-]?{DIGIT}+
EXPONENT_NUMBER ({DIGIT}+\.{DIGIT}*|\.{DIGIT}+|{DIGIT}+){EXPONENT}{FLOAT_SUFFIX}?
HEX_DIGIT [0-9a-fA-F]
BIN_DIGIT [01]
HEX_LITERAL 0[xX]{HEX_DIGIT}+{INT_SUFFIX}?
BIN_LITERAL 0[bB]{BIN_DIGIT}+{INT_SUFFIX}?
FLOAT_BASE ({DIGIT}*\.{DIGIT}+|{DIGIT}+\.)
FLOAT_OR_EXP_BASE ({FLOAT_BASE}|({DIGIT}+\.{DIGIT}*|\.{DIGIT}+|{DIGIT}+)[eE][+-]?{DIGIT}+)
INVALID_FLOAT_SUFFIX {FLOAT_OR_EXP_BASE}[a-zA-Z_][a-zA-Z0-9_]*
INVALID_FLOAT_MULTI_DOT {DIGIT}+\.[0-9]*\.[0-9.]*
INVALID_FLOAT_MULTI_DOT2 \.{DIGIT}+\.[0-9.]*
INVALID_FLOAT_MULTI_EXP {FLOAT_BASE}[eE][+-]?{DIGIT}+[eE][+-]?[0-9a-zA-Z_.]*
INVALID_FLOAT1 \.{EXPONENT}
INVALID_FLOAT_INCOMPLETE {FLOAT_BASE}[eE][+-]?
INVALID_FLOAT_BAD_EXP {FLOAT_BASE}[eE][+-]?[^0-9\n\t ;\)\}\]\,+-][a-zA-Z0-9_]*
INVALID_IDENTIFIER {DIGIT}+{LETTER}({LETTER}|{DIGIT})*
INVALID_HEX_INCOMPLETE 0[xX][^0-9a-fA-F\n\t ;\)\}\]\,]*
INVALID_HEX 0[xX]{HEX_DIGIT}*[g-zG-Z_][a-zA-Z0-9_]*
INVALID_BIN_INCOMPLETE 0[bB][^01\n\t ;\)\}\]\,]*
INVALID_BIN 0[bB]{BIN_DIGIT}*[2-9a-zA-Z_][a-zA-Z0-9_]*
ESCAPE_SEQ (\\[ntrbfva"'\?\\0]|\\x[0-9a-fA-F]{1,2}|\\[0-7]{1,3})
STRING_CONTENT ({ESCAPE_SEQ}|[^"\\\r\n])*
SINGLE_CHAR_CONTENT ({ESCAPE_SEQ}|[^'\\\r\n])
STRING_LITERAL (L|u8|u|U)?\"({STRING_CONTENT})\"
INVALID_ESCAPE_STRING (L|u8|u|U)?\"(\\.|[^"\\\r\n])*\"
CHAR_LITERAL (L|u8|u|U)?'{SINGLE_CHAR_CONTENT}'
INVALID_ESCAPE_CHAR (L|u8|u|U)?'\\.'
EMPTY_CHAR_LITERAL (L|u8|u|U)?''
MULTI_CHAR_LITERAL (L|u8|u|U)?'{SINGLE_CHAR_CONTENT}{SINGLE_CHAR_CONTENT}+'
UNTERMINATED_STRING (L|u8|u|U)?\"([^"\\\r\n]|\\.)*
UNTERMINATED_CHAR (L|u8|u|U)?'([^'\\\r\n]|\\.)*
WHITESPACE [ \t]+
NEWLINE \n
COMMENT_SINGLE "//".*
COMMENT_MULTI "/*"([^*]|\*+[^*/])*\*+"/"
INVALID_MULTI "/*"([^*]|\*+[^*/])*
%%
^[ \t]*"#"[ \t]*"include" { addToken("PP_INCLUDE",yytext); yylval.text=strdup(yytext); BEGIN(INCL); return PP_INCLUDE; }
<INCL>[ \t]+ ;
<INCL>"<"[^>\n]+">" { addToken("HEADER_NAME",yytext); yylval.text=strdup(yytext); BEGIN(INITIAL); return HEADER_NAME; }
<INCL>\"[^\"\n]+\" { addToken("HEADER_NAME",yytext); yylval.text=strdup(yytext); BEGIN(INITIAL); return HEADER_NAME; }
<INCL>[^ \t\n][^\n]* { BEGIN(INITIAL); LEXERR("Malformed include directive"); }
<INCL>\n { BEGIN(INITIAL); }

"#"/[ \t]*"include" { currentParserTokenIsLexicalError=false; addToken("HASH",yytext); yylval.text=strdup(yytext); BEGIN(BADPP); return MALFORMED_DIRECTIVE; }
<BADPP>[^\n]* { BEGIN(INITIAL); }
<BADPP>\n { BEGIN(INITIAL); }
^[ \t]*"#"[ \t]*"define" { RET("PP_DEFINE",PP_DEFINE); }
{INVALID_MULTI} { LEXERR("Unterminated multi-line comment"); }
{COMMENT_SINGLE} ;
{COMMENT_MULTI} ;
{NEWLINE} ;
{WHITESPACE} ;
"\r" ;

"bool" { KEY(BOOL); }
"break" { KEY(BREAK); }
"case" { KEY(CASE); }
"char" { KEY(CHAR); }
"const" { KEY(CONST); }
"constexpr" { KEY(CONSTEXPR); }
"continue" { KEY(CONTINUE); }
"default" { KEY(DEFAULT); }
"do" { KEY(DO); }
"double" { KEY(DOUBLE); }
"else" { KEY(ELSE); }
"extern" { KEY(EXTERN); }
"float" { KEY(FLOAT); }
"for" { KEY(FOR); }
"friend" { KEY(FRIEND); }
"goto" { KEY(GOTO); }
"if" { KEY(IF); }
"inline" { KEY(INLINE); }
"int" { KEY(INT); }
"long"[ \t]+"long" { KEY(LONG_LONG); }
"long" { KEY(LONG); }
"nullptr" { KEY(NULLPTR); }
"operator" { KEY(OPERATOR); }
"return" { KEY(RETURN); }
"short" { KEY(SHORT); }
"signed" { KEY(SIGNED); }
"sizeof" { KEY(SIZEOF); }
"static" { KEY(STATIC); }
"struct" { KEY(STRUCT); }
"switch" { KEY(SWITCH); }
"template" { KEY(TEMPLATE); }
"typename" { KEY(TYPENAME); }
"typedef" { KEY(TYPEDEF); }
"unsigned" { KEY(UNSIGNED); }
"void" { KEY(VOID); }
"while" { KEY(WHILE); }
"class" { KEY(CLASS); }
"new" { KEY(NEW); }
"delete" { KEY(DELETE); }
"public" { KEY(PUBLIC); }
"private" { KEY(PRIVATE); }
"protected" { KEY(PROTECTED); }
"until" { KEY(UNTIL); }
"enum" { KEY(ENUM); }
"union" { KEY(UNION); }
"auto" { KEY(AUTO); }
"register" { KEY(REGISTER); }
"volatile" { KEY(VOLATILE); }
"this" { KEY(THIS); }

"printf" { RET("PRINTF_FUNCTION",PRINTF_FUNCTION); }
"scanf" { RET("SCANF_FUNCTION",SCANF_FUNCTION); }
"malloc" { RET("MALLOC_FUNCTION",MALLOC_FUNCTION); }
"calloc" { RET("CALLOC_FUNCTION",CALLOC_FUNCTION); }
"realloc" { RET("REALLOC_FUNCTION",REALLOC_FUNCTION); }
"free" { RET("FREE_FUNCTION",FREE_FUNCTION); }

"++" { RET("OPERATOR",INC); }
"--" { RET("OPERATOR",DEC); }
"+=" { RET("OPERATOR",ADD_ASSIGN); }
"-=" { RET("OPERATOR",SUB_ASSIGN); }
"*=" { RET("OPERATOR",MUL_ASSIGN); }
"/=" { RET("OPERATOR",DIV_ASSIGN); }
"%=" { RET("OPERATOR",MOD_ASSIGN); }
"<<=" { RET("OPERATOR",SHL_ASSIGN); }
">>=" { RET("OPERATOR",SHR_ASSIGN); }
"&=" { RET("OPERATOR",AND_ASSIGN); }
"|=" { RET("OPERATOR",OR_ASSIGN); }
"^=" { RET("OPERATOR",XOR_ASSIGN); }
"==" { RET("OPERATOR",EQ); }
"!=" { RET("OPERATOR",NE); }
"<=" { RET("OPERATOR",LE); }
">=" { RET("OPERATOR",GE); }
"&&" { RET("OPERATOR",ANDAND); }
"||" { RET("OPERATOR",OROR); }
"<<" { RET("OPERATOR",SHL); }
">>" { RET("OPERATOR",SHR); }
"->" { RET("OPERATOR",ARROW); }
"::" { RET("OPERATOR",SCOPE); }
"+" { RET("OPERATOR",PLUS); }
"-" { RET("OPERATOR",MINUS); }
"*" { RET("OPERATOR",STAR); }
"/" { RET("OPERATOR",SLASH); }
"%" { RET("OPERATOR",PERCENT); }
"=" { RET("OPERATOR",ASSIGN); }
"<" { RET("OPERATOR",LT); }
">" { RET("OPERATOR",GT); }
"!" { RET("OPERATOR",NOT); }
"&" { RET("OPERATOR",BITAND); }
"|" { RET("OPERATOR",BITOR); }
"^" { RET("OPERATOR",BITXOR); }
"~" { RET("OPERATOR",BITNOT); }

";" { RET("SEMICOLON",SEMICOLON); }
"," { RET("COMMA",COMMA); }
"(" { RET("LEFT_PAREN",LEFT_PAREN); }
")" { RET("RIGHT_PAREN",RIGHT_PAREN); }
"{" { RET("LEFT_BRACE",LEFT_BRACE); }
"}" { RET("RIGHT_BRACE",RIGHT_BRACE); }
"[" { RET("LEFT_BRACKET",LEFT_BRACKET); }
"]" { RET("RIGHT_BRACKET",RIGHT_BRACKET); }
":" { RET("COLON",COLON); }
"?" { RET("QUESTION_MARK",QUESTION_MARK); }
"#" { RET("HASH",HASH); }

{STRING_LITERAL} { RET("STRING_LITERAL",STRING_LITERAL); }
{INVALID_ESCAPE_STRING} { LEXERR("Invalid escape sequence in string literal"); }
{CHAR_LITERAL} { RET("CHAR_LITERAL",CHAR_LITERAL); }
{INVALID_ESCAPE_CHAR} { LEXERR("Invalid escape sequence in character literal"); }
{EMPTY_CHAR_LITERAL} { LEXERR("Empty character literal"); }
{MULTI_CHAR_LITERAL} { LEXERR("Multi-character literal"); }
{UNTERMINATED_STRING} { LEXERR("Unterminated string literal"); }
{UNTERMINATED_CHAR} { LEXERR("Unterminated character literal"); }
{INVALID_FLOAT_MULTI_DOT} { LEXERR("Multiple decimal points in float literal"); }
{INVALID_FLOAT_MULTI_DOT2} { LEXERR("Multiple decimal points in float literal"); }
{INVALID_FLOAT_MULTI_EXP} { LEXERR("Multiple exponents in float literal"); }
{INVALID_FLOAT1} { LEXERR("Missing digits before exponent"); }
{INVALID_FLOAT_INCOMPLETE} { LEXERR("Incomplete floating-point exponent"); }
{INVALID_FLOAT_BAD_EXP} { LEXERR("Invalid exponent in float literal"); }
{INVALID_HEX_INCOMPLETE} { LEXERR("Incomplete hexadecimal literal"); }
{INVALID_HEX} { LEXERR("Invalid hexadecimal digit"); }
{INVALID_BIN_INCOMPLETE} { LEXERR("Incomplete binary literal"); }
{INVALID_BIN} { LEXERR("Invalid binary digit"); }
{HEX_LITERAL} { RET("HEXADECIMAL_LITERAL",HEXADECIMAL_LITERAL); }
{BIN_LITERAL} { RET("BINARY_LITERAL",BINARY_LITERAL); }
{EXPONENT_NUMBER} { RET("EXPONENT_NUMBER_LITERAL",EXPONENT_NUMBER_LITERAL); }
{FLOAT_LITERAL} { RET("FLOAT_LITERAL",FLOAT_LITERAL); }
{INTEGER_LITERAL} { RET("INTEGER_LITERAL",INTEGER_LITERAL); }
{BOOLEAN_LITERAL} { RET("BOOLEAN_LITERAL",BOOLEAN_LITERAL); }
{INVALID_FLOAT_SUFFIX} { LEXERR("Invalid suffix on floating-point literal"); }
"..." { RET("ELLIPSIS",ELLIPSIS); }
"." { RET("DOT",DOT); }
{IDENTIFIER} { currentParserTokenIsLexicalError=false; addToken("IDENTIFIER",yytext); addSymbol(yytext); yylval.text=strdup(yytext); return isKnownTypeName(yytext)?TYPE_NAME:IDENTIFIER; }
{INVALID_IDENTIFIER} { LEXERR("Invalid identifier (cannot start with a digit)"); }
. { LEXERR("Unrecognized character"); }
%%
