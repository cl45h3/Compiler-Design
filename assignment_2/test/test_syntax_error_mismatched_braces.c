/* EXPECTED: SYNTAX ERROR — missing closing brace(s), reported without a crash. */
int main() {
    if (1) { int x = 0; x++; }
    while (0) { break;
}
