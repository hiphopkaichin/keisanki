// Point.h (08A2)

class Point {
    double x;
    double y;
public:
    Point(const char *prompt); // construct Point from input
    double distance(Point other);
};
