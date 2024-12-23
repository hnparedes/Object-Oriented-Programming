#include "MyInteger.h"

double MyInteger::averageOfIntegers = 0.0;
int MyInteger::sumOfIntegers = 0;
int MyInteger::numberOfObjects = 0;

MyInteger::MyInteger(int val) : value(val) 
{

    sumOfIntegers += val;
    numberOfObjects++;
    averageOfIntegers = static_cast<double>(sumOfIntegers) / numberOfObjects;

}

int MyInteger::getValue() const 
{

    return value;

}

bool MyInteger::isEven() const 
{

    return value % 2 == 0;

}

bool MyInteger::isOdd(int val) 
{

    return val % 2 != 0;

}

bool MyInteger::equals(int val) const 
{

    return value == val;

}

bool MyInteger::equals(const MyInteger &myInt) const 
{

    return value == myInt.value;

}

double MyInteger::getAverageOfIntegers() 
{

    return averageOfIntegers;
    
}