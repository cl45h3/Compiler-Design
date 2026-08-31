/* EXPECTED: VALID — constructor has no return type and a later object uses
   the completed class name as a type. */
class Counter {
public:
    int value;
    Counter() { value = 0; }
    void set(int next) { value = next; }
};
int main() { Counter counter; counter.set(2); return counter.value; }
