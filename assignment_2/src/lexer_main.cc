#include <cstdio>
#include <iostream>
#include <string>
#include "parser.tab.h"

/* The parser executable defines this global. The lexer-only executable still
 * uses scanner actions that populate it, so it owns the standalone instance. */
YYSTYPE yylval;
YYLTYPE yylloc;

/* The parser provides this diagnostic sink. Lexer-only mode intentionally
 * reports lexical diagnostics only, just as Assignment 1 did. */
void reportSyntaxErrorAt(int, int, const char*) { }

extern FILE* yyin;
extern int yylex();
extern void printTokenTable();
extern void printLexicalErrors();
extern size_t lexicalErrorCount();

/* Assignment 1-compatible standalone scanner target. The syntax analyzer
 * remains the default executable; this target keeps lexical-only workflows
 * available without changing the scanner's categories or diagnostics. */
int main(int argc, char* argv[]) {
    if (argc < 2 || argc > 3) {
        std::cerr << "Usage: " << argv[0] << " <input_file> [output_file]" << std::endl;
        return 1;
    }
    yyin = fopen(argv[1], "r");
    if (!yyin) {
        std::cerr << "Error: Cannot open input file '" << argv[1] << "'" << std::endl;
        return 1;
    }
    if (argc == 3 && !freopen(argv[2], "w", stdout)) {
        std::cerr << "Error: Cannot open output file '" << argv[2] << "'" << std::endl;
        fclose(yyin);
        return 1;
    }
    while (yylex() != 0) { }
    if (lexicalErrorCount()) printLexicalErrors();
    printTokenTable();
    fclose(yyin);
    return lexicalErrorCount() ? 1 : 0;
}
