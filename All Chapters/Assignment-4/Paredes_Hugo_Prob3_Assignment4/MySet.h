// MySet.h
#include <iostream>
#ifndef MYSET_H
#define MYSET_H
class MySet
{

    private:
        unsigned int range; // Represents the maximum integer allowed in the set
        unsigned int size;  // Number of elements in the set
        bool *set;  // Pointer to dynamic array representing the set

    public:
        MySet(unsigned int maxRange);
        MySet(const MySet& other);
        ~MySet();
        void insertElement(int k);
        void deleteElement(int m);
        void printSet();
        bool isEqualTo(const MySet& other);

};

#endif