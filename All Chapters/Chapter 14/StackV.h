#ifndef STACKV_H
#define STACKV_H

#include <iostream>
#include <vector>

template <typename T = char> 
class StackV {
private:
  // T elements[100];
  // T * elements;
  std::vector<T> elements;

public:
  StackV();
  StackV(const std::vector<T> second);

  void push(const T &element);
  T pop();
  T peek() const;

  int getSize() const;
  int getCapacity() const;

  void printStack() const;
};
#endif