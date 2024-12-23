#include <iostream>
#include "Circle.h"
#include "Circle.cpp"

int main()
{

    Circle cir1;

    Circle cir2(4.4);

    cout << cir1.getRadius() << endl;
    cout << cir2.getRadius() << endl;

    cir1.setRadius(2.3);

    cout << cir1.getRadius() << endl;
    cout << cir2.getArea() << endl;
    cout << cir1.getArea() << endl;

    Circle cir3;
    Circle cir4(5.0);
    cout << cir3.getArea() << endl;
    cout << cir3.getRadius() << endl;
    cout << cir4.getArea() << endl;
    cout << cir4.getRadius() << endl;

}