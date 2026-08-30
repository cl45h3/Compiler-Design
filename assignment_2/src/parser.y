%{
/* Assignment 2: Bison syntax analyzer.  The grammar deliberately checks
 * syntax only: names, types, and runtime meanings are outside its scope. */
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
#include <set>

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
static void addSyntaxError(const char* message) {
    /* The lexer has already issued the useful diagnostic for INVALID_TOKEN.
       Suppress only this immediate parser cascade; recovery still advances to
       the statement/block boundary, so later independent errors are kept. */
    if (currentParserTokenIsLexicalError) return;
    /* Bison can call yyerror more than once at the same recovery point. */
    if (!syntaxErrorList.empty() && syntaxErrorList.back().lineNumber == tokenStartLine &&
        syntaxErrorList.back().column == tokenStartColumn) return;
    syntaxErrorList.push_back({message, tokenStartLine, tokenStartColumn});
}
void reportSyntaxErrorAt(int line, int column, const char* message) {
    syntaxErrorList.push_back({message, line, column});
}
%}

%union { char* text; }
%debug
%locations
/* Audited with bison -v: C/C++ declarator/expression lookahead ambiguities. */
%expect 62

%token <text> BOOL BREAK CASE CHAR CONST CONSTEXPR CONTINUE DEFAULT DO DOUBLE ELSE EXTERN FLOAT FOR FRIEND GOTO IF INLINE INT LONG LONG_LONG NULLPTR OPERATOR RETURN SHORT SIGNED SIZEOF STATIC STRUCT SWITCH TEMPLATE TYPENAME TYPEDEF UNSIGNED VOID WHILE CLASS NEW DELETE PUBLIC PRIVATE PROTECTED UNTIL ENUM UNION AUTO REGISTER VOLATILE THIS
%token <text> IDENTIFIER TYPE_NAME INTEGER_LITERAL FLOAT_LITERAL EXPONENT_NUMBER_LITERAL HEXADECIMAL_LITERAL BINARY_LITERAL BOOLEAN_LITERAL STRING_LITERAL CHAR_LITERAL
%token <text> PRINTF_FUNCTION SCANF_FUNCTION MALLOC_FUNCTION CALLOC_FUNCTION REALLOC_FUNCTION FREE_FUNCTION
%token <text> PP_INCLUDE HEADER_NAME PP_DEFINE
%token <text> INC DEC PLUS MINUS STAR SLASH PERCENT ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ASSIGN EQ NE LE GE LT GT ANDAND OROR NOT SHL_ASSIGN SHR_ASSIGN SHL SHR AND_ASSIGN OR_ASSIGN XOR_ASSIGN BITAND BITOR BITXOR BITNOT ARROW SCOPE
%token <text> SEMICOLON COMMA LEFT_PAREN RIGHT_PAREN LEFT_BRACE RIGHT_BRACE LEFT_BRACKET RIGHT_BRACKET COLON QUESTION_MARK HASH DOT ELLIPSIS MALFORMED_DIRECTIVE INVALID_TOKEN

%type <text> declarator direct_declarator function_pointer_declarator function_declarator function_direct_declarator named_identifier tag_identifier qualified_name class_head struct_head enum_head union_head

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
    | struct_declaration
    | enum_declaration
    | union_declaration
    | template_declaration
    /* At file scope, an invalid expression statement can synchronize at its
       own semicolon. Without this rule, recovery could consume the closing
       brace of the next class/struct definition. */
    | error SEMICOLON { yyerrok; }
    /* A missing function parameter list ends at its closing brace. This keeps
       recovery local instead of eating a later function's return statement. */
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

/* Register tags as soon as their heads reduce, before member tokens scan. */
class_head
    : CLASS tag_identifier { registerTypeName($2); $$ = $2; }
    ;
struct_head
    : STRUCT tag_identifier { registerTypeName($2); $$ = $2; }
    ;
enum_head
    : ENUM tag_identifier { registerTypeName($2); $$ = $2; }
    ;
union_head
    : UNION tag_identifier { registerTypeName($2); $$ = $2; }
    ;

class_declaration
    : class_head inheritance_opt LEFT_BRACE member_list RIGHT_BRACE SEMICOLON
    | class_head inheritance_opt LEFT_BRACE member_list RIGHT_BRACE
      { reportSyntaxErrorAt(@5.first_line, @5.last_column + 1, "expected ';' after class definition"); }
    /* Deliberately invalid C++ form, retained solely as a local recovery
       boundary.  This prevents `class A() {}` from consuming declarations
       that follow its terminating semicolon. */
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
    | struct_declaration
    | enum_declaration
    | union_declaration
    | constructor_definition
    ;
