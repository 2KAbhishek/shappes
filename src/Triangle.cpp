#include <iostream>
#include <vector>
#include <math.h>
#include "Point.h"
#include "Shape.h"
#include "Triangle.h"

Triangle::Triangle()
{
}

Triangle::Triangle(Point &p1, Point &p2, Point &p3)
{
    this->pointList.push_back(p1);
    this->pointList.push_back(p2);
    this->pointList.push_back(p3);
}

Triangle::~Triangle()
{
}

void Triangle::addPoint(Point &point)
{
    if (this->pointList.size() < 3)
    {
        Shape::addPoint(point);
    }
    else
    {
        std::cout << "Triangle can only have 3 points" << std::endl;
    }
}

double Triangle::calcArea()
{
    double area = 0;
    if (this->pointList.size() == 3)
    {
        Point p1 = this->pointList[0];
        Point p2 = this->pointList[1];
        Point p3 = this->pointList[2];

        double x1y23 = p1.getX() * (p2.getY() - p3.getY());
        double x2y31 = p2.getX() * (p3.getY() - p1.getY());
        double x3y12 = p3.getX() * (p1.getY() - p2.getY());
        area = abs((x1y23 + x2y31 + x3y12) / 2);
    }
    else
    {
        std::cout << "Triangle must have 3 points" << std::endl;
    }
    return area;
}
