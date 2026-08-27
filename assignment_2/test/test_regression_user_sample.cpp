/* EXPECTED: invalid: exactly one lexical error for the misplaced `#include`
   and one syntax error for it, plus one syntax error for `void foo {}`.
   `return;`, `return 0;`, and dense unary/binary expressions are valid. */
goe #include <iostream>

void foo(){
   return;
}

void foo{
}

int fooo(){

}

int main() {
   int x = ****y *+ c;
   int x = +++z;
   int x = a*+x;
   int y = a+++x;
   return 0;
}
