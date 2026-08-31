/* EXPECTED: SYNTAX ERROR — missing semicolons on lines 3 and 5; recovery continues. */
int main() {
    int x = 1
    x = x + 1;
    int y = 2
    return x + y;
}
