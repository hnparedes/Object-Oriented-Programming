#include <iostream>
#include <cstring>

class Person {
private:
    int age;
    char *name;

public:
    // Constructor to initialize name and age
    Person(const char *pName, int pAge) : age(pAge) {
        name = new char[strlen(pName) + 1];
        strcpy(name, pName);
    }

    // Copy constructor (supports shallow and deep copy)
    Person(const Person &other, bool shallow = true) : age(other.age) {
        if (shallow) {
            // Shallow copy: point to the same memory
            name = other.name;
        } else {
            // Deep copy: allocate new memory and copy the content
            name = new char[strlen(other.name) + 1];
            strcpy(name, other.name);
        }
    }

    // Destructor to free memory
    ~Person() {
        delete[] name;
    }

    // Display method to show name and age
    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }

    // Getter for name (returns pointer to the name string)
    char* getName() const {
        return name;
    }
};

int main() {
    // Create the first person object with a name and age
    Person p1("Tom", 34);

    // Shallow copy example: copying p1 to p2
    Person p2(p1, true);  // Shallow copy

    std::cout << "After Shallow Copy:\n";
    std::cout << "p1: ";
    p1.display();
    std::cout << "p2: ";
    p2.display();

    // Modify the name of p2 (also modifies p1's name due to shallow copy)
    strcpy(p2.getName(), "Bob");

    std::cout << "After Modifying p2's Name (Shallow Copy):\n";
    std::cout << "p1: ";
    p1.display();
    std::cout << "p2: ";
    p2.display();

    // Deep copy example: copying p1 to p3
    Person p3(p1, false);  // Deep copy

    std::cout << "After Deep Copy:\n";
    std::cout << "p1: ";
    p1.display();
    std::cout << "p3: ";
    p3.display();

    // Modify the name of p3 (does not affect p1 due to deep copy)
    strcpy(p3.getName(), "Drake");

    std::cout << "After Modifying p3's Name (Deep Copy):\n";
    std::cout << "p1: ";
    p1.display();
    std::cout << "p3: ";
    p3.display();

    return 0;
}