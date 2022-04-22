#include "Shape.h"

class Rectangle: public Shape {
public:
    Rectangle();
    Rectangle(Point& p1, Point& p2, Point& p3, Point& p4);
    ~Rectangle();
    void addPoint(Point& point);
    double calcArea();
};
