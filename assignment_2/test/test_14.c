/* EXPECTED: one lexical error for 10bad, then one independent syntax error
   for `int y = ;`; no duplicate syntax error for the malformed lexeme. */
int main() {
    10bad = 1;
    int y = ;
}
