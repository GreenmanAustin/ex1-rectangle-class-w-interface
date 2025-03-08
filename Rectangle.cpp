#include "Rectangle.h"

Rectangle::Rectangle() {
    length = 1.0;
    width = 1.0;
}

bool Rectangle::set(double newLength, double newWidth) {
  bool setValue  = false;
  if (newLength >= 1.0 && newWidth >= 1.0) {
    length = newLength;
    width = newWidth;
    setValue = true;
  }
  return setValue;
}

double Rectangle::getLength() const
{
    return length;
}

double Rectangle::getWidth() const
{
    return width;
}

double Rectangle::getArea() const
{
    return length * width;
}