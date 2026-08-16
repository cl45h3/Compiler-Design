%{


#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>

using std::string;
using std::vector;
using std::map;
using std::cout;
using std::cerr;
using std::endl;


int currentLineNumber = 1;
int currentColumn = 1;

#define YY_USER_ACTION currentColumn += yyleng;


struct LexicalToken {
    string lexeme;
    string type;

    LexicalToken(const string& lex, const string& typ)
        : lexeme(lex), type(typ) {}
};

struct LexicalError {
    string message;
    int lineNumber;
    int column;

    LexicalError(const string& msg, int line, int col)
        : message(msg), lineNumber(line), column(col) {}
};

vector<LexicalToken> tokenList;
vector<LexicalError> errorList;

void addToken(const char* type, const char* lexeme) {
    tokenList.emplace_back(lexeme, type);
}

void addError(const char* lexeme, const char* category) {
    string errorMsg = "ERROR: " + string(category);
    errorList.emplace_back(errorMsg, currentLineNumber, currentColumn - (int)strlen(lexeme));
}

/* symbol table */
struct SymbolEntry {
    string name;
    int occurrences;
};

map<string, SymbolEntry> symbolTable;
map<string, int> keywordTable;

void addSymbol(const char* name) {
    string key(name);
    auto it = symbolTable.find(key);
    if (it != symbolTable.end()) {
        it->second.occurrences++;
    } else {
        symbolTable[key] = SymbolEntry{key, 1};
    }
}

void addKeyword(const char* name) {
    keywordTable[string(name)]++;
}

/* output */
void printAnalysisResults() {
    cout << "=================================================================" << endl;
    cout << "                    LEXICAL ANALYSIS TABLE" << endl;
    cout << "=================================================================" << endl;

    if (!errorList.empty()) {
        cout << "ERRORS FOUND:" << endl;
        cout << "-----------------------------------------------------------------" << endl;
        for (const auto& error : errorList) {
            cout << error.message << " at line " << error.lineNumber
                 << ", column " << error.column << endl;
        }
        cout << "-----------------------------------------------------------------" << endl << endl;
    } else {
        cout << "NO ERRORS FOUND" << endl;
        cout << "-----------------------------------------------------------------" << endl << endl;
    }

    cout << "VALID TOKENS:" << endl;
    printf("%-20s %s\n", "LEXEME", "TOKEN");
    cout << "-----------------------------------------------------------------" << endl;
    for (const auto& token : tokenList) {
        printf("%-20s %s\n", token.lexeme.c_str(), token.type.c_str());
    }
    cout << "-----------------------------------------------------------------" << endl;
    cout << "Total tokens found: " << tokenList.size() << endl;
    cout << "Total errors found: " << errorList.size() << endl;
    cout << "Total lines processed: " << currentLineNumber << endl;
}

void printSymbolTable() {
    cout << endl;
    cout << "=================================================================" << endl;
    cout << "                        SYMBOL TABLE" << endl;
    cout << "=================================================================" << endl;
    printf("%-20s %s\n", "IDENTIFIER", "OCCURRENCES");
    cout << "-----------------------------------------------------------------" << endl;
    for (const auto& pair : symbolTable) {
        printf("%-20s %d\n", pair.second.name.c_str(), pair.second.occurrences);
    }
    cout << "-----------------------------------------------------------------" << endl;
    cout << "Total unique identifiers: " << symbolTable.size() << endl;

    cout << endl;
    cout << "=================================================================" << endl;
    cout << "                        KEYWORD TABLE" << endl;
    cout << "=================================================================" << endl;
    printf("%-20s %s\n", "KEYWORD", "OCCURRENCES");
    cout << "-----------------------------------------------------------------" << endl;
    for (const auto& pair : keywordTable) {
        printf("%-20s %d\n", pair.first.c_str(), pair.second);
    }
    cout << "-----------------------------------------------------------------" << endl;
    cout << "Total unique keywords: " << keywordTable.size() << endl;
}
%}

%option noyywrap
%option yylineno
%option nounput

%x INCL
%x MULTILINE_COMMENT

/* regex */
DIGIT           [0-9]
LETTER          [a-zA-Z_]
IDENTIFIER      {LETTER}({LETTER}|{DIGIT})*


