#include "triangle.h"

Triangle::Triangle(double base, double height) : base(base), height(height) {}

double Triangle::area() const {
    return 0.5 * base * height;  // Area of the triangle: 1/2 * base * height
}
