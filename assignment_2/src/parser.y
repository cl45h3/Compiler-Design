%{

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>

using std::cout; using std::cerr; using std::endl; using std::string;

struct SyntaxError { string message; int lineNumber; int column; };
extern int tokenStartLine, tokenStartColumn, currentLineNumber;
extern bool currentParserTokenIsLexicalError;
extern void registerTypeName(const char* name);
extern bool isKnownTypeName(const char* name);
extern void printTokenTable();
extern void printLexicalErrors();
extern size_t lexicalErrorCount();
extern FILE* yyin;
extern int yylex();
void yyerror(const char* message);

std::vector<SyntaxError> syntaxErrorList;

static int lastYyerrorLine = 0;
static int lastYyerrorColumn = 0;

static string userFacingBisonMessage(const char* raw) {
    string message = raw ? raw : "syntax error";
    const string internalExpectation = ", expecting MALFORMED_DIRECTIVE";
    const auto expectation = message.find(internalExpectation);
    if (expectation != string::npos) message.erase(expectation);
    const auto eof = message.find("$end");
    if (eof != string::npos) message.replace(eof, 4, "end of file");
    const auto semicolon = message.find("SEMICOLON");
    if (semicolon != string::npos) message.replace(semicolon, 9, "';'");
    const auto rightParen = message.find("RIGHT_PAREN");
    if (rightParen != string::npos) message.replace(rightParen, 11, "')'");
    const auto assign = message.find("ASSIGN");
    if (assign != string::npos) message.replace(assign, 6, "'='");
    return message;
}
static void addSyntaxError(const char* message) {

    if (currentParserTokenIsLexicalError) return;

    const int errorLine = lastYyerrorLine ? lastYyerrorLine : tokenStartLine;
    const int errorColumn = lastYyerrorColumn ? lastYyerrorColumn : tokenStartColumn;
    if (!syntaxErrorList.empty() && syntaxErrorList.back().lineNumber == errorLine &&
        syntaxErrorList.back().column == errorColumn) return;
    syntaxErrorList.push_back({userFacingBisonMessage(message), errorLine, errorColumn});
}
void reportSyntaxErrorAt(int line, int column, const char* message) {
    syntaxErrorList.push_back({message, line, column});
}

static void replaceLookaheadErrorWithMissingSemicolon(int line, int column) {

    if (!syntaxErrorList.empty()) syntaxErrorList.pop_back();
    reportSyntaxErrorAt(line, column, "expected ';' after declaration");
}
%}

%union { char* text; }
%debug
%locations

%error-verbose

%expect 45

%token <text> BOOL BREAK CASE CHAR CONST CONSTEXPR CONTINUE DEFAULT DO DOUBLE ELSE EXTERN FLOAT FOR FRIEND GOTO IF INLINE INT LONG LONG_LONG NULLPTR OPERATOR RETURN SHORT SIGNED SIZEOF STATIC STRUCT SWITCH TEMPLATE TYPENAME TYPEDEF UNSIGNED VOID WHILE CLASS NEW DELETE PUBLIC PRIVATE PROTECTED UNTIL ENUM UNION AUTO REGISTER VOLATILE THIS
%token <text> IDENTIFIER TYPE_NAME INTEGER_LITERAL FLOAT_LITERAL EXPONENT_NUMBER_LITERAL HEXADECIMAL_LITERAL BINARY_LITERAL BOOLEAN_LITERAL STRING_LITERAL CHAR_LITERAL
%token <text> PRINTF_FUNCTION SCANF_FUNCTION MALLOC_FUNCTION CALLOC_FUNCTION REALLOC_FUNCTION FREE_FUNCTION
%token <text> PP_INCLUDE HEADER_NAME PP_DEFINE
%token <text> INC DEC PLUS MINUS STAR SLASH PERCENT ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ASSIGN EQ NE LE GE LT GT ANDAND OROR NOT SHL_ASSIGN SHR_ASSIGN SHL SHR AND_ASSIGN OR_ASSIGN XOR_ASSIGN BITAND BITOR BITXOR BITNOT ARROW SCOPE
%token <text> SEMICOLON COMMA LEFT_PAREN RIGHT_PAREN LEFT_BRACE RIGHT_BRACE LEFT_BRACKET RIGHT_BRACKET COLON QUESTION_MARK HASH DOT ELLIPSIS MALFORMED_DIRECTIVE INVALID_TOKEN

