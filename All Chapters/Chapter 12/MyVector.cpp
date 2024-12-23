#include "MyVector.h"

template<typename T>
MyVector<T>::MyVector()
{

    size = 0;
    capacity = 2;
    arr = new T[capacity];

}

template<typename T>
MyVector<T>::MyVector(int _capacity)
{

    size = 0;
    capacity = _capacity;
    arr = new T[capacity];

}

template<typename T>
MyVector<T>::MyVector(const MyVector & other)
{

    size = other.size;
    capacity = other.capacity;
    arr = new T[capacity];
    for(int i = 0; i < size; i++)
    {

        arr[i] = other.arr[i];

    }

}

template<typename T>
MyVector<T>::~MyVector()
{

    delete [] arr;

}

template<typename T>
void MyVector<T>::push_back(T element)
{

    if(size == capacity)
    {
        capacity *= 2;
        T * temp = new T[capacity];
        for(int i = 0; i < size; i++)
        {

            temp[i] = arr[i];

        }

        temp[size] = element;
        size++;
        delete [] arr;
        arr = temp;
    }
    else
    {

        arr[size] = element;
        size++;

    }
}

template<typename T>
void MyVector<T>::pop_back()
{
    size--;
    if(size < capacity / 2)
    {
        capacity /= 2;
        T * temp = new T[capacity];
        for(int i=0; i < size; i++)
        {

            temp[i] = arr[i];

        }

        delete [] arr;
        arr = temp;

    }

}

template<typename T>
int MyVector<T>::getSize() const
{

    return size;

}

template<typename T>
int MyVector<T>::getCapacity() const
{

    return capacity;

}

template<typename T>
T * MyVector<T>::getArr() const
{

    return arr;

}

template<typename T>
void MyVector<T>::print() const
{

    std::cout << "The size of the vector is: " << size << std::endl;
    std::cout << "The capacity of the vector is: " << capacity << std::endl;
    std::cout << "Elements: " << std::endl;
    for(int i = 0; i < size; i++)
    {

        std::cout << arr[i] << " ";

    }

    std::cout << std::endl;

}

template class MyVector<int>;
template class MyVector<double>;
template class MyVector<char>;
template class MyVector<std::string>;