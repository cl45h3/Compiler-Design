# Assignment 2 — Syntax Analyzer for a C/C++-style Language

This assignment extends the Assignment 1 Flex lexer into a small C/C++-style
syntax analyzer using Bison and C++17. The program reads raw source code,
keeps the Assignment 1 token table and lexical-error behaviour, and passes
individual tokens to Bison for syntax checking.

This is intentionally a lexer + parser project. It does not perform semantic
analysis, type checking, symbol resolution across scopes, code generation, or
preprocessing. For example, `10 += 20;` is syntactically valid even though a
real compiler would reject it later because the left side is not assignable.

## Group Contributors
- Vaibhav Kumar — Enrolment No. 24114103
- Samarth Maheshwari — Enrolment No. 24114084
- Rishabh Gupta — Enrolment No. 24114077
- Vishal Kumar Shaw — Enrolment No. 24114105

## Build and run

Required tools: `flex`, `bison`, `g++` with C++17 support, and `make`.

```sh
make clean
make

# Run the complete test folder
./run.sh

# Run one source file directly
./bin/syntax_analyzer test/test_1.cpp

# Save one result to a file
./bin/syntax_analyzer test/test_1.cpp output/test_1.cpp.out
```

`run.sh` processes C/C++ source files from `test/`, writes one `.out` file per
test into `output/`, and continues even when a test is intentionally invalid.

## Project layout

```text
src/lexer.l          Flex lexer adapted from Assignment 1
src/parser.y         Bison grammar, error handling, and program driver
src/lexer_main.cc    Lexer-only driver
test/                Source test cases
output/              Generated output from run.sh
makefile             Build rules
run.sh               Batch test runner
```

The generated scanner/parser files and binaries can always be recreated with
`make`, so they are not hand-edited.

## Output behaviour

For a valid source file, the analyzer prints the usual two-column table:

```text
Token                Token_Type
--------------------------------
int                  KEYWORD
main                 IDENTIFIER
...                  ...
```

The display token types are preserved from Assignment 1, including
`KEYWORD`, `IDENTIFIER`, literal types, `OPERATOR`, punctuation types,
preprocessor types, and the dedicated C-library-function types.

For an invalid source file, the token table is not printed. Instead, all
recoverable lexical and syntax errors are shown, followed by a summary:

```text
ERROR: Invalid identifier (cannot start with a digit) at line 4, column 5
Syntax Error at line 5, column 13: syntax error, unexpected ';'
Summary: 1 lexical error(s), 1 syntax error(s).
```

The lexer reports malformed literals, bad identifiers, invalid escapes,
unterminated strings/chars/comments, malformed hexadecimal/binary numbers,
and unknown characters. A bad lexeme is sent to Bison as an internal invalid
token, allowing the parser to skip that damaged construct without producing a
second fake syntax error for the same lexeme. Parsing still continues, so a
later independent syntax error is reported.

Parser recovery uses panic-mode boundaries such as `;`, `}`, and `)` rather
than stopping at the first mistake. The first invalid token is reported, the
rest of that broken construct is skipped silently, and parsing continues from
the next safe point. For a missing declaration semicolon, the diagnostic is
placed immediately after the incomplete declaration, not at the beginning of
the next valid line. Bison's verbose messages are enabled, and internal names
such as `$end` are displayed as `end of file` where possible.

## Lexer and parser connection

Assignment 1 printed broad categories such as `KEYWORD` and `OPERATOR`, which
is useful for a token table but not enough for parsing. The adapted lexer keeps
those display categories while returning distinct Bison tokens for every
keyword, operator, literal, and delimiter. Therefore the parser can tell
`if` from `while`, and `+` from `*`, while the output remains consistent with
the original assignment.

The project also uses the standard C/C++ typedef-name technique. Known type
names are stored in a set. When the parser reduces a `typedef`, class, struct,
enum, or union declaration, it registers the relevant name. Later occurrences
are returned as `TYPE_NAME` to Bison but remain displayed as `IDENTIFIER` in
the token table. `FILE` is pre-registered only for parser use so ordinary C
file-handling declarations can be parsed without adding a new display token.

## Supported syntax

The grammar covers the main Assignment 2 requirements:

- declarations, arrays, initializer lists, pointers, multi-level pointers,
  references, function pointers, prototypes, definitions, calls, recursion,
  variadic parameters, default arguments, and trailing function qualifiers;
- arithmetic, assignment, comparison, logical, bitwise, unary, postfix,
  conditional, cast, `sizeof`, member-access, call, subscript, `new`, and
  `delete` expressions;
- `if`/`else`, `for`, `while`, `do-while`, `until`, `do-until`, `switch`,
  `case`, `default`, labels, `goto`, `break`, `continue`, and `return`;
- `struct`, anonymous `typedef struct`, `class`, constructors, destructors,
  access sections, single-base inheritance, `enum`, `union`, templates,
  `typedef`, overloaded-operator declarators, lambdas, `this`, and `::`;
- `printf`, `scanf`, `malloc`, `calloc`, `realloc`, `free`, and ordinary calls
  such as `fopen`, `fclose`, `fread`, `fwrite`, and `fprintf`.

The grammar declares operator precedence and associativity from comma and
assignment through unary and postfix operators. The dangling-`else` rule is
handled explicitly with Bison precedence so `else` binds to the closest `if`.

`until` is parsed in the same shape as `while`, and `do statement until
(expression);` is parsed like `do-while`. The runtime meaning is outside the
scope of syntax analysis.

## Important parser-only assumptions

Some examples may look invalid to a C/C++ compiler but still pass here because
they require semantic analysis. Examples include assigning to a literal,
calling an undeclared function, duplicate names, or incomplete-array
restrictions such as `int a[][3];`. The parser checks the shape of the code;
a later semantic phase would decide whether types and declarations are legal.

Class, struct, enum, and union definitions require their terminating `;`.
For example, `class A {};` is valid and `class A {}` produces a missing-
semicolon diagnostic. `class A() {}` and `struct A() {}` are rejected because
parentheses do not belong in a class/struct definition head.

Raw `#include` and `#define` directives are recognized only at the start of a
line (apart from indentation). Macros are tokenized but never expanded. A
misplaced directive such as `goe #include <iostream>` is a syntax error.

## Tests

The test folder contains valid and deliberately invalid examples covering
basic language features, advanced C++ forms, recursion, switch fallthrough,
dangling `else`, templates, typedefs, struct members, constructors,
destructors, dense unary expressions, lexical errors, missing semicolons, and
error recovery. The expected purpose of each test is documented in comments
at the top of the test file or alongside the test suite.

Running `make` generates `src/parser.output` through `bison -v`. The report
contains the expected C/C++ subset ambiguities caused by declarations versus
expressions and by recovery rules. They are documented by the grammar and do
not prevent the analyzer from building or running.