%type <text> declarator direct_declarator function_pointer_declarator function_declarator function_direct_declarator named_identifier tag_identifier class_identifier qualified_name class_head enum_head union_head declaration_specifiers type_specifier struct_specifier struct_body_opt

%right ASSIGN ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN AND_ASSIGN OR_ASSIGN XOR_ASSIGN SHL_ASSIGN SHR_ASSIGN
%right QUESTION_MARK COLON
%left COMMA
%left OROR
%left ANDAND
%left BITOR
%left BITXOR
%left BITAND
%left EQ NE
%left LT GT LE GE
%left SHL SHR
%left PLUS MINUS
%left STAR SLASH PERCENT
%right NOT BITNOT INC DEC SIZEOF UMINUS UNARY
%left LEFT_BRACKET RIGHT_BRACKET LEFT_PAREN RIGHT_PAREN DOT ARROW SCOPE
%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE

%start translation_unit

%%

translation_unit
    : /* empty */
    | translation_unit external_declaration
    ;

external_declaration
    : preprocessor_directive
    | function_definition
    | function_declaration
    | declaration
    | typedef_declaration
    | class_declaration
    | enum_declaration
    | union_declaration
    | template_declaration
    | malformed_function_definition

    | error SEMICOLON { yyerrok; }

    | error RIGHT_BRACE { yyerrok; }
    ;

preprocessor_directive
    : PP_INCLUDE HEADER_NAME
    | PP_DEFINE IDENTIFIER constant_expression
    | PP_DEFINE IDENTIFIER
    | IDENTIFIER MALFORMED_DIRECTIVE
      { reportSyntaxErrorAt(@2.first_line, @2.first_column,
                            "preprocessor directive must begin a line"); }
    ;

template_declaration
    : template_head external_declaration
    ;
template_head
    : TEMPLATE LT TYPENAME IDENTIFIER GT { registerTypeName($4); }
    | TEMPLATE LT CLASS IDENTIFIER GT { registerTypeName($4); }
    ;


class_head
    : CLASS class_identifier { $$ = $2; }
    ;

class_identifier
    : IDENTIFIER { $$ = $1; }
    | TYPE_NAME { $$ = $1; }
    ;
enum_head
    : ENUM tag_identifier { registerTypeName($2); $$ = $2; }
    ;
union_head
    : UNION tag_identifier { registerTypeName($2); $$ = $2; }
    ;

class_declaration
    : class_head inheritance_opt LEFT_BRACE member_list RIGHT_BRACE SEMICOLON
      { registerTypeName($1); }
    | class_head inheritance_opt LEFT_BRACE member_list RIGHT_BRACE
      { registerTypeName($1); reportSyntaxErrorAt(@5.first_line, @5.last_column + 1, "expected ';' after class definition"); }

    | class_head LEFT_PAREN error RIGHT_PAREN LEFT_BRACE member_list RIGHT_BRACE SEMICOLON { yyerrok; }
    ;
inheritance_opt
    : /* empty */
    | COLON access_specifier_opt base_class_list
    ;
access_specifier_opt
    : /* empty */
    | access_specifier
    ;
access_specifier
    : PUBLIC | PRIVATE | PROTECTED
    ;
base_class_list
    : qualified_name
    | TYPE_NAME
    | base_class_list COMMA access_specifier_opt qualified_name
    ;
member_list
    : /* empty */
    | member_list member_declaration
    ;
member_declaration
    : access_specifier COLON
    | function_definition
    | function_declaration
    | declaration
    | typedef_declaration
    | class_declaration
    | enum_declaration
    | union_declaration
    | constructor_definition
    | constructor_declaration
    | destructor_definition
    | destructor_declaration
    | malformed_function_definition
    ;
constructor_definition
    : IDENTIFIER LEFT_PAREN parameter_list_opt RIGHT_PAREN compound_statement
    ;
constructor_declaration
    : IDENTIFIER LEFT_PAREN parameter_list_opt RIGHT_PAREN SEMICOLON
    ;

destructor_definition
    : BITNOT IDENTIFIER LEFT_PAREN RIGHT_PAREN compound_statement
    ;
destructor_declaration
    : BITNOT IDENTIFIER LEFT_PAREN RIGHT_PAREN SEMICOLON
    ;

