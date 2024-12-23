#include "Circle.h"
#include <iostream>

using namespace std;

Circle::Circle()
{

    radius = 1;

}

Circle::Circle(double _radius)
{

    radius = _radius;

}

double Circle::getArea()
{

    return radius * radius * 3.1415;

}

double Circle::getRadius()
{

    return radius;

}

void Circle::setRadius(double _radius)
{

    if(_radius > 0)
        radius = _radius;

}
