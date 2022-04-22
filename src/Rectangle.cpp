#include <iostream>
#include <math.h>
#include <vector>
#include "Point.h"
#include "Shape.h"
#include "Rectangle.h"

Rectangle::Rectangle()
{
}

Rectangle::Rectangle(Point &p1, Point &p2, Point &p3, Point &p4)
{
    this->pointList.push_back(p1);
    this->pointList.push_back(p2);
    this->pointList.push_back(p3);
    this->pointList.push_back(p4);
}

Rectangle::~Rectangle()
{
}

void Rectangle::addPoint(Point &point)
{
    if (this->pointList.size() < 4)
    {
        Shape::addPoint(point);
    }
    else
    {
        std::cout << "Rectangle can only have 4 points" << std::endl;
    }
}

double Rectangle::calcArea()
{
    double area = 0;
    if (this->pointList.size() == 4)
    {
        Point p1 = this->pointList[0];
        Point p2 = this->pointList[1];
        Point p3 = this->pointList[2];
        Point p4 = this->pointList[3];
        double side1 = sqrt(pow(p2.getX() - p1.getX(), 2) + pow(p2.getY() - p1.getY(), 2));
        double side2 = sqrt(pow(p3.getX() - p2.getY(), 2) + pow(p3.getY() - p2.getY(), 2));
        area = side1 * side2;
    }
    else
    {
        std::cout << "Rectangle must have 4 points" << std::endl;
    }
    return area;
}
