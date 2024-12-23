#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "GeometricObject.h"

class Rectangle : public GeometricObject
{
  private:
    double length, width;

  public:
    Rectangle();
    Rectangle(double _length, double _width);
    Rectangle(double _length, double _width, const std::string _color, bool _filled);

    void setLength(double _length);
    void setWidth(double _width);

    double getLength() const;
    double getWidth() const;

    double getArea() const;
    double getPerimeter() const;

    //Redefining the method
    std::string toString() const;

};
#endif