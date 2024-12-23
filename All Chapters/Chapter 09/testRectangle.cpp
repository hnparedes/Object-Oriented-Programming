#include <iostream>
#include "Rectangle.cpp"
#include "Rectangle.h"

int main()
{

    Rectangle r1;
    Rectangle r2(2.2, 3.1);
    Rectangle r3(3.5, 4.2);
    cout << r3.getArea() << endl;
    cout << r2.getArea() << endl;
    r2.setLength(9.7);
    
}