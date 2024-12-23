// MySet.cpp
#include "MySet.h"
#include <iostream>

// Constructor
MySet::MySet(unsigned int maxRange) 
{

    range = maxRange;
    size = (maxRange + 1);
    set = new bool[size];
    for (unsigned int i = 0; i < size; ++i) 
    {

            set[i] = false;
            
    }

}

// Copy Constructor
MySet::MySet(const MySet& other)
{

    range = other.range;
    size = other.size;
    set = new bool[size];
    for(unsigned int i = 0; i < size; ++i)
    {

        set[i] = other.set[i];

    }

}

// Destructor
MySet::~MySet()
{

    delete[] set;

}

// Insert Element
void MySet::insertElement(int k)
{

    if(k < 0 || static_cast<unsigned int>(k) > range)
    {

        std::cout << "Invalid insert attempted for the number " << k << "!\n";

    }
    else
    {

        set[k] = true;

    }

}

// Delete Element
void MySet::deleteElement(int m)
{

    if(m < 0 || static_cast<unsigned int>(m) > range)
    {

        std::cout << "Invalid delete attempted for the number " << m << "!\n";

    }
    else
    {

        set[m] = false;

    }

}

// Print Set
void MySet::printSet()
{

    bool isEmpty = true;
    std::cout << "{ ";
    for(unsigned int i = 0; i < size; ++i)
    {

        if(set[i])
        {

            if(!isEmpty)
            {

                std::cout << ", ";

            }

            std::cout << i;
            isEmpty = false;

        }

    }
    if(isEmpty)
    {

        std::cout << "---";

    }

    std::cout << " }\n";

}

// Check if two sets are equal
bool MySet::isEqualTo(const MySet& other)
{

    if(range != other.range) 
    { 
        
        return false;

    }
    else
    {
        
        for(unsigned int i = 0; i < size; ++i) 
        {
            if (set[i] != other.set[i]) 
            {

                return false;

            }
            
        }

        return true;

    }
}
