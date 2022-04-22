#include <iostream>
#include <vector>
#include "Point.h"
#include "Shape.h"
#include "Rectangle.h"
#include "Triangle.h"

int main()
{
    Point p1(0, 0);
    Point p2(0, 1);
    Point p3(1, 0);
    Point p4(1, 1);
    Point p5(2, 2);
    Point p6(3, 3);

    Rectangle r1(p1, p2, p3, p4);
    Rectangle r2(p5, p6, p1, p2);
    Triangle t1(p6, p2, p3);
    Triangle t2(p4, p5, p6);


    std::vector<Shape *> shapeList;
    shapeList.push_back(&r1);
    shapeList.push_back(&r2);
    shapeList.push_back(&t1);
    shapeList.push_back(&t2);

    for (int i = 0; i < shapeList.size(); i++)
    {
        std::cout
            << typeid(*shapeList[i]).name() << ": "
            << shapeList[i]->toString()
            << "\nArea: " << shapeList[i]->calcArea() << std::endl;
    }
    return 0;
}
