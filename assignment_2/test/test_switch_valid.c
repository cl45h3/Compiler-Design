/* EXPECTED: VALID — token table; case/default and intentional fallthrough. */
int choose(int n) {
    switch (n) { case 0: n = 1; case 1: n += 2; break; default: n = 9; break; }
    return n;
}
