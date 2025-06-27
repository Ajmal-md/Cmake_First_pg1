#include <iostream>
#include "circle.h"
#include "rectangle.h"
#include "triangle.h"

int main() {
    Circle circle(5.0);
    Rectangle rectangle(10.0, 4.0);
    Triangle triangle(6.0, 3.0);

    std::cout << "Area of the circle: " << circle.area() << std::endl;
    std::cout << "Area of the rectangle: " << rectangle.area() << std::endl;
    std::cout << "Area of the triangle: " << triangle.area() << std::endl;

    return 0;
}
