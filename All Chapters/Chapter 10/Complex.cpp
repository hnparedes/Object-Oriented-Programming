#include "Complex.h"
#include <iostream>

Complex::Complex()
{

    real = 0.0;
    img = 0.0;

}

Complex::Complex(double _real, double _img)
{

    real = _real;
    img = _img;

}

double Complex::getReal()
{

    return real;

}

double Complex::getImg()
{

    return img;

}

void Complex::setReal(double _real)
{

    real = _real;

}

void Complex::setImg(double _img)
{

    img = _img;

}

void Complex::printComplex()
{

    if(img < 0)
    {

        std::cout << real << " " << img << 'i' << std::endl;

    }
    else
    {

        std::cout << real << " + " << img << 'i' << std::endl;

    }

}

Complex Complex::addition(Complex &comp)
{

    Complex result(real + comp.getReal(), img + comp.getImg());
    return result;

}