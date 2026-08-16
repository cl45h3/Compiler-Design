# C/C++-style Lexical Analyzer

This project tokenizes C/C++-style source code using `flex` and a C++17
driver (`src/lexer.l` -> `src/lex.yy.cc` -> `bin/lexer`). Each token is
classified by type (keyword, identifier, literal, operator, delimiter,
preprocessor token, library-function name) and collected into a token
table. Identifiers are additionally tracked in a symbol table
(`std::map<std::string, SymbolEntry>`) that counts occurrences, and
recognized keywords are tracked in a separate keyword-frequency table.
Lexical errors (unterminated strings/comments, malformed numeric
literals, bad identifiers, unrecognized characters, malformed `#include`)
are collected separately and reported without stopping the scan, so a
single run reports every lexical error in the file, not just the first.

## Prerequisites

- `flex` — generates the scanner from `src/lexer.l`
- A C++17-compatible compiler, such as `g++`
- `make`

On Debian/Ubuntu: `sudo apt install flex g++ make`
On Arch: `sudo pacman -S flex gcc make`

## Build

```sh
make
```

This runs `flex -o src/lex.yy.cc src/lexer.l`, then compiles
`src/lex.yy.cc` with `g++ -std=c++17 -Wall` into `bin/lexer`.

```sh
make clean
```

Removes `src/lex.yy.cc`, the `bin/` directory, and the `output/` directory.

## Run

Run the lexer on a single source file (prints the token table and any
errors to stdout):

```sh
./bin/lexer test/test1.c
```

Write the output to a file instead of stdout:

```sh
./bin/lexer test/test1.c output/test1.c.out
```

Also print the symbol table and keyword table:

```sh
./bin/lexer test/test1.c output/test1.c.out --tables
```

### Run all test cases at once

```sh
make run
```

or directly:

```sh
bash run.sh
```

This builds the project, then runs `bin/lexer` against every file in
`test/`, writing each result to `output/<filename>.out`.

## Folder Structure

```
Compiler-Design/
├── makefile              # build rules (flex + g++), clean, run targets
├── run.sh                # batch-runs bin/lexer over every file in test/
├── src/
│   ├── lexer.l            # flex source: token rules + C++ driver (main)
│   └── lex.yy.cc          # generated scanner (produced by `make`, not hand-written)
├── bin/
│   └── lexer               # compiled executable (produced by `make`)
├── test/
│   └── test1.c ... test12.c  # sample C/C++-style input programs
└── output/
    └── test1.c.out ... test12.c.out  # token tables produced by run.sh
```

## Assumptions

- `#include` and `#define` are handled directly by the lexer itself
  (via an `INCL` start-condition for `#include`), so, unlike a
  compiler that only sees already-preprocessed input, this lexer
  expects raw, unpreprocessed source and tokenizes these two
  directives on its own. Any other directive (`#if`, `#ifdef`,
  `#pragma`, etc.) is **not** specially recognized — it falls through
  to the generic `#` (`HASH`) rule plus ordinary identifier/operator
  tokens, since only `#include`/`#define` have dedicated grammar.
- A `#include` line is only considered well-formed if the header name
  is wrapped in `<...>` or `"..."` on the same line as the directive;
  anything else on that line is flagged as a "Malformed include
  directive" lexical error rather than being tokenized as separate
  symbols.
- A leading `0` followed by further digits is assumed to mean octal,
  matching C's actual base-switching rule rather than treating it as
  a decimal number that happens to start with `0`. A digit `8` or `9`
  in that position is assumed to be a typo and is flagged as an
  "Invalid octal literal", not silently reinterpreted as decimal. A
  bare `0` with no following digits is still accepted as decimal `0`,
  since `OCT_LITERAL` requires at least one octal digit after the `0`.
- Integer suffixes (`u`/`U`, `l`/`L`, `ll`/`LL`) are assumed valid in
  *either* order (`10ul`, `10lu`, `10ull`, `10llu`, etc.) — the grammar
  explicitly matches both `unsigned`-then-`long` and `long`-then-
  `unsigned` orderings, which is looser than strict C but matches
  what most compilers tolerate in practice.
- Malformed hex/octal/binary literals (`0x1G`, `0b1021`, `0899`) are
  assumed to be one broken numeric token rather than a valid numeric
  prefix followed by a separate identifier — the invalid-literal
  rules are written to greedily consume the bad digit plus any
  trailing alphanumeric characters so they win flex's longest-match
  rule over splitting into `INTEGER_LITERAL` + `IDENTIFIER`.
- A `.` is only ever treated as the start of a numeric literal when a
  digit follows it or it forms part of a broken exponent (e.g. `.e3`,
  assumed to be a mistyped float and flagged as "Missing digits
  before exponent"). A lone `.` with no digit context is tokenized as
  the member-access/`DOT` operator.
- An exponent marker (`e`/`E`) that isn't followed by a valid signed
  digit sequence is always treated as an error at the lexer stage
  (`Incomplete exponent` / `Invalid exponent`), rather than letting a
  malformed exponent silently fall through as separate tokens.
- String and character literals are assumed to never legitimately
  contain a raw, unescaped newline. If a `"` or `'` is still open when
  a newline is hit, that literal is flagged as unterminated right
  there, even if a matching quote appears later in the file. Line
  continuation via a trailing backslash is not treated as valid
  inside a string/char literal, since the escape rule `\\.` cannot
  match a backslash followed by a newline.
- Escape sequences inside strings/chars are accepted as soon as they
  are a backslash followed by any single character (`\q`, `\n`, `\7`,
  etc.). Validating whether the escaped character is one of C's
  actual recognized escapes is assumed to be out of scope for the
  lexer and left to a later stage.
- Unlike standard C (where a multi-character constant like `'ab'` is
  legal with an implementation-defined value), this lexer treats
  `''` (empty) and any char literal with more than one character as
  explicit lexical errors ("Empty character literal" /
  "Multi-character literal"), rather than accepting them as valid
  `CHAR_LITERAL` tokens.
- A prefix of `L`, `u8`, `u`, or `U` before a string/char literal is
  accepted purely as part of the token text; no distinction is made
  between the resulting encodings (all are reported as the same
  `STRING_LITERAL`/`CHAR_LITERAL` token type).
- Block comments (`/* ... */`) are assumed non-nesting, per standard
  C/C++ behavior. A block comment left open at end-of-file is
  explicitly flagged as an "Unterminated comment" error rather than
  being silently swallowed.
- `printf`, `scanf`, `malloc`, `calloc`, `realloc`, and `free` are
  assumed to always refer to the standard library and are given their
  own dedicated token types, rather than being treated as ordinary
  identifiers — even if a user redeclares a variable/function with
  one of these names.
- Operators such as `&` and `*` are tokenized the same way regardless
  of whether they're used as address-of/dereference or as
  binary AND/multiplication — disambiguating them is assumed to
  require parser-level context that a pure lexer doesn't have.
- The scanner processes exactly one input file per run (no multi-file
  compilation, no linking, no macro expansion of `#define` bodies —
  `#define` is tokenized but its replacement text is not substituted
  anywhere else in the file).
