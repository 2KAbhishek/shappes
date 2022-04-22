#include <iostream>
#include <vector>
#include <sstream>
#include "Point.h"
#include "Shape.h"

Shape::Shape()
{
}

Shape::~Shape()
{
}

void Shape::setPointList(std::vector<Point> &pointList)
{
    this->pointList = pointList;
}

std::vector<Point> Shape::getPointList()
{
    return this->pointList;
}

void Shape::addPoint(Point &point)
{
    this->pointList.push_back(point);
}

double Shape::calcArea()
{
    return 0;
}

std::string Shape::toString()
{
    std::stringstream ss;
    for (std::vector<Point>::iterator it = this->pointList.begin(); it != this->pointList.end(); ++it)
    {
        ss << it->toString() << " ";
    }
    return ss.str();
}
