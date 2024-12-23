#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{

    private:
        double radius;

    public:
        Circle();
        Circle(double _radius);

        double getRadius();

        void setRadius(double _radius);

        double getArea();

};
#endif