/* EXPECTED: VALID — token table. All advanced syntax features including
   inheritance, templates, typedef, allocations, lambda, variadics, refs. */
#include <stdio.h>
typedef int Count;
enum Colour { RED, GREEN = 2, BLUE };
union Number { int i; float f; };
class Base { protected: int value; public: int get() { return this->value; } };
class Derived : public Base {
private: Count data;
public: friend int square(int); int set(int x) { data = x; return data; }
int operator+(int rhs) { return data + rhs; }
};
template <typename T> T identity(T value) { return value; }
int sum(int count, ...) { return count; }
int square(int n) { return n * n; }
int &alias(int &x) { return x; }
int (*callback)(int);
int main(int argc, char *argv[]) {
    Derived object(1); Count initialized(3); int x = 2; int &ref = x; int ***triple; int matrix[2][3][4]; object.set(x);
    int *heap = new int(3); delete heap; int *many = new int[3]; delete [] many; int *nullp = nullptr;
    int *raw = malloc(sizeof(int)); raw = realloc(raw, sizeof(int)); free(raw); raw = calloc(1, sizeof(int)); free(raw);
    auto lambda = [x](int a) -> int { return a + x; }; callback = square;
    x = callback(lambda(2)); x = sum(x, 1, 2); x = identity(x); x = alias(ref);
    FILE *file = fopen("data.txt", "r"); if (file) { fread(&x, sizeof(int), 1, file); fwrite(&x, sizeof(int), 1, file); fprintf(file, "%d", x); fscanf(file, "%d", &x); fgets("x", 1, file); fputs("x", file); fclose(file); }
    until (x > 3) { x++; } do { x--; } until (x == 3);
    return 0;
}
