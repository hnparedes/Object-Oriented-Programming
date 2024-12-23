#include "StackV.h"

template <typename T> 
StackV<T>::StackV() {}

template <typename T> 
StackV<T>::StackV(const std::vector<T> second) {
  elements = second;
}

template <typename T> 
void StackV<T>::push(const T &element) {
  elements.push_back(element);
}

template <typename T> T StackV<T>::pop() {
  T temp = elements[elements.size() - 1];
  elements.pop_back();
  return temp;
}

template <typename T> T StackV<T>::peek() const {
  return elements[elements.size() - 1];
}

template <typename T> 
int StackV<T>::getSize() const { return elements.size(); }

template <typename T> 
int StackV<T>::getCapacity() const {
  return elements.capacity();
}

template <typename T> 
void StackV<T>::printStack() const {
  for (int i = elements.size() - 1; i >= 0; i--)
    std::cout << elements[i] << std::endl;
}

template class StackV<int>;
template class StackV<char>;
template class StackV<double>;
template class StackV<std::string>;