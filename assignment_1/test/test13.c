// Covers keywords/operators the lexer already recognizes but that no
// other test file exercised: scanf, goto, continue, typedef, enum,
// union, until, and the "::" scope-resolution operator. Also covers the
// malformed-suffix bug fix (bad suffixes on float/exponent literals must
// be reported as a single error, and legitimate single-char suffixes
// must still tokenize as valid literals).

typedef int MyInt;

enum Color { RED, GREEN, BLUE };
union Data { int i; float f; };

class Counter {
    public:
        int value;
        int Counter::increment() {
            return ++value;
        }
};

int main() {
    MyInt x = 5;
    enum Color c = RED;
    union Data d;
    d.i = 10;

    int input = 0;
    scanf("%d", &input);

    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            continue;
        }
        if (i == 8) {
            goto done;
        }
    }

done:
    printf("done\n");

    int j = 0;
    until (j >= 3) {
        j++;
    }

    // malformed suffixes -- each must be flagged as ONE invalid token,
    // not silently split into a valid literal + a stray identifier
    float bad1 = 12.3u;
    double bad2 = 1.5e10ll;
    float bad3 = 12.3ff;
    double bad4 = 1.5e10x;

    // legitimate single-char suffixes -- must still be valid, no errors
    float ok1 = 12.3f;
    float ok2 = 5.F;
    double ok3 = 1.5e10l;
    double ok4 = 6.022e-23;

    1..1;
    123sbc;
    abs12.13;
    return 0;
}
