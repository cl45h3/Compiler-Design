# Assignment 2 — C/C++-style Syntax Analyzer

This repository extends the supplied Assignment 1 Flex scanner with a Bison
syntax analyzer. It scans one raw C/C++-style source file, keeps Assignment
1's token table and lexical diagnostics, and feeds distinct parser terminals
to Bison. It is a syntax recognizer only: no type checking, code generation,
macro expansion, or runtime execution is attempted.

## Build and run

Prerequisites: `flex`, `bison`, a C++17 compiler, and `make`.

```sh
make
./bin/syntax_analyzer test/test_basic_valid.c
./bin/syntax_analyzer test/test_basic_valid.c output/basic.out
./bin/lexer test/test_basic_valid.c       # Assignment 1-style lexer-only target
make run
# or: ./run.sh bin/syntax_analyzer [test-directory]
```

`run.sh` processes only C/C++ source extensions in `test/`, creates
`output/`, and writes one `<filename>.out` per test. Deliberately invalid
tests do not stop the batch run.

## Layout

```
src/parser.y       Bison grammar, precedence, recovery, and driver
src/lexer.l        Adapted Assignment 1 scanner and Bison token bridge
test/              15 self-describing source tests plus EXPECTED.md
makefile           Build rules for parser.tab.cc, lex.yy.cc, and executable
run.sh             Batch runner
```

Generated files (`src/parser.tab.cc`, `src/parser.tab.h`, `src/lex.yy.cc`,
`src/parser.output`) and output files are reproducible and are removed by
`make clean`.

## Output contract

If scanning and parsing both succeed, the program prints a two-column
`Token | Token_Type` table. The `Token_Type` values are exactly Assignment 1's
display vocabulary: `KEYWORD`, `IDENTIFIER`, literal categories, `OPERATOR`,
punctuator categories, preprocessor categories, and dedicated C-library
function categories.

If either stage finds errors, no token table is printed. All Assignment 1
lexical errors are printed, followed by every recoverable parser diagnostic:

```
Syntax Error at line <L>, column <C>: syntax error
```

Statement and block recovery productions synchronize at `;` and `}`, so
independent syntax errors are reported in one pass where recovery is possible.

## Lexer-to-Bison bridge and typedef handling

`src/lexer.l` still calls `addToken(display_type, yytext)` for each ordinary
token and retains the lexical-error rules. It also assigns `yylval.text` and
returns one distinct Bison token for every keyword, operator, literal, and
delimiter. Therefore `if`, `while`, `+`, `==`, and so on are no longer one
parser-facing bucket even though their printed display types remain unchanged.

The scanner maintains a `knownTypeNames` set. Bison registers aliases on a
`typedef` reduction and registers class/struct/enum/union tags as their heads
reduce. Subsequent uses return `TYPE_NAME` to Bison while remaining displayed
as `IDENTIFIER` in the table. `FILE` is seeded as a parser-facing ordinary
type name for C file-I/O declarations; it is not given a new display token.
The checked behavior is exercised by `test_class_template_typedef.cpp`.

## Grammar coverage

`parser.y` contains productions for:

- declarations, arrays (recursive suffixes), initializer lists, multi-level
  qualified pointers, references, function pointers, prototypes/definitions,
  calls, recursive calls, variadic parameters, default arguments, function
  trailing `const`/`volatile`, and syntactic `constexpr` declarations;
- all arithmetic, bitwise, comparison, logical, assignment, conditional,
  cast, unary, postfix, member, subscript, call, `sizeof`, `new`, and `delete`
  expression forms;
- `if`/`else`, `for`, `while`, `do-while`, `until`, `do-until`, `switch`,
  `case`, `default`, labels, `goto`, `break`, `continue`, and `return`;
- struct/class/enum/union declarations, access sections, single-base
  inheritance, member declarations/methods, basic `template <typename T>`,
  `typedef`, `operator` declarators, lambda expressions, `this`, and
  scope-resolution syntax;
- ordinary calls for file APIs such as `fopen`/`fclose` and dedicated scanner
  tokens for `printf`, `scanf`, `malloc`, `calloc`, `realloc`, and `free`.

`until` is parsed parallel to `while`, and `do stmt until (expr);` parallel to
`do-while`; whether it loops while/ until true is deliberately runtime
semantics, not a parser concern. Templates are intentionally limited to one
non-variadic type parameter, as required by the assignment scope.

The precedence ladder is declared from comma through assignment, conditional,
logical/bitwise, equality/relational, shifts, arithmetic, unary, and postfix
operators. `%nonassoc LOWER_THAN_ELSE` / `%nonassoc ELSE` resolves the
dangling-else rule explicitly, binding `else` to the nearest `if`.

`bison -v` emits the grammar report at `src/parser.output`. With Bison's LALR
parser it reports the known C/C++ declaration-versus-expression and
function-declarator/constructor-style ambiguities as shift/reduce conflicts;
shift is the intended interpretation where the next token distinguishes the
form. The dangling-else ambiguity is resolved by precedence rather than left
unexamined. The report is generated on every build for review.

The original Assignment 1 keyword vocabulary is preserved. `constexpr` is the
one parser extension added for the supplied C++ declaration test; it is shown
as `KEYWORD` and parsed only as a declaration specifier. Its required constant
initializer is semantic validation and is intentionally not enforced here.

## Preserved lexical assumptions

The scanner behavior from Assignment 1 is preserved rather than delegated to
the parser:

- Raw `#include` and `#define` are recognized only at the first
  non-whitespace position of a line. Includes require same-line `<...>` or
  `"..."`; malformed includes are lexical errors. A later `#include` (for
  example `goe #include <iostream>`) produces a misplaced-directive lexical
  diagnostic and a syntax diagnostic, without consuming the next source line.
  Macro bodies are ordinary tokens and are never expanded.
- Decimal-looking leading-zero numbers are accepted without octal validation.
  Integer suffix ordering is deliberately permissive. Invalid digit-leading
  identifiers, malformed hex/binary literals, malformed exponents, multiple
  decimal points/exponents, and invalid float suffixes are each collected as
  one lexical error rather than split into plausible tokens.
- A dot starts a number only in numeric contexts; a lone dot is `DOT`.
  Comments are non-nesting. Unterminated block comments, strings, and chars
  are errors; literal newlines and backslash-newline continuation are not
  accepted inside strings/chars.
- Valid escapes are standard one-character escapes, one/two-digit hex escapes,
  and one-to-three-digit octal escapes. Invalid escapes, empty chars, and
  multi-character chars are reported lexically. `L`, `u8`, `u`, and `U`
  prefixes are accepted without encoding distinctions.
- `printf`, `scanf`, `malloc`, `calloc`, `realloc`, and `free` retain their
  dedicated display token types even when user code redeclares those names.
  `*` and `&` remain lexer-neutral; parser context distinguishes their roles.
- The scanner handles one input file per run. Identifier/numeric adjacency is
  left to parser syntax, matching Assignment 1 longest-match behavior.

## Tests

Each test begins with its expected verdict. The suite includes basic features,
advanced C++ forms, recursion, switch/fallthrough, dangling else, preprocessor
and literal forms, three independent syntax-error files, and a mixed lexical/
syntax-error case. See [test/EXPECTED.md](test/EXPECTED.md).