INT_SUFFIX_U    [uU]
INT_SUFFIX_L    [lL]
INT_SUFFIX_LL   ([lL][lL])
INT_SUFFIX      ({INT_SUFFIX_U}?{INT_SUFFIX_L}?)|({INT_SUFFIX_U}?{INT_SUFFIX_LL}?)|({INT_SUFFIX_L}?{INT_SUFFIX_U}?)|({INT_SUFFIX_LL}?{INT_SUFFIX_U}?)

FLOAT_SUFFIX    [fFlL]

INTEGER_LITERAL  {DIGIT}+{INT_SUFFIX}?
FLOAT_LITERAL    ({DIGIT}*\.{DIGIT}+|{DIGIT}+\.){FLOAT_SUFFIX}?
BOOLEAN_LITERAL  (true|false)
EXPONENT         [eE][+-]?{DIGIT}+
EXPONENT_NUMBER  ({DIGIT}+\.{DIGIT}*|\.{DIGIT}+|{DIGIT}+){EXPONENT}{FLOAT_SUFFIX}?

HEX_DIGIT       [0-9a-fA-F]
OCT_DIGIT       [0-7]
BIN_DIGIT       [01]
HEX_LITERAL     0[xX]{HEX_DIGIT}+{INT_SUFFIX}?
OCT_LITERAL     0{OCT_DIGIT}+{INT_SUFFIX}?
BIN_LITERAL     0[bB]{BIN_DIGIT}+{INT_SUFFIX}?

/* invalid number */
FLOAT_BASE   ({DIGIT}+\.{DIGIT}*|\.{DIGIT}+|{DIGIT}+)
INVALID_FLOAT1   \.{EXPONENT}
INVALID_FLOAT_INCOMPLETE  {FLOAT_BASE}[eE][+-]?$
INVALID_FLOAT_BAD_EXP  {FLOAT_BASE}[eE][+-]?[^0-9\n\t ;\)\}\]\,+-][a-zA-Z0-9_]*
INVALID_IDENTIFIER {DIGIT}+{LETTER}({LETTER}|{DIGIT})*

/* These now consume the whole malformed token (prefix of valid digits
   + the first bad character + any trailing alnum chars) instead of only
   matching when the very first digit after the base is already invalid.
   That's what makes them win flex's longest-match rule over
   INVALID_IDENTIFIER for things like 0b1021 or 0x1G. */
INVALID_HEX     0[xX]{HEX_DIGIT}*[g-zG-Z_][a-zA-Z0-9_]*
INVALID_BIN     0[bB]{BIN_DIGIT}*[2-9a-zA-Z_][a-zA-Z0-9_]*
INVALID_OCT     0{OCT_DIGIT}*[89][0-9a-zA-Z_]*

STRING_CONTENT   (\\.|[^"\\\r\n])*
SINGLE_CHAR_CONTENT  (\\.|[^'\\\r\n])
STRING_LITERAL   (L|u8|u|U)?\"({STRING_CONTENT})\"
CHAR_LITERAL     (L|u8|u|U)?'{SINGLE_CHAR_CONTENT}'
EMPTY_CHAR_LITERAL   (L|u8|u|U)?''
MULTI_CHAR_LITERAL   (L|u8|u|U)?'{SINGLE_CHAR_CONTENT}{SINGLE_CHAR_CONTENT}+'

UNTERMINATED_STRING  (L|u8|u|U)?\"([^"\\\r\n]|\\.)*$
UNTERMINATED_CHAR    (L|u8|u|U)?'([^'\\\r\n]|\\.)*$

WHITESPACE      [ \t]+
NEWLINE         \n
COMMENT_SINGLE  "//".*
COMMENT_MULTI   "/*"([^*]|\*+[^*/])*\*+"/"
INVALID_MULTI   "/*"([^*]|\*+[^*/])*

%%

 /* preprocessor */
^[ \t]*"#"[ \t]*"include"  { addToken("PP_INCLUDE", yytext); BEGIN(INCL); }
<INCL>[ \t]+               ; /* skip spaces between #include and the header name */
<INCL>"<"[^>\n]+">"        { addToken("HEADER_NAME", yytext); BEGIN(INITIAL); }
<INCL>\"[^\"\n]+\"         { addToken("HEADER_NAME", yytext); BEGIN(INITIAL); }
<INCL>[^ \t\n][^\n]*       { addError(yytext, "Malformed include directive"); BEGIN(INITIAL); }
<INCL>\n                   { currentLineNumber++; currentColumn = 1; BEGIN(INITIAL); }

^[ \t]*"#"[ \t]*"define"   { addToken("PP_DEFINE", yytext); }

{INVALID_MULTI}       { addError(yytext, "Unterminated comment");
                        char *p = yytext;
                        while (*p) {
                            if (*p == '\n') { currentLineNumber++; currentColumn = 1; }
                            p++;
                        }
                      }
{COMMENT_SINGLE}      { /* skip single-line comments */ }
{COMMENT_MULTI}       {
                        char *p = yytext;
                        while (*p) {
                            if (*p == '\n') { currentLineNumber++; currentColumn = 1; }
                            p++;
                        }
                      }

{NEWLINE}             { currentLineNumber++; currentColumn = 1; }
{WHITESPACE}          { /* skip whitespace */ }
"\r"                  { /* skip carriage return */ }

 /* keywords */
"bool"                { addToken("KEYWORD", yytext); addKeyword(yytext); }
"break"               { addToken("KEYWORD", yytext); addKeyword(yytext); }
"case"                { addToken("KEYWORD", yytext); addKeyword(yytext); }
"char"                { addToken("KEYWORD", yytext); addKeyword(yytext); }
"const"               { addToken("KEYWORD", yytext); addKeyword(yytext); }
"continue"            { addToken("KEYWORD", yytext); addKeyword(yytext); }
"default"             { addToken("KEYWORD", yytext); addKeyword(yytext); }
"do"                  { addToken("KEYWORD", yytext); addKeyword(yytext); }
"double"              { addToken("KEYWORD", yytext); addKeyword(yytext); }
"else"                { addToken("KEYWORD", yytext); addKeyword(yytext); }
"extern"              { addToken("KEYWORD", yytext); addKeyword(yytext); }
"float"               { addToken("KEYWORD", yytext); addKeyword(yytext); }
"for"                 { addToken("KEYWORD", yytext); addKeyword(yytext); }
"friend"              { addToken("KEYWORD", yytext); addKeyword(yytext); }
"goto"                { addToken("KEYWORD", yytext); addKeyword(yytext); }
"if"                  { addToken("KEYWORD", yytext); addKeyword(yytext); }
"inline"              { addToken("KEYWORD", yytext); addKeyword(yytext); }
"int"                 { addToken("KEYWORD", yytext); addKeyword(yytext); }

"long"[ \t]+"long"    { addToken("KEYWORD", yytext); addKeyword(yytext); }
"long"                { addToken("KEYWORD", yytext); addKeyword(yytext); }

"nullptr"             { addToken("KEYWORD", yytext); addKeyword(yytext); }
"operator"            { addToken("KEYWORD", yytext); addKeyword(yytext); }
"return"              { addToken("KEYWORD", yytext); addKeyword(yytext); }
"short"               { addToken("KEYWORD", yytext); addKeyword(yytext); }
"signed"              { addToken("KEYWORD", yytext); addKeyword(yytext); }
"sizeof"              { addToken("KEYWORD", yytext); addKeyword(yytext); }
"static"              { addToken("KEYWORD", yytext); addKeyword(yytext); }
"struct"              { addToken("KEYWORD", yytext); addKeyword(yytext); }
"switch"              { addToken("KEYWORD", yytext); addKeyword(yytext); }
"template"            { addToken("KEYWORD", yytext); addKeyword(yytext); }
"typename"            { addToken("KEYWORD", yytext); addKeyword(yytext); }
"typedef"             { addToken("KEYWORD", yytext); addKeyword(yytext); }
"unsigned"            { addToken("KEYWORD", yytext); addKeyword(yytext); }
"void"                { addToken("KEYWORD", yytext); addKeyword(yytext); }
"while"               { addToken("KEYWORD", yytext); addKeyword(yytext); }
"class"               { addToken("KEYWORD", yytext); addKeyword(yytext); }
"new"                 { addToken("KEYWORD", yytext); addKeyword(yytext); }
"delete"              { addToken("KEYWORD", yytext); addKeyword(yytext); }
"public"              { addToken("KEYWORD", yytext); addKeyword(yytext); }
"private"             { addToken("KEYWORD", yytext); addKeyword(yytext); }
"protected"           { addToken("KEYWORD", yytext); addKeyword(yytext); }
"until"               { addToken("KEYWORD", yytext); addKeyword(yytext); }
"enum"                { addToken("KEYWORD", yytext); addKeyword(yytext); }
"union"               { addToken("KEYWORD", yytext); addKeyword(yytext); }
"auto"                { addToken("KEYWORD", yytext); addKeyword(yytext); }
"register"            { addToken("KEYWORD", yytext); addKeyword(yytext); }
"volatile"            { addToken("KEYWORD", yytext); addKeyword(yytext); }
"this"                { addToken("KEYWORD", yytext); addKeyword(yytext); }

 /* library functions */
"printf"              { addToken("PRINTF_FUNCTION", yytext); }
"scanf"               { addToken("SCANF_FUNCTION", yytext); }
"malloc"              { addToken("MALLOC_FUNCTION", yytext); }
"calloc"              { addToken("CALLOC_FUNCTION", yytext); }
"realloc"             { addToken("REALLOC_FUNCTION", yytext); }
"free"                { addToken("FREE_FUNCTION", yytext); }

 /* operators */
"++"                  { addToken("OPERATOR", yytext); }
"--"                  { addToken("OPERATOR", yytext); }
"+"                   { addToken("OPERATOR", yytext); }
"-"                   { addToken("OPERATOR", yytext); }
"*"                   { addToken("OPERATOR", yytext); }
"/"                   { addToken("OPERATOR", yytext); }
"%"                   { addToken("OPERATOR", yytext); }

"+="                  { addToken("OPERATOR", yytext); }
"-="                  { addToken("OPERATOR", yytext); }
"*="                  { addToken("OPERATOR", yytext); }
"/="                  { addToken("OPERATOR", yytext); }
"%="                  { addToken("OPERATOR", yytext); }
"="                   { addToken("OPERATOR", yytext); }

"=="                  { addToken("OPERATOR", yytext); }
"!="                  { addToken("OPERATOR", yytext); }
"<="                  { addToken("OPERATOR", yytext); }
">="                  { addToken("OPERATOR", yytext); }
"<"                   { addToken("OPERATOR", yytext); }
">"                   { addToken("OPERATOR", yytext); }

"&&"                  { addToken("OPERATOR", yytext); }
"||"                  { addToken("OPERATOR", yytext); }
"!"                   { addToken("OPERATOR", yytext); }

"<<="                 { addToken("OPERATOR", yytext); }
">>="                 { addToken("OPERATOR", yytext); }
"<<"                  { addToken("OPERATOR", yytext); }
">>"                  { addToken("OPERATOR", yytext); }
"&="                  { addToken("OPERATOR", yytext); }
"|="                  { addToken("OPERATOR", yytext); }
"^="                  { addToken("OPERATOR", yytext); }
"&"                   { addToken("OPERATOR", yytext); }  /* also address-of / binary AND -> resolved by parser */
"|"                   { addToken("OPERATOR", yytext); }
"^"                   { addToken("OPERATOR", yytext); }
"~"                   { addToken("OPERATOR", yytext); }

 /* delimiters */
";"                   { addToken("SEMICOLON", yytext); }
","                   { addToken("COMMA", yytext); }
"("                   { addToken("LEFT_PAREN", yytext); }
")"                   { addToken("RIGHT_PAREN", yytext); }
"{"                   { addToken("LEFT_BRACE", yytext); }
"}"                   { addToken("RIGHT_BRACE", yytext); }
"["                   { addToken("LEFT_BRACKET", yytext); }
"]"                   { addToken("RIGHT_BRACKET", yytext); }
"->"                  { addToken("OPERATOR", yytext); }
"::"                  { addToken("OPERATOR", yytext); }
":"                   { addToken("COLON", yytext); }
"?"                   { addToken("QUESTION_MARK", yytext); }
"#"                   { addToken("HASH", yytext); }

{UNTERMINATED_STRING} { addError(yytext, "Unterminated string"); }
{UNTERMINATED_CHAR}   { addError(yytext, "Unterminated character"); }

 /* Invalid number formats */
{INVALID_FLOAT1}            { addError(yytext, "Missing digits before exponent"); }
{INVALID_FLOAT_INCOMPLETE}  { addError(yytext, "Incomplete exponent"); }
{INVALID_FLOAT_BAD_EXP}     { addError(yytext, "Invalid exponent"); }
{FLOAT_BASE}[eE][+-]?       { addError(yytext, "Incomplete exponent"); }
{INVALID_HEX}                { addError(yytext, "Invalid hex literal"); }
{INVALID_BIN}                { addError(yytext, "Invalid binary literal"); }
{INVALID_OCT}                { addError(yytext, "Invalid octal literal"); }

{HEX_LITERAL}                    { addToken("HEXADECIMAL_LITERAL", yytext); }
{OCT_LITERAL}                    { addToken("OCTAL_LITERAL", yytext); }
{BIN_LITERAL}                    { addToken("BINARY_LITERAL", yytext); }
{FLOAT_BASE}[eE][+-]?{DIGIT}+    { addToken("EXPONENT_NUMBER_LITERAL", yytext); }
{EXPONENT_NUMBER}                { addToken("EXPONENT_NUMBER_LITERAL", yytext); }
{INTEGER_LITERAL}                { addToken("INTEGER_LITERAL", yytext); }
{FLOAT_LITERAL}                  { addToken("FLOAT_LITERAL", yytext); }
{BOOLEAN_LITERAL}                { addToken("BOOLEAN_LITERAL", yytext); }
{STRING_LITERAL}                 { addToken("STRING_LITERAL", yytext); }
{EMPTY_CHAR_LITERAL}             { addError(yytext, "Empty character literal"); }
{MULTI_CHAR_LITERAL}             { addError(yytext, "Multi-character literal (only one character allowed)"); }
{CHAR_LITERAL}                   { addToken("CHAR_LITERAL", yytext); }

 /* Identifiers */
{IDENTIFIER}          { addToken("IDENTIFIER", yytext); addSymbol(yytext); }
"..."                 { addToken("ELLIPSIS", yytext); }
"."                   { addToken("DOT", yytext); }
{INVALID_IDENTIFIER}  { addError(yytext, "Invalid identifier"); }
.                     { addError(yytext, "Unrecognized character"); }

%%

int main(int argc, char* argv[]) {
    bool showSymbolTables = false;
    vector<string> positional;

    for (int i = 1; i < argc; i++) {
        string arg = argv[i];
        if (arg == "--tables" || arg == "-t") {
            showSymbolTables = true;
        } else {
            positional.push_back(arg);
        }
    }

    if (positional.empty()) {
        cout << "Usage: " << argv[0] << " <input_file> [output_file] [--tables]" << endl;
        cout << "  input_file  : Source file to analyze" << endl;
        cout << "  output_file : Output file for results (optional, defaults to stdout)" << endl;
        cout << "  --tables    : Also print the symbol/keyword tables (optional; off by default" << endl;
        cout << "                so the default output is just the required token table)" << endl;
        cout << "Examples:" << endl;
        cout << "  " << argv[0] << " test.c" << endl;
        cout << "  " << argv[0] << " test.c output.txt" << endl;
        cout << "  " << argv[0] << " test.c output.txt --tables" << endl;
        return 1;
    }

    FILE* inputFile = fopen(positional[0].c_str(), "r");
    if (!inputFile) {
        cerr << "Error: Cannot open input file '" << positional[0] << "'" << endl;
        return 1;
    }
    yyin = inputFile;

    if (positional.size() >= 2) {
        const string& outputFileName = positional[1];
        if (!freopen(outputFileName.c_str(), "w", stdout)) {
            cerr << "Error: Cannot open output file '" << outputFileName << "'" << endl;
            fclose(inputFile);
            return 1;
        }
    }

    yylex();
    printAnalysisResults();
    if (showSymbolTables) {
        printSymbolTable();
    }

    fclose(inputFile);
    return errorList.empty() ? 0 : 1;
}
