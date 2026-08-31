/* EXPECTED: VALID — token table; else binds to the inner if. */
int main() { int a = 1, b = 0; if (a) if (b) a = 2; else a = 3; return a; }
