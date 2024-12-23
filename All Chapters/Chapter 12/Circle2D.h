#ifndef CIRCLE2D_H
#define CIRCLE2D_H

#include <cmath>

class Circle2D {
private:
    double x;
    double y;
    double radius;
    static int numberOfCircles;

public:
    Circle2D(double x = 0, double y = 0, double radius = 1);
    Circle2D(const Circle2D &circle);
    ~Circle2D();

    double getX() const;
    double getY() const;
    double getRadius() const;
    static int getNumberOfCircles();

    bool overlaps(const Circle2D& circle) const;
};

#endif