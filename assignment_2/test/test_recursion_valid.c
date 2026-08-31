/* EXPECTED: VALID — token table; ordinary calls support recursion. */
int factorial(int n) { if (n <= 1) return 1; return n * factorial(n - 1); }
int fibonacci(int n) { if (n < 2) return n; return fibonacci(n - 1) + fibonacci(n - 2); }
int main() { return factorial(5) + fibonacci(6); }
