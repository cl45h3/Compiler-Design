/* EXPECTED: VALID — token table. Basic declarations, arrays, pointers,
   struct/member access, functions, selection, loops, switch, and jumps. */
#include <stdio.h>
struct Pair { int x; char tag; };
int later(int n);
int add(int a, int b) { return a + b; }
static int later(int n) { return n; }
int main(int argc, char *argv[]) {
    static int count = 0; volatile int flag = 0;
    int values[3] = {1, 2, 3}; char letters[3] = {'a', 'b', 'c'};
    int *p = values; int **pp = &p; struct Pair pair; struct Pair *sp = &pair; pair.x = add(values[0], 2); sp->x = later(sp->x);
    if (pair.x > 0) count++; else count--;
    for (int i = 0; i < 3; i++) { if (i == 1) continue; count += values[i]; }
    while (count < 20) { count++; }
    do { count--; } while (count > 10);
    switch (count) { case 10: count++; break; case 11: count++; default: count = 0; break; }
again: if (count < 0) goto again;
    printf("%d", pair.x); scanf("%d", &count); return 0;
}