constructor_definition
    : qualified_name LEFT_PAREN parameter_list_opt RIGHT_PAREN compound_statement
    ;

struct_declaration
    : struct_head LEFT_BRACE member_list RIGHT_BRACE SEMICOLON
    | struct_head LEFT_BRACE member_list RIGHT_BRACE
      { reportSyntaxErrorAt(@4.first_line, @4.last_column + 1, "expected ';' after struct definition"); }
    /* Same local recovery for invalid `struct A() {}` heads. */
    | struct_head LEFT_PAREN error RIGHT_PAREN LEFT_BRACE member_list RIGHT_BRACE SEMICOLON { yyerrok; }
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

declaration
    : declaration_specifiers init_declarator_list SEMICOLON
    /* If another declaration or block boundary follows, reduce the incomplete
       declaration locally. This reports each missing semicolon instead of
       letting `error SEMICOLON` swallow several declarations at once. */
    | declaration_specifiers init_declarator_list
      { reportSyntaxErrorAt(@2.last_line, @2.last_column + 1, "expected ';' after declaration"); }
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
    : declaration_prefix_opt type_specifier type_suffixes
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
    : VOID | CHAR | INT | FLOAT | DOUBLE | BOOL | AUTO
    | SHORT | LONG | LONG_LONG | SIGNED | UNSIGNED
    | TYPE_NAME
    | STRUCT tag_identifier
    | ENUM tag_identifier
    | UNION tag_identifier
    | TYPENAME qualified_name
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
/* Recursive pointer accepts int **p and int * const * volatile p. */
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
    /* Array-bound expressions are optional in the C++ declarator grammar.
       Whether the resulting unknown-bound/incomplete array is permitted is a
       later type/semantic constraint, deliberately outside this project. */
    | direct_declarator LEFT_BRACKET constant_expression_opt RIGHT_BRACKET { $$ = $1; }
    ;
/* Kept separate from ordinary declarators so `Type object(args)` is direct
   initialization rather than an attempted parameter declaration. */
function_pointer_declarator
    : LEFT_PAREN pointer named_identifier RIGHT_PAREN LEFT_PAREN parameter_list_opt RIGHT_PAREN { $$ = $3; }
    ;
constant_expression_opt
    : /* empty */
    | constant_expression
    ;
/* Unlike a variable declarator, a function definition must contain (...). */
function_declarator
    : pointer_opt reference_opt function_direct_declarator function_cv_qualifier_seq_opt { $$ = $3; }
    ;
/* Function cv qualifiers are syntactically part of a declarator. Whether a
   particular declaration is a non-static member function is semantic scope
   checking and intentionally outside this lexer/parser project. */
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
    ;
iteration_statement
    : WHILE LEFT_PAREN expression RIGHT_PAREN statement
    | UNTIL LEFT_PAREN expression RIGHT_PAREN statement
    | DO statement WHILE LEFT_PAREN expression RIGHT_PAREN SEMICOLON
    | DO statement UNTIL LEFT_PAREN expression RIGHT_PAREN SEMICOLON
    | FOR LEFT_PAREN for_init_opt SEMICOLON expression_opt SEMICOLON expression_opt RIGHT_PAREN statement
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
    /* C++ parses the complete logical-or expression on the left. Whether it
       is a modifiable lvalue (10 += 20, a + b = 102) is semantic analysis. */
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
/* Once a class/struct tag is registered, a later tag declaration scans as
   TYPE_NAME. Redeclaring that tag may be semantically ill-formed, but it is
   not a parser error in this syntax-only project. */
tag_identifier
    : IDENTIFIER { $$ = $1; }
    | TYPE_NAME { $$ = $1; }
    ;

%%

void yyerror(const char* message) { addSyntaxError(message); }

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
        for (const auto& e : syntaxErrorList)
            cout << "Syntax Error at line " << e.lineNumber << ", column " << e.column << ": " << e.message << endl;
        cout << "Summary: " << lexicalErrorCount() << " lexical error(s), "
             << syntaxErrorList.size() << " syntax error(s)." << endl;
    }
    fclose(yyin);
    return (lexicalErrorCount() == 0 && syntaxErrorList.empty() && result == 0) ? 0 : 1;
}
