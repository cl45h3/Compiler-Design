class Point {
    public:
        int x;
        int y;

        int getX() {
            return x;
        }

    private:
        int hidden;

    protected:
        int shared;
};

class Rectangle {
    public:
        Point topLeft;
        Point bottomRight;
        int area;
};

int main() {
    Point p1;
    p1.x = 10;
    p1.y = 20;

    Point *pptr = &p1;
    pptr->x = 30;

    Rectangle rect;
    rect.topLeft = p1;
    rect.area = 100;

    return 0;
}
