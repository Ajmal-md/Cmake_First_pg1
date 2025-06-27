#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
public:
    Rectangle(double length, double width);
    double area() const;

private:
    double length;
    double width;
};

#endif