union_declaration
    : union_head LEFT_BRACE member_list RIGHT_BRACE SEMICOLON
    | union_head LEFT_BRACE member_list RIGHT_BRACE
      { reportSyntaxErrorAt(@4.first_line, @4.last_column + 1, "expected ';' after union definition"); }
    ;
enum_declaration
    : enum_head LEFT_BRACE enumerator_list_opt RIGHT_BRACE SEMICOLON
    | enum_head LEFT_BRACE enumerator_list_opt RIGHT_BRACE
      { reportSyntaxErrorAt(@4.first_line, @4.last_column + 1, "expected ';' after enum definition"); }
    ;
enumerator_list_opt
    : /* empty */ | enumerator_list
    ;
enumerator_list
    : named_identifier
    | named_identifier ASSIGN constant_expression
    | enumerator_list COMMA named_identifier
    | enumerator_list COMMA named_identifier ASSIGN constant_expression
    ;

function_definition
    : declaration_specifiers function_declarator compound_statement
    ;

malformed_function_definition
    : declaration_specifiers declarator compound_statement
      { reportSyntaxErrorAt(@3.first_line, @3.first_column,
                            "expected parameter list before function body"); }
    ;

declaration
    : declaration_specifiers SEMICOLON
      { if (std::string($1) != "@struct_definition")
            reportSyntaxErrorAt(@2.first_line, @2.first_column,
                                "declaration requires a declarator"); }
    | declaration_specifiers init_declarator_list SEMICOLON

    | declaration_specifiers init_declarator_list missing_declaration_chain SEMICOLON
      { reportSyntaxErrorAt(@2.last_line, @2.last_column + 1,
                            "expected ';' after declaration"); }

    | declaration_specifiers init_declarator_list error SEMICOLON
      { if (@3.first_line > @2.last_line)
            replaceLookaheadErrorWithMissingSemicolon(@2.last_line, @2.last_column + 1);
        yyerrok; }
    | declaration_specifiers init_declarator_list error INVALID_TOKEN
      { if (@3.first_line > @2.last_line)
            replaceLookaheadErrorWithMissingSemicolon(@2.last_line, @2.last_column + 1);
        yyerrok; }
    ;
missing_declaration_chain
    : declaration_specifiers init_declarator_list
    | missing_declaration_chain declaration_specifiers init_declarator_list
      { reportSyntaxErrorAt(@1.last_line, @1.last_column + 1,
                            "expected ';' after declaration"); }
    ;
function_declaration
    : declaration_specifiers function_declarator SEMICOLON
    ;
typedef_declaration
    : TYPEDEF declaration_specifiers typedef_declarator_list SEMICOLON
    ;
typedef_declarator_list
    : typedef_declarator
    | typedef_declarator_list COMMA typedef_declarator
    ;
typedef_declarator
    : declarator { registerTypeName($1); }
    | declarator ASSIGN initializer { registerTypeName($1); }
    ;

declaration_specifiers
    : declaration_prefix_opt type_specifier type_suffixes { $$ = $2; }
    ;
declaration_prefix_opt
    : /* empty */
    | declaration_prefix_opt declaration_prefix
    ;
declaration_prefix
    : type_qualifier | storage_class_specifier | function_specifier | constexpr_specifier
    ;
type_suffixes
    : /* empty */
    | type_suffixes type_suffix
    ;
type_suffix
    : SHORT | LONG | LONG_LONG | SIGNED | UNSIGNED | CONST | VOLATILE
    ;
storage_class_specifier
    : STATIC | EXTERN | REGISTER | FRIEND
    ;
function_specifier
    : INLINE
    ;
constexpr_specifier
    : CONSTEXPR
    ;
type_qualifier
    : CONST | VOLATILE
    ;
type_specifier
    : VOID { $$ = $1; } | CHAR { $$ = $1; } | INT { $$ = $1; }
    | FLOAT { $$ = $1; } | DOUBLE { $$ = $1; } | BOOL { $$ = $1; } | AUTO { $$ = $1; }
    | SHORT { $$ = $1; } | LONG { $$ = $1; } | LONG_LONG { $$ = $1; }
    | SIGNED { $$ = $1; } | UNSIGNED { $$ = $1; }
    | TYPE_NAME { $$ = $1; }
    | struct_specifier { $$ = $1; }
    | ENUM tag_identifier { $$ = $2; }
    | UNION tag_identifier { $$ = $2; }
    | TYPENAME qualified_name { $$ = $2; }
    ;

