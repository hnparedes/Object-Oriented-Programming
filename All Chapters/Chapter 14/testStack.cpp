#include <iostream>

#include "Stack.h"

template <typename T> void printStack(const Stack<T> &stack) {
  // Copy constructor
  Stack<T> temp(stack);

  while (!temp.empty())
    std::cout << temp.pop() << " ";
  std::cout << std::endl;
}

int main() {
  
  Stack<int> intStack;
  intStack.push(4);
  intStack.push(1);
  intStack.push(2);
  intStack.push(3);

  std::cout << "Capacity of the Stack is: " << intStack.getCapacity()
            << std::endl;

  printStack(intStack);
  
  intStack.push(7);
  intStack.push(5);
  intStack.push(8);
  intStack.push(9);
  intStack.push(10);

  std::cout << "Capacity of the Stack is: " << intStack.getCapacity()
            << std::endl;
  
  printStack(intStack);
  
  intStack.pop();

  std::cout << "Capacity of the Stack is: " << intStack.getCapacity()
            << std::endl;

  printStack(intStack);

  intStack.pop();

  std::cout << "Capacity of the Stack is: " << intStack.getCapacity()
            << std::endl;

  printStack(intStack);

  Stack<std::string> stack2;
  stack2.push("Chicago");
  stack2.push("Istanbul");
  stack2.push("Orlando");
  stack2.push("London");
  printStack(stack2);

  
  //default data type is char
  Stack<> stack3;
  stack3.push('C');
  stack3.push('E');
  printStack(stack3);

  return 0;
}