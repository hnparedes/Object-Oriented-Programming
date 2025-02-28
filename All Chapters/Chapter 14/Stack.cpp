#include "Stack.h"
#include <string>

template<typename T>
Stack<T>::Stack()
{
  size = 0;
  capacity = 4;
  elements = new T[capacity];
}

template<typename T>
Stack<T>::Stack(const Stack& stack)
{
  elements = new T[stack.capacity];
  size = stack.size;
  capacity = stack.capacity;
  for (int i = 0; i < size; i++)
  {
    elements[i] = stack.elements[i];
  }
}

template<typename T>
Stack<T>::~Stack()
{
  delete [] elements;
}

template<typename T>
bool Stack<T>::empty() const
{
  return size == 0;
}

template<typename T>
T Stack<T>::peek() const
{
  return elements[size - 1];
}

template<typename T>
void Stack<T>::push(T value)
{
  ensureCapacity();
  elements[size++] = value;
}

template<typename T>
void Stack<T>::ensureCapacity()
{
  if (size >= capacity)
  {
    T* old = elements;
    capacity = 2 * size;
    elements = new T[size * 2];
    for (int i = 0; i < size; i++)
      elements[i] = old[i];
    delete [] old;
  }
}

template<typename T>
T Stack<T>::pop()
{
  return elements[--size];
}

template<typename T>
int Stack<T>::getSize() const
{
  return size;
}

template<typename T>
int Stack<T>::getCapacity() const
{
  return capacity;
}

template class Stack<int>;
template class Stack<char>;
template class Stack<std::string>;