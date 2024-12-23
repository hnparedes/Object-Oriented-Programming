#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

class Rational {
private:
  int numerator, denominator;

public:
  Rational();
  Rational(int _numerator, int _denominator);

  int getNumerator() const;
  int getDenominator() const;

  void setNumerator(int _numerator);
  void setDenominator(int _denominator);

  double result() const;

  Rational addition(const Rational &second) const;
  Rational subtraction(const Rational &second) const;
  Rational multiply(const Rational &second) const;
  Rational division(const Rational &second) const;

  bool equals(const Rational &second) const;
  bool lessThan(const Rational &second) const;

  Rational operator+(const Rational &second) const;
  bool operator<(const Rational &second) const;

  void printMethod() const;
};
#endif