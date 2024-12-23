#include "Rational.h"

Rational::Rational()
{
  numerator = 0;
  denominator = 1;
}

Rational::Rational(int _numerator, int _denominator)
{
  setNumerator(_numerator);
  setDenominator(_denominator);
}

int Rational::getNumerator() const
{
  return numerator;
}

int Rational::getDenominator() const
{
  return denominator;
}

void Rational::setNumerator(int _numerator)
{
  numerator = _numerator;
}

void Rational::setDenominator(int _denominator)
{
  if(_denominator == 0)
    denominator = 1;
  else
    denominator = _denominator;
}

double Rational::result() const
{
  return (double) numerator / denominator;
}

Rational Rational::addition(const Rational &second) const
{
  int n, d;

  if(denominator == second.denominator)
  {
    d = denominator;
    n = numerator + second.numerator;
  }
  else
  {
    n = numerator * second.denominator + second.numerator * denominator;

    d = denominator * second.denominator;
  }

  return Rational(n, d);
}

Rational Rational::subtraction(const Rational &second) const
{
  int n, d;

  if(denominator == second.denominator)
  {
    d = denominator;
    n = numerator - second.numerator;
  }
  else
  {
    n = numerator * second.denominator - second.numerator * denominator;

    d = denominator * second.denominator;
  }

  return Rational(n, d);
}

Rational Rational::multiply(const Rational &second) const
{
  int n, d;
  n = numerator * second.numerator;
  d = denominator * second.denominator;

  return Rational(n, d);
}

Rational Rational::division(const Rational &second) const
{
  int n, d;
  n = numerator * second.denominator;
  d = denominator * second.numerator;

  return Rational(n, d);
}

bool Rational::equals(const Rational &second) const
{
  if(result() == second.result())
    return true;
  else
    return false;
}

bool Rational::lessThan(const Rational &second) const
{
  if(result() < second.result())
    return true;
  else
    return false;
}

Rational Rational::operator+(const Rational &second) const
{
  return addition(second);
}

bool Rational::operator<(const Rational &second) const
{
  return lessThan(second);
}

void Rational::printMethod() const
{
  std::cout << numerator << "/" << denominator << std::endl;
}