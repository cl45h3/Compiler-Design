int main() {
    int a, b, c, arr[10];
    int *p, x;

    a = b + c - 1;
    a = b * c / 2;
    a = b % c;
    a += 1; a -= 1; a *= 2; a /= 2;
    a++; b--;

    p = &x;
    a = *p;
    a = b & c;
    a = b | c;
    a = b ^ c;
    a = ~b;

    if (a == b && c != 0) {
        a = (a >= b) ? a : b;
    }

    if (a < b || a <= b || a > b) {
        arr[0] = a;
    }

    struct Point { int x; int y; } pt;
    pt.x = 1;
    p = &pt.x;

    return 0;
}
