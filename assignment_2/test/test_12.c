/* EXPECTED: one error at line 4, column 10 (after x), not on the valid
   declaration that follows. */
int main() {
    int x
    int y;
}
