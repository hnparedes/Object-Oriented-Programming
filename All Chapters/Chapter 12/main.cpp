#include <iostream>
#include <vector>
#include <string>
#include "MyVector.h"
#include "MyVector.cpp"

using namespace std;

// Introduction To Template Functions and Classes

// int maxValue(int value1, int value2)
// {

//     if(value1 > value2)
//         return value1;
//     else
//         return value2;

// }

// double maxValue(double value1, double value2)
// {

//     if(value1 > value2)
//         return value1;
//     else
//         return value2;

// }

// char maxValue(char value1, char value2)
// {

//     if(value1 > value2)
//         return value1;
//     else
//         return value2;

// }

// string maxValue(string value1, string value2)
// {

//     if(value1 > value2)
//         return value1;
//     else
//         return value2;

// }

// Generic Max Functions

// template<typename T>
// T maxValue(T value1, T value2)
// {

//     if(value1 > value2)
//         return value1;
//     else
//         return value2;

// }

// Class Templates

// #ifndef STACK_H
// #define STACK_H

// template<typename T>
// class Stack
// {

//     public:
//         Stack();
//         bool empty() const;
//         T peek() const;
//         void push(T value);
//         T pop();
//         int getSize() const;

//     private:
//         T elements[100];
//         int size;

// };

// template<typename T = int>
// class Stack
// {
//   ...
// };

// The C++ vector Class

// vector<elementType> vectorName;

// vector<int> intVector;

// vector<string> stringVector;

template<typename T>
T maxValue(T value1, T value2)
{

    if(value1 > value2)
    {

        return value1;

    }
    else
    {

        return value2;

    }

}

template<typename T>
void swapValues(T & num1, T & num2)
{

    T temp = num1;
    num1 = num2;
    num2 = temp;

}

template<typename T>
T getAverage(T arr[], int size)
{

    T sum = 0;
    for(int i = 0; i < size; i++)
    {

        sum += arr[i];

    }

    return sum / size;

}

template<typename T1, typename T2>
bool areEqual(T1 a, T2 b)
{

    return a == b;

}

int main()
{
    // GenericFunctions.cpp

    cout << "Maximum between 1 and 3 is " << maxValue(1, 3) << endl;
    cout << "Maximum between 1.5 and 0.3 is " << maxValue(1.5, 0.3) << endl;
    cout << "Maximum between 'A' and 'N' is " << maxValue('A', 'N') << endl;
    cout << "Maximum between \"NBC\" and \"ABC\" is " << maxValue(string("NBC"), string("ABC")) << endl;

    int x = 10, y = 20;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swapValues(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl;

    int arrInt[] = {1, 2, 3, 4, 5};
    double arrDouble[] = {1.5, 2.5, 3.5, 4.5, 5.5};
    cout << "Average of int array: " << getAverage(arrInt, 5) << endl;
    cout << "Average of double array: " << getAverage(arrDouble, 5) << endl;
    cout << "Are 5 and 5.0 equal? " << (areEqual(5, 5.0) ? "Yes" : "No") << endl;
    cout << "Are 'a' and 'b' equal? " << (areEqual('a', 'b') ? "Yes" : "No") << endl;

    // textMyVector.cpp

    MyVector<int> v1;
    MyVector<double> v2;
    MyVector<char> v3;
    MyVector<std::string> v4;

    v1.push_back(5);
    v1.push_back(6);
    std::cout << v1.getCapacity() << std::endl;
    v1.push_back(7);
    std::cout << v1.getCapacity() << std::endl;
    v1.push_back(10);
    v1.push_back(9);
    std::cout << v1.getCapacity() << std::endl;
    v1.pop_back();
    v1.pop_back();
    std::cout << v1.getCapacity() << std::endl;
    std::cout << v1.getSize() << std::endl;

    MyVector<int> *vecHeap = new MyVector<int>;

    delete vecHeap;

    MyVector<int> v6(v1);

    std::cout << v1.getSize() << std::endl;
    std::cout << v6.getSize() << std::endl;

    v6.push_back(5);

    v1.print();

    v6.print();

    return 0;

}