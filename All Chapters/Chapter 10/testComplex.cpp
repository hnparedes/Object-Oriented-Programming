// Practice 5

// Class Complex Here

#include "Complex.h"
#include "Complex.cpp"
#include <iostream>

Complex addition(Complex &comp1, Complex &comp2) 
{

    Complex result(comp1.getReal() + comp2.getReal(),
    comp1.getImg() + comp2.getImg());
    return result;

}

// Complex additionTwo(const Complex & comp1, const Complex& comp2) 
// {

//     double realSum = comp1.getReal() + comp2.getReal();
//     double imgSum = comp1.getImg() + comp2.getImg();
//     return Complex(realSum, imgSum);

// }

int main() 
{

    // Complex comp1;
    // comp1.setReal(2.4);
    // comp1.setImg(4.1);

    // Complex comp2(3.2, -3.6);

    // Complex result1 = comp1.addition(comp2);
    // std::cout << "Addition using the first method (inside the class): ";
    // result1.printComplex(); 5.6 + 0.5i

    // Complex result2 = additionTwo(comp1, comp2);
    // std::cout << "Addition using the second method (outside the class): ";
    // result2.printComplex(); 5.6 + 0.5i

    Complex comp1;

    Complex comp2(4, 2.6);
    Complex comp3(-2.5, -6.2);

    comp3.printComplex();

    Complex comp4 = comp2.addition(comp3);

    comp4.printComplex();

    Complex comp5 = addition(comp2, comp3);

    comp5.printComplex();

}
