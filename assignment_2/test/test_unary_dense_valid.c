/* EXPECTED: VALID — dense unary/binary token sequences obey C precedence. */
int main() {
    int x = ****y *+ c;
    int z = +++y;
    int a = y*+x;
    int b = y+++x;
    return 0;
}
