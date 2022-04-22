#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include "Point.h"

class Shape
{
public:
    std::vector<Point> pointList;
    Shape();
    ~Shape();
    void setPointList(std::vector<Point> &pointList);
    std::vector<Point> getPointList();
    virtual void addPoint(Point &point);
    virtual double calcArea();
    std::string toString();
};

#endif // SHAPE_H
