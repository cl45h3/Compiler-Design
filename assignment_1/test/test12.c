#include invalid_header.h

int main() {
    float a = .e10;
    float b = 3.14e;
    float c = 2.5e+;
    float d = 1.2eX;
    float e = 4.0e+abc;

    int f = 0xXYZ;
    int g = 0b1021;
    int h = 00789;

    int 123a;
    char m = '';
    char n = 'abc';
    char i = 'x;
    char *j = "hello;

    int k = $10;
    int l = `foo`;

    return 0;
}

/*
