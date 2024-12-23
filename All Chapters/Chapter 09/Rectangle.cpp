#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle()
{

    length = 1.0;
    width = 1.0;

}

Rectangle::Rectangle(double _length, double _width)
{

    length = _length;
    width = _width;

}

double Rectangle::getLength()
{

    return length;

}

double Rectangle::getWidth()
{

    return width;

}

void Rectangle::setLength(double _length)
{

    if(_length < 0)
    {

        cout << "Length cannot be negative" << endl;

    }    
    else
    {

        length = _length;

    }

}

void Rectangle::setWidth(double _width)
{
    if(_width < 0)
    {

        cout << "Width cannot be negative" << endl;

    }
    else
    {

        width = _width;

    }

}

double Rectangle::getArea()
{

    return length * width;

}

double Rectangle::getPerimeter()
{

    return 2 * (length + width);
    
}