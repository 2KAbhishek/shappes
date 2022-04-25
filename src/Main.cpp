#include <iostream>
#include <vector>
#include "Point.h"
#include "Shape.h"
#include "Rectangle.h"
#include "Triangle.h"

int main()
{
    Point p1(2, 6);
    Point p2(1, 4);
    Point p3(3, 3);
    Point p4(4, 5);

    Point p5(5, 3);
    Point p6(5, 0);
    Point p7(8, 0);

    Point p8(5, 3);
    Point p9(6, 1);
    Point p10(8, 0);

    Rectangle r1(p1, p2, p3, p4);
    Triangle t1(p5, p6, p7);
    Triangle t2(p8, p9, p10);


    std::vector<Shape *> shapeList;
    shapeList.push_back(&r1);
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
