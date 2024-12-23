#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{

    private:
        double length, width;

    public:
        Rectangle();
        Rectangle(double _length, double _width);

        double getLength();
        double getWidth();

        void setLength(double _length);
        void setWidth(double _width);

        double getArea();
        double getPerimeter();

};
#endif