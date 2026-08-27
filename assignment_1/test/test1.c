#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int x, counter_1;
    float total;
    double avg;
    char grade;
    const int LIMIT = 10;
    static long count = 0;

    if (x > 0) {
        x = x + 1;
    } else {
        x = 0;
    }

    while (x < LIMIT) {
        x++;
    }

    return 0;
}
