int main() {
    int a = 1;
    /* this comment never closes
       so everything below should be swallowed
       and reported as ONE lexical error, not
       hundreds of them
    int b = 2;
    return 0;
}
