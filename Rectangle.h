#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "RectangleInterface.h"

class Rectangle : public RectangleInterface
{
public:
    Rectangle();
    bool set(double newLength, double newWidth);
    double getLength() const;
    double getWidth() const;
    double getArea() const;
private:
    double length;
    double width;
};
#endif