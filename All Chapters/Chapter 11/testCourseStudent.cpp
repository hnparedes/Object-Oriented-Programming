#include <iostream>
#include "Course.h"
#include "Course.cpp"
#include "Student.h"
#include "Student.cpp"

// Course Class with Student Objects
int main()
{
    Student stu1("BB", "AA", 18);
    Student * stu2 = new Student("CC", "BB", 19);

    std::cout << stu1.getFirstName() << std::endl;
    std::cout << stu2->getFirstName() << std::endl;

    Course OOP("Object Oriented Programming", 42, 3337);
    OOP.addStudent(stu1);
    OOP.addStudent(*stu2);
    
    std::cout << OOP.getNumOfStudents() << std::endl;
    Course * ML = new Course("Machine Learning", 42, 4072);
    std::cout << ML->getNumOfStudents() << std::endl;
}