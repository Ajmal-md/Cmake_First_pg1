#include "rectangle.h"

Rectangle::Rectangle(double length, double width) : length(length), width(width) {}

double Rectangle::area() const {
    return length * width;  // Area of the rectangle: length * width
}
