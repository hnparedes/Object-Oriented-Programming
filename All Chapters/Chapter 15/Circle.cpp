#include "Circle.h"

Circle::Circle()
{
  setRadius(1);
  area = getArea();
  perimeter = getPerimeter();
}

Circle::Circle(double _radius)
{
  setRadius(_radius);
  area = getArea();
  perimeter = getPerimeter();

  //You can also change the color and filled using set methods from parent class
  setColor("Blue");
  setFilled(true);
}

Circle::Circle(double _radius, const std::string & _color, bool _filled) : GeometricObject(_color, _filled)
{
  setRadius(_radius);
  area = getArea();
  perimeter = getPerimeter();

  //setColor(_color);
  //setFilled(_filled);
}

void Circle::setRadius(double _radius)
{
  if (_radius > 0)
    radius = _radius;
}

double Circle::getRadius() const
{
  return radius;
}

double Circle::getArea() const
{
  return radius * radius * 3.14159;
}

double Circle::getPerimeter() const
{
  return 2 * radius * 3.14159;
}

//Redefining
std::string Circle::toString() const
{
  return "Circle Object";
}