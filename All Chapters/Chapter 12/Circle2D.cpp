#include "Circle2D.h"

int Circle2D::numberOfCircles = 0;

Circle2D::Circle2D(double x, double y, double radius) : x(x), y(y), radius(radius) {
    ++numberOfCircles;
}

Circle2D::Circle2D(const Circle2D &circle) : x(circle.x), y(circle.y), radius(circle.radius) {
    ++numberOfCircles;
}

Circle2D::~Circle2D() {
    --numberOfCircles;
}

double Circle2D::getX() const {
    return x;
}

double Circle2D::getY() const {
    return y;
}

double Circle2D::getRadius() const {
    return radius;
}

int Circle2D::getNumberOfCircles() {
    return numberOfCircles;
}

bool Circle2D::overlaps(const Circle2D& circle) const {
    double distance = std::sqrt((x - circle.x) * (x - circle.x) + (y - circle.y) * (y - circle.y));
    return distance < (radius + circle.radius);
}