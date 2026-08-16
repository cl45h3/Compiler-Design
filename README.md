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

## Group Contributors
- Vaibhav Kumar — Enrolment No. 24114103
- Samarth Maheshwari — Enrolment No. 24114084
- Rishabh Gupta — Enrolment No. 24114077
- Vishal Kumar Shaw — Enrolment No. 24114105

## Prerequisites

- `flex`  generates the scanner from `src/lexer.l`
- A C++17-compatible compiler, such as `g++`
- `make`

On Debian/Ubuntu: `sudo apt install flex g++ make`
On Arch: `sudo pacman -S flex gcc make`
On MacOS: `brew install flex gcc make`

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
├── makefile             
├── run.sh               
├── src/
│   ├── lexer.l            
│   └── lex.yy.cc          
├── bin/
│   └── lexer              
├── test/
│   └── test1.c ... test13.c, test14.cpp  
└── output/
    └── test1.c.out ... test13.c.out, test14.cpp.out 
```

## Assumptions

- `#include` and `#define` are handled directly by the lexer itself
  (via an `INCL` start-condition for `#include`), so, unlike a
  compiler that only sees already-preprocessed input, this lexer
  expects raw, unpreprocessed source and tokenizes these two
  directives on its own. Any other directive (`#if`, `#ifdef`,
  `#pragma`, etc.) is **not** specially recognized  it falls through
  to the generic `#` (`HASH`) rule plus ordinary identifier/operator
  tokens, since only `#include`/`#define` have dedicated grammar.
- A `#include` line is only considered well-formed if the header name
  is wrapped in `<...>` or `"..."` on the same line as the directive;
  anything else on that line is flagged as a "Malformed include
  directive" lexical error rather than being tokenized as separate
  symbols.
- A leading `0` followed by further digits (e.g. `0755`, `0789`) is
  **not** specially validated as octal  there is no dedicated
  octal-literal rule in the grammar. Any run of decimal digits,
  regardless of a leading `0`, is matched by the general
  `INTEGER_LITERAL` rule and accepted as-is, even if it contains an
  `8` or `9` that would be invalid in true octal. Rejecting
  out-of-range octal digits is assumed to be a semantic/parser-level
  concern, not a lexical one, so `00789` currently tokenizes cleanly
  instead of producing an "invalid octal" error.
- Integer suffixes (`u`/`U`, `l`/`L`, `ll`/`LL`) are assumed valid in
  *either* order (`10ul`, `10lu`, `10ull`, `10llu`, etc.)  the grammar
  explicitly matches both `unsigned`-then-`long` and `long`-then-
  `unsigned` orderings, which is looser than strict C but matches
  what most compilers tolerate in practice.
- An identifier that begins with one or more digits followed by
  letters (e.g. `123abc`, `9bad`, `123var_name`) is a distinct,
  deliberately-invalid case: it does **not** get silently split into
  a numeric literal plus a separate identifier (`123` + `abc`), and
  it does **not** get accepted as one big identifier either. It's
  matched by its own dedicated `INVALID_IDENTIFIER` rule and reported
  as a single lexical error  `"Invalid identifier (cannot start with
  a digit)"`  covering the whole malformed token (`123abc` as one
  unit, not two). This mirrors real C/C++ compilers, which reject
  identifiers starting with a digit at the tokenizer level rather
  than at parse time.
- Malformed hex/binary literals (`0x1G`, `0b1021`, `0x`, `0b`) are
  assumed to be one broken numeric token rather than a valid numeric
  prefix followed by a separate identifier  the invalid-literal
  rules are written to greedily consume the bad digit plus any
  trailing alphanumeric characters so they win flex's longest-match
  rule over splitting into `HEXADECIMAL_LITERAL`/`BINARY_LITERAL` +
  `IDENTIFIER`. (Decimal/octal-looking literals such as `0899` are
  not covered by this  see the octal note above.)
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
- Escape sequences inside strings/chars are validated at the lexer
  level, not just any-backslash-any-character. A recognized escape is
  one of the standard single-character escapes (`\n \t \r \b \f \v \a
  \" \' \? \\ \0`), a hex escape `\x` followed by 1–2 hex digits, or
  an octal escape of 1–3 octal digits (`\NNN`). A literal that is
  otherwise well-formed but contains a backslash sequence outside
  this set (e.g. `\q`, `\z`, `\m`) is flagged as an "Invalid escape
  sequence" error rather than silently accepted.
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
  explicitly flagged as an "Unterminated multi-line comment" error
  (reported once for the whole dangling comment, not once per line
  swallowed) rather than being silently ignored or cascading into
  dozens of unrelated errors for the rest of the file.
- `printf`, `scanf`, `malloc`, `calloc`, `realloc`, and `free` are
  assumed to always refer to the standard library and are given their
  own dedicated token types, rather than being treated as ordinary
  identifiers  even if a user redeclares a variable/function with
  one of these names.
- Operators such as `&` and `*` are tokenized the same way regardless
  of whether they're used as address-of/dereference or as
  binary AND/multiplication  disambiguating them is assumed to
  require parser-level context that a pure lexer doesn't have.
- `#define` is only special-cased for the directive keyword itself: a
  line starting with `#define` emits a single `PP_DEFINE` token for
  that keyword, and the macro name plus replacement value on the rest
  of the line fall through to the ordinary rules (so `#define
  MAX_SIZE 100` yields `PP_DEFINE`, then `MAX_SIZE` as a plain
  `IDENTIFIER`, then `100` as a plain `INTEGER_LITERAL`  there's no
  dedicated "macro body" token type or grouping).
- `#include`/`#define` are only recognized as directives when the
  `#` is the first non-whitespace character on its line (the grammar
  rules are anchored with `^[ \t]*"#"`). A `#` appearing after other
  code on the same line is not treated specially and instead falls
  through to the generic `#` (`HASH`) token followed by ordinary
  identifier/operator tokens for whatever follows it.
- The scanner processes exactly one input file per run (no multi-file
  compilation, no linking, and no macro expansion  `#define` bodies
  are tokenized as ordinary tokens but never substituted at any later
  use site in the file).
- There is no lookahead-based disambiguation between "identifier
  immediately followed by a numeric literal with no operator between
  them" (e.g. `abs12.13`)  the scanner simply applies longest-match
  at each position, so this splits into an `IDENTIFIER` (`abs12`)
  and then whatever numeric rule matches next (`.13` as a
  `FLOAT_LITERAL`), rather than being flagged as a single malformed
  token. This is assumed acceptable since such adjacency is not valid
  C/C++ syntax with or without whitespace, and a later
  syntax-checking stage not the lexer is the natural place to
  reject it.
