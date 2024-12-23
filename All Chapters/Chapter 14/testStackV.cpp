#include "StackV.h"

using namespace std;

int main() {

  StackV<int> intStack;
  StackV<double> doubleStack;
  StackV<> charStack;
  StackV<string> stringStack;

  intStack.push(5);
  intStack.push(6);
  intStack.push(7);
  intStack.push(8);
  
  intStack.printStack();

  intStack.pop();

  intStack.printStack();
  stringStack.push("Hello");

  return 0;
}