struct_specifier
    : STRUCT tag_identifier struct_body_opt { $$ = $3; }
    | STRUCT LEFT_BRACE member_list RIGHT_BRACE { $$ = strdup("@struct_definition"); }
    ;
struct_body_opt
    : /* empty */ { $$ = strdup("@struct_type"); }
    | LEFT_BRACE member_list RIGHT_BRACE { $$ = strdup("@struct_definition"); }
    ;

init_declarator_list
    : init_declarator
    | init_declarator_list COMMA init_declarator
    ;
init_declarator
    : declarator
    | declarator ASSIGN initializer
    | declarator LEFT_PAREN argument_expression_list_opt RIGHT_PAREN
    ;
initializer
    : assignment_expression
    | LEFT_BRACE initializer_list_opt RIGHT_BRACE
    ;
initializer_list_opt
    : /* empty */ | initializer_list
    ;
initializer_list
    : initializer
    | initializer_list COMMA initializer
    | initializer_list COMMA
    ;

declarator
    : pointer_opt reference_opt direct_declarator { $$ = $3; }
    | function_pointer_declarator { $$ = $1; }
    ;
reference_opt
    : /* empty */ | reference
    ;
reference
    : BITAND | ANDAND
    ;
pointer_opt
    : /* empty */
    | pointer
    ;

pointer
    : STAR pointer_after_star
    ;
pointer_after_star
    : /* empty */
    | pointer
    | type_qualifier_list pointer_after_star
    ;
type_qualifier_list
    : type_qualifier
    ;
direct_declarator
    : qualified_name { $$ = $1; }
    | OPERATOR overload_operator { $$ = $1; }
    | LEFT_PAREN declarator RIGHT_PAREN { $$ = $2; }

    | direct_declarator LEFT_BRACKET constant_expression_opt RIGHT_BRACKET { $$ = $1; }
    ;

function_pointer_declarator
    : LEFT_PAREN pointer named_identifier RIGHT_PAREN LEFT_PAREN parameter_list_opt RIGHT_PAREN { $$ = $3; }
    ;
constant_expression_opt
    : /* empty */
    | constant_expression
    ;

function_declarator
    : pointer_opt reference_opt function_direct_declarator function_cv_qualifier_seq_opt { $$ = $3; }
    ;

function_cv_qualifier_seq_opt
    : /* empty */
    | function_cv_qualifier_seq_opt type_qualifier
    ;
function_direct_declarator
    : named_identifier LEFT_PAREN parameter_list_opt RIGHT_PAREN { $$ = $1; }
    | qualified_name LEFT_PAREN parameter_list_opt RIGHT_PAREN { $$ = $1; }
    | OPERATOR overload_operator LEFT_PAREN parameter_list_opt RIGHT_PAREN { $$ = $1; }
    | LEFT_PAREN function_declarator RIGHT_PAREN LEFT_PAREN parameter_list_opt RIGHT_PAREN { $$ = $2; }
    ;
overload_operator
    : PLUS | MINUS | STAR | SLASH | PERCENT | ASSIGN | EQ | LT | GT | LEFT_BRACKET RIGHT_BRACKET | LEFT_PAREN RIGHT_PAREN
    ;
parameter_list_opt
    : /* empty */ | parameter_list
    ;
parameter_list
    : parameter_declaration
    | parameter_list COMMA parameter_declaration
    | parameter_list COMMA ELLIPSIS
    | ELLIPSIS
    ;
parameter_declaration
    : declaration_specifiers parameter_declarator default_argument_opt
    | declaration_specifiers default_argument_opt
    ;
parameter_declarator
    : declarator
    ;
default_argument_opt
    : /* empty */
    | ASSIGN initializer
    ;

compound_statement
    : LEFT_BRACE block_item_list_opt RIGHT_BRACE
    ;
block_item_list_opt
    : /* empty */ | block_item_list
    ;
block_item_list
    : block_item
    | block_item_list block_item
    ;
block_item
    : statement
    | declaration
    | typedef_declaration
    ;

statement
    : compound_statement
    | expression_statement
    | selection_statement
    | iteration_statement
    | jump_statement
    | labeled_statement
    | error SEMICOLON { yyerrok; }
    ;
