int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int add(int a, int b) {
    return a + b;
}

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int result = factorial(5);
    int sum = add(3, 4);
    int fib = fibonacci(6);

    // function call with more than two arguments
    int total = add(add(1, 2), add(3, 4));

    return result + sum + fib + total;
}
