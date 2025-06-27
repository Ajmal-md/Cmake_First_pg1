#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle {
public:
    Triangle(double base, double height);
    double area() const;

private:
    double base;
    double height;
};

#endif
