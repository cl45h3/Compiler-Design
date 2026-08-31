/* EXPECTED: VALID — struct-tag type use and anonymous typedef struct. */
struct Point { int x; int y; };
struct Rectangle { struct Point topLeft; struct Point bottomRight; };
typedef struct { int width; int height; } Size;
int main() { struct Point p; Size size; p.x = size.width; return 0; }
