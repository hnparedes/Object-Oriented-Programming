#ifndef GEOMETRICOBJECT_H
#define GEOMETRICOBJECT_H

#include <string>

class GeometricObject {
protected:
  double area, perimeter;

private:
  bool filled;
  std::string color;

public:
  GeometricObject();
  GeometricObject(const std::string &_color, bool _filled);

  std::string getColor() const;
  bool getFilled() const;

  void setFilled(bool _filled);
  void setColor(const std::string &_color);

  std::string toString() const;
};
#endif