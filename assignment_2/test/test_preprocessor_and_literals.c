/* EXPECTED: VALID — raw include/define tokenization and literal families. */
#include <stdio.h>
#define LIMIT 0x10
int main() { int b = 0b1010; double n = 1.2e3; bool ok = true; char c = '\n'; return b; }
