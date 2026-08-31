/* EXPECTED: VALID — token table. malloc/calloc/free, scanf/printf, and the
   grammar's custom `until` loop — the only file testing this
   language-specific extension to standard C syntax. */
#include <stdlib.h>

int main() {
    // malloc
    int* ptr1 = (int*)malloc(sizeof(int));
    if (ptr1 != NULL) {
        *ptr1 = 10;
    }

    // calloc
    int* ptr2 = (int*)calloc(5, sizeof(int));
    if (ptr2 != NULL) {
        ptr2[0] = 1;
    }

    // free
    free(ptr1);
    free(ptr2);

    int i = 0;
    until (i >= 5) {
        i++;
    }

    // printf, scanf
    int a=0,b=0;
    scanf("%d %d", &a, &b);
    printf("a: %d, b: %d\n", a, b);
    return 0;
}
