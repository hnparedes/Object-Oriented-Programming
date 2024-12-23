#ifndef CIRCLE_H
#define CIRCLE_H

#include "GeometricObject.h"

class Circle : public GeometricObject
{
  private:
    double radius;

  public:
    Circle();
    Circle(double _radius);
    Circle(double _radius, const std::string & _color, bool _filled);

    void setRadius(double _radius);
    double getRadius() const;

    double getArea() const;
    double getPerimeter() const;

    //Redefining
    std::string toString() const;

};
#endif