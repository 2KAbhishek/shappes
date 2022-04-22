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

std::string Shape::toString()
{
    std::stringstream ss;
    for (std::vector<Point>::iterator it = this->pointList.begin(); it != this->pointList.end(); ++it)
    {
        ss << it->toString() << std::endl;
    }
    return ss.str();
}
