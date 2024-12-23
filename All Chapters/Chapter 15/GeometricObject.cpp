#include "GeometricObject.h"

GeometricObject::GeometricObject()
{
  color = "Red";
  filled = false;
}

GeometricObject::GeometricObject(const std::string &_color, bool _filled)
{
  setColor(_color);
  setFilled(_filled);
}

std::string GeometricObject::getColor() const
{
  return color;
}

bool GeometricObject::getFilled() const
{
  return filled;
}

void GeometricObject::setFilled(bool _filled)
{
  filled = _filled;
}

void GeometricObject::setColor(const std::string &_color)
{
  color = _color;
}

std::string GeometricObject::toString() const
{
  return "GeometricObject";
}