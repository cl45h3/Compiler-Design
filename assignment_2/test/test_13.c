/* EXPECTED: lexical unterminated string plus syntax error; no token table. */
int main() {
    int x = 0
    printf("unterminated);
    x = ;
}
