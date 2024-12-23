#include "Rectangle.h"

Rectangle::Rectangle()
{
  setLength(1);
  setWidth(1);
  area = getArea();
  perimeter = getPerimeter();
}

Rectangle::Rectangle(double _length, double _width)
{
  setLength(_length);
  setWidth(_width);
  area = getArea();
  perimeter = getPerimeter();
}

Rectangle::Rectangle(double _length, double _width, const std::string _color, bool _filled) : GeometricObject(_color, _filled)
{
  setLength(_length);
  setWidth(_width);
  area = getArea();
  perimeter = getPerimeter();
}

void Rectangle::setLength(double _length)
{
  if (_length > 0)
    length = _length;      
}
    
void Rectangle::setWidth(double _width)
{
  if (_width > 0)
    width = _width;      
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
  return getLength() * getWidth();  
}
    
double Rectangle::getPerimeter() const
{
  return 2 * (getLength() + getWidth());      
}

//Redefining the method
std::string Rectangle::toString() const
{
  return "Rectangle Object";      
}