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

    Rectangle r1(p1, p2, p3, p4);
    Triangle t1(p1, p2, p3);

    std::vector<Shape *> shapeList;
    shapeList.push_back(&r1);
    shapeList.push_back(&t1);

    for (int i = 0; i < shapeList.size(); i++)
    {
        std::cout << "Area of "
                  << "Shape"
                  << " is " << shapeList[i]->calcArea() << std::endl;
    }

    std::cout << r1.toString() << std::endl;
    std::cout << t1.toString() << std::endl;
    return 0;
}
