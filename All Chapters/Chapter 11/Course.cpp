#include "Course.h"

Course::Course(const std::string & _courseName, int _capacity, int _ID) 
{

//   setCourseName(courseName);
//   setCapacity(_capacity);
//   setID(_ID);
  courseName = _courseName;
  capacity = _capacity;
  ID = _ID;
  numOfStudents = 0;
  students = new Student[capacity];

}

Course::~Course() 
{ 

    delete[] students; 
    
}

Course::Course(const Course & course) 
{
    // setCourseName(course.getCourseName());
    // setCapacity(course.getCapacity());
    // setID(course.getID());
    
    courseName = course.getCourseName();
    capacity = course.getCapacity();
    ID = course.getID();
    numOfStudents = course.getNumOfStudents();


    // Shallow copy creates a new object, but it only copies the pointers to the data, not the actual data itself.
    // students = course.getStudentObjects();

    // Deep copy creates a new object and recursively copies all the data, including any nested objects or pointers.
    students = new Student[capacity];

    for (int i = 0; i < numOfStudents; i++) 
    {

        students[i] = course.getStudentObjects()[i];

    }

}

std::string Course::getCourseName() const 
{ 

    return courseName; 
    
}

int Course::getCapacity() const 
{ 

    return capacity; 
    
}

int Course::getNumOfStudents() const 
{ 

    return numOfStudents; 
    
}

int Course::getID() const 
{ 

    return ID; 
    
}

Student *Course::getStudentObjects() const 
{ 

    return students; 
    
}

void Course::setCourseName(const std::string &_courseName) 
{

    courseName = _courseName;

}

void Course::setCapacity(int _capacity) 
{
    if (_capacity > capacity) 
    {
        
        Student *temp = new Student[_capacity];
        for (int i = 0; i < numOfStudents; i++) 
        {

            temp[i] = students[i];

        }

        delete[] students;
        students = temp;
        capacity = _capacity;
    }

}

void Course::setID(int _ID) 
{
    if (_ID > 0)
    {

        ID = _ID;

    }

}

void Course::setCredit(int _credit) 
{ 

    credit = _credit; 

}

void Course::addStudent(const Student &student) 
{

    students[numOfStudents] = student;
    numOfStudents++;

}

void Course::completeCourse(char grades[]) const 
{
    for (int i = 0; i < numOfStudents; i++) 
    {

        students[i].addCourse(credit, grades[i]);

    }
}