#include <stdio.h>
#include "myheader.h"
#define MAX_SIZE 100

// this whole line is a comment and should be skipped
int main() {
    /* this is a
       multi-line comment
       and should also be skipped entirely */
    char *msg = "Hello, world!\n";
    char newline = '\n';
    char quote = '\'';
    char letter = 'A';

    printf("%s", msg); /* trailing comment */
    return 0;
}
