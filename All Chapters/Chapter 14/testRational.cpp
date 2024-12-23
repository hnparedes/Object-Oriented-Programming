#include "Rational.h"
#include <iostream>
#include <string>

Rational operator-(const Rational &r1, const Rational &r2) {
  return r1.subtraction(r2);
}

void printFunction(const Rational &rational) {
  std::cout << rational.getNumerator() << "/" << rational.getDenominator()
            << std::endl;
}

int main() {

  Rational r1(4, 2);
  Rational r2(2, 3);

  r2.printMethod();

  Rational r3 = r1 + r2;

  r3.printMethod();

  Rational r4 = r1.addition(r2);

  r4.printMethod();

  Rational r5 = r1 - r2;

  printFunction(r5);

  r5.printMethod();
}