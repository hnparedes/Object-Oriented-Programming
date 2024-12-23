#ifndef STACK_H
#define STACK_H
//template <typename T> //or
template <typename T = char> //Default data type will be char
class Stack {
  public:
    Stack();
    Stack(const Stack &);
    ~Stack();
    bool empty() const;
    T peek() const;
    void push(T value);
    T pop();
    int getSize() const;
    int getCapacity() const;

  private:
    // T elements[100]; -> It would be a fixed size stack
    T *elements; // Dynamically changing the size of the stack
    int size;
    int capacity;
    void ensureCapacity();
};

#endif