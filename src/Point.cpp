#include "Point.h"
#include <iostream>
#include <sstream>

Point::Point(double x, double y)
{
    this->x = x;
    this->y = y;
}

double Point::getX()
{
    return this->x;
}

double Point::getY()
{
    return this->y;
}

void Point::setX(double x)
{
    this->x = x;
}

void Point::setY(double y)
{
    this->y = y;
}

std::string Point::toString()
{
    std::stringstream ss;
    ss << "P(" << this->x << ", " << this->y << ")";
    return ss.str();
}
