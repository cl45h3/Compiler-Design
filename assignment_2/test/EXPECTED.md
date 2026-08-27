# Expected verdicts

Files whose names contain `valid`, `dangling_else`, `class_template`, or
`preprocessor` are expected to print the `Token | Token_Type` table. The four
files whose names contain `syntax_error` or `mixed` are deliberately invalid:
they must print all recoverable lexical/syntax diagnostics and must not print
the token table. `test_mixed_lexical_and_syntax_errors.c` specifically checks
that an Assignment 1 lexical error remains visible alongside parser errors.

`test_unary_dense_valid.c` confirms that chained unary/binary forms such as
`****y *+ c`, `+++y`, and `y+++x` are syntactically accepted. The regression
sample checks that a misplaced `#include` produces one lexical error plus a
syntax diagnostic, while `return;`, `return 0;`, and valid later functions
remain unaffected; `void foo {}` remains a syntax error.
