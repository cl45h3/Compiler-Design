/* EXPECTED: VALID — typedef lexer-hack, template parameter type, overloaded
   operator, this, and scope-resolution qualified function definition. */
typedef int Number;
template <typename T> T twice(T x) { return x + x; }
class Box { public: Number value; Number operator+(Number x) { return this->value + x; } };
int main() { Box b; b.value = 3; Number n = twice(b + 2); n = Namespace::name; return n; }