expression_statement
    : expression_opt SEMICOLON
    ;
selection_statement
    : IF LEFT_PAREN expression RIGHT_PAREN statement %prec LOWER_THAN_ELSE
    | IF LEFT_PAREN expression RIGHT_PAREN statement ELSE statement
    | SWITCH LEFT_PAREN expression RIGHT_PAREN statement

    | IF LEFT_PAREN malformed_condition statement %prec LOWER_THAN_ELSE
    | IF LEFT_PAREN malformed_condition statement ELSE statement
    | SWITCH LEFT_PAREN malformed_condition statement
    ;
malformed_condition
    : error RIGHT_PAREN { yyerrok; }
    ;
iteration_statement
    : WHILE LEFT_PAREN expression RIGHT_PAREN statement
    | UNTIL LEFT_PAREN expression RIGHT_PAREN statement
    | DO statement WHILE LEFT_PAREN expression RIGHT_PAREN SEMICOLON
    | DO statement UNTIL LEFT_PAREN expression RIGHT_PAREN SEMICOLON
    | FOR LEFT_PAREN for_init_opt SEMICOLON expression_opt SEMICOLON expression_opt RIGHT_PAREN statement
    | WHILE LEFT_PAREN malformed_condition statement
    | UNTIL LEFT_PAREN malformed_condition statement
    ;
for_init_opt
    : /* empty */
    | expression
    | declaration_specifiers init_declarator_list
    ;
jump_statement
    : GOTO named_identifier SEMICOLON
    | CONTINUE SEMICOLON
    | BREAK SEMICOLON
    | RETURN expression_opt SEMICOLON
    ;
labeled_statement
    : named_identifier COLON statement
    | CASE constant_expression COLON statement
    | DEFAULT COLON statement
    ;

expression_opt
    : /* empty */ | expression
    ;
expression
    : assignment_expression
    | expression COMMA assignment_expression
    ;
assignment_expression
    : conditional_expression

    | logical_or_expression assignment_operator assignment_expression
    ;
assignment_operator
    : ASSIGN | ADD_ASSIGN | SUB_ASSIGN | MUL_ASSIGN | DIV_ASSIGN | MOD_ASSIGN
    | AND_ASSIGN | OR_ASSIGN | XOR_ASSIGN | SHL_ASSIGN | SHR_ASSIGN
    ;
conditional_expression
    : logical_or_expression
    | logical_or_expression QUESTION_MARK expression COLON conditional_expression
    ;
constant_expression
    : conditional_expression
    ;
logical_or_expression
    : logical_and_expression | logical_or_expression OROR logical_and_expression
    ;
logical_and_expression
    : inclusive_or_expression | logical_and_expression ANDAND inclusive_or_expression
    ;
inclusive_or_expression
    : exclusive_or_expression | inclusive_or_expression BITOR exclusive_or_expression
    ;
exclusive_or_expression
    : and_expression | exclusive_or_expression BITXOR and_expression
    ;
and_expression
    : equality_expression | and_expression BITAND equality_expression
    ;
equality_expression
    : relational_expression | equality_expression EQ relational_expression | equality_expression NE relational_expression
    ;
relational_expression
    : shift_expression
    | relational_expression LT shift_expression | relational_expression GT shift_expression
    | relational_expression LE shift_expression | relational_expression GE shift_expression
    ;
shift_expression
    : additive_expression | shift_expression SHL additive_expression | shift_expression SHR additive_expression
    ;
additive_expression
    : multiplicative_expression | additive_expression PLUS multiplicative_expression | additive_expression MINUS multiplicative_expression
    ;
multiplicative_expression
    : cast_expression | multiplicative_expression STAR cast_expression | multiplicative_expression SLASH cast_expression | multiplicative_expression PERCENT cast_expression
    ;
cast_expression
    : unary_expression
    | LEFT_PAREN type_id RIGHT_PAREN cast_expression
    ;
type_id
    : declaration_specifiers pointer_opt
    ;
unary_expression
    : postfix_expression
    | INC unary_expression | DEC unary_expression
    | BITAND cast_expression | STAR cast_expression | PLUS cast_expression %prec UMINUS | MINUS cast_expression %prec UMINUS
    | NOT cast_expression | BITNOT cast_expression
    | SIZEOF unary_expression | SIZEOF LEFT_PAREN type_id RIGHT_PAREN
    | NEW type_id | NEW type_id LEFT_PAREN argument_expression_list_opt RIGHT_PAREN
    | NEW type_id LEFT_BRACKET expression RIGHT_BRACKET
    | NEW type_id LEFT_BRACKET RIGHT_BRACKET
    | DELETE cast_expression | DELETE LEFT_BRACKET RIGHT_BRACKET cast_expression
    ;
postfix_expression
    : primary_expression
    | postfix_expression LEFT_BRACKET expression RIGHT_BRACKET
    | postfix_expression LEFT_PAREN argument_expression_list_opt RIGHT_PAREN
    | postfix_expression DOT named_identifier
    | postfix_expression ARROW named_identifier
    | postfix_expression INC | postfix_expression DEC
    ;
argument_expression_list_opt
    : /* empty */ | argument_expression_list
    ;
argument_expression_list
    : assignment_expression
    | argument_expression_list COMMA assignment_expression
    ;
primary_expression
    : IDENTIFIER
    | IDENTIFIER SCOPE named_identifier
    | INTEGER_LITERAL | FLOAT_LITERAL | EXPONENT_NUMBER_LITERAL | HEXADECIMAL_LITERAL | BINARY_LITERAL | BOOLEAN_LITERAL | STRING_LITERAL | CHAR_LITERAL | NULLPTR | THIS
    | PRINTF_FUNCTION | SCANF_FUNCTION | MALLOC_FUNCTION | CALLOC_FUNCTION | REALLOC_FUNCTION | FREE_FUNCTION
    | LEFT_PAREN expression RIGHT_PAREN
    | lambda_expression
    ;
lambda_expression
    : LEFT_BRACKET capture_list_opt RIGHT_BRACKET LEFT_PAREN parameter_list_opt RIGHT_PAREN lambda_return_opt compound_statement
    ;
capture_list_opt
    : /* empty */ | capture_list
    ;
capture_list
    : capture_item | capture_list COMMA capture_item
    ;
capture_item
    : named_identifier | BITAND named_identifier | ASSIGN | BITAND
    ;
lambda_return_opt
    : /* empty */ | ARROW type_id
    ;
qualified_name
    : named_identifier { $$ = $1; }
    | qualified_name SCOPE named_identifier { $$ = $1; }
    ;
named_identifier
    : IDENTIFIER { $$ = $1; }
    ;

tag_identifier
    : IDENTIFIER { registerTypeName($1); $$ = $1; }
    | TYPE_NAME { $$ = $1; }
    ;

%%

void yyerror(const char* message) {
    lastYyerrorLine = tokenStartLine;
    lastYyerrorColumn = tokenStartColumn;
    addSyntaxError(message);
    lastYyerrorLine = 0;
    lastYyerrorColumn = 0;
}

int main(int argc, char* argv[]) {
    if (argc < 2 || argc > 3) {
        cerr << "Usage: " << argv[0] << " <input_file> [output_file]" << endl;
        return 1;
    }
    yyin = fopen(argv[1], "r");
    if (!yyin) { cerr << "Error: Cannot open input file '" << argv[1] << "'" << endl; return 1; }
    if (argc == 3 && !freopen(argv[2], "w", stdout)) {
        cerr << "Error: Cannot open output file '" << argv[2] << "'" << endl; fclose(yyin); return 1;
    }
    extern int yydebug;
    if (std::getenv("YYDEBUG")) yydebug = 1;
    int result = yyparse();
    if (lexicalErrorCount() == 0 && syntaxErrorList.empty() && result == 0) {
        printTokenTable();
    } else {
        printLexicalErrors();
        std::stable_sort(syntaxErrorList.begin(), syntaxErrorList.end(),
            [](const SyntaxError& left, const SyntaxError& right) {
                return left.lineNumber != right.lineNumber
                    ? left.lineNumber < right.lineNumber
                    : left.column < right.column;
            });
        for (const auto& e : syntaxErrorList)
            cout << "Syntax Error at line " << e.lineNumber << ", column " << e.column << ": " << e.message << endl;
        cout << "Summary: " << lexicalErrorCount() << " lexical error(s), "
             << syntaxErrorList.size() << " syntax error(s)." << endl;
    }
    fclose(yyin);
    return (lexicalErrorCount() == 0 && syntaxErrorList.empty() && result == 0) ? 0 : 1;
}
