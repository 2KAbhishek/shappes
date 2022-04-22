#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point
{
    double x;
    double y;

public:
    Point(double x, double y);
    double getX();
    double getY();
    void setX(double x);
    void setY(double y);
    std::string toString();
};

#endif // POINT_H
