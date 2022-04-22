#include "Point.h"
#include <vector>

class Shape {
    std::vector<Point> pointList;
public:
    Shape();
    ~Shape();
    void setPointList(std::vector<Point>& pointList);
    std::vector<Point> getPointList();
    void addPoint(Point& point);
    double calcArea();
    virtual std::string toString();
};
