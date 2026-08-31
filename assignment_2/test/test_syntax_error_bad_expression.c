/* EXPECTED: SYNTAX ERROR — malformed assignment and empty if condition. */
int main() {
    int x = 0;
    x = ;
    if () { x++; }
    return x;
}
