#ifndef MYVECTOR_H
#define MYVECTOR_H

#include <string>
#include <iostream>
template<typename T>
class MyVector
{

    private:
        int size, capacity;
        T *arr;

    public:
        MyVector();
        MyVector(int _capacity);
        MyVector(const MyVector & other);
        ~MyVector();
        void push_back(T element);
        void pop_back();
        void print() const;
        int getSize() const;
        int getCapacity() const;
        T * getArr() const;
        
};
#endif