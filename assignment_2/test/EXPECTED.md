# Expected verdicts

Files whose names contain `valid`, `dangling_else`, `class_template`, or
`preprocessor` are expected to print the `Token | Token_Type` table. The four
files whose names contain `syntax_error` or `mixed` are deliberately invalid:
they must print all recoverable lexical/syntax diagnostics and must not print
the token table. `test_mixed_lexical_and_syntax_errors.c` specifically checks
that an Assignment 1 lexical error remains visible alongside parser errors.
