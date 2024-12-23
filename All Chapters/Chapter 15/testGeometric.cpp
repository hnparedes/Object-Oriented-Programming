#include <iostream>

#include "Circle.h"
#include "Rectangle.h"

int main() {
  GeometricObject shape;

  std::cout << "shape Object" << std::endl;

  std::cout << shape.toString() << std::endl;

  std::cout << "Color: " << shape.getColor() << std::endl;
  std::cout << "Filled: " << shape.getFilled() << std::endl;

  std::cout << std::endl;

  GeometricObject myShape("Blue", true);

  std::cout << "myShape Object" << std::endl;

  std::cout << myShape.toString() << std::endl;

  std::cout << "Color: " << myShape.getColor() << std::endl;
  std::cout << "Filled: " << myShape.getFilled() << std::endl;

  std::cout << std::endl;

  Circle myCircle;

  std::cout << "myCircle Object" << std::endl;

  // Redefined toString method
  std::cout << myCircle.toString() << std::endl;

  std::cout << "Color: " << myCircle.getColor() << std::endl;
  std::cout << "Filled: " << myCircle.getFilled() << std::endl;
  std::cout << "Radius: " << myCircle.getRadius() << std::endl;
  std::cout << "Area: " << myCircle.getArea() << std::endl;
  std::cout << "Perimeter: " << myCircle.getPerimeter() << std::endl;

  std::cout << std::endl;

  Circle myCircle2(5, "White", true);

  std::cout << "myCircle2 Object" << std::endl;

  // Redefined toString method
  std::cout << myCircle2.toString() << std::endl;

  std::cout << "Color: " << myCircle2.getColor() << std::endl;
  std::cout << "Filled: " << myCircle2.getFilled() << std::endl;
  std::cout << "Radius: " << myCircle2.getRadius() << std::endl;
  std::cout << "Area: " << myCircle2.getArea() << std::endl;
  std::cout << "Perimeter: " << myCircle2.getPerimeter() << std::endl;

  std::cout << std::endl;

  Rectangle myRect;

  std::cout << "myRect Object" << std::endl;

  // Redefined toString method
  std::cout << myRect.toString() << std::endl;

  std::cout << "Color: " << myRect.getColor() << std::endl;
  std::cout << "Filled: " << myRect.getFilled() << std::endl;
  std::cout << "Length: " << myRect.getLength() << std::endl;
  std::cout << "Width: " << myRect.getWidth() << std::endl;
  std::cout << "Area: " << myRect.getArea() << std::endl;
  std::cout << "Perimeter: " << myRect.getPerimeter() << std::endl;

  std::cout << std::endl;

  Rectangle myRect2(5.2, 6.3, "White", true);

  std::cout << "myRect2 Object" << std::endl;

  // Redefined toString method
  std::cout << myRect2.toString() << std::endl;

  std::cout << "Color: " << myRect2.getColor() << std::endl;
  std::cout << "Filled: " << myRect2.getFilled() << std::endl;
  std::cout << "Length: " << myRect2.getLength() << std::endl;
  std::cout << "Width: " << myRect2.getWidth() << std::endl;
  std::cout << "Area: " << myRect2.getArea() << std::endl;
  std::cout << "Perimeter: " << myRect2.getPerimeter() << std::endl;

  return 0;
}