#include "Shape.h"

class Triangle: public Shape {
public:
    Triangle();
    Triangle(Point& p1, Point& p2, Point& p3);
    ~Triangle();
    void addPoint(Point& point);
    double calcArea();
};
