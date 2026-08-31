/* EXPECTED: VALID — token table. for/while/do-while loops, continue/break,
   and a labeled goto — the only file in the suite exercising loop and
   labeled-jump grammar. */
int main() {
    // for loop
    for (int i = 0; i < 5; ++i) {
        if (i == 2) {
            continue;
        }
        if (i == 4) {
            break;
        }
    }

    // while loop
    int j = 0;
    while (j < 5) {
        ++j;
    }

    // do-while loop
    int k = 0;
    do {
        ++k;
    } while (k < 5);

    // goto statement
    int l = 0;
    start:
    if (l < 3) {
        l++;
        goto start;
    }

    return 0;
}

