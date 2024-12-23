#include "Student.h"

int Student::numOfStudents = 0;
std::string Student::universityAddress = "Research Way, Lakeland";

Student::Student(const std::string & _firstName, const std::string & _lastName, int _age) 
{

    // setFirstName(_firstName);
    // setLastName(_lastName);
    // setAge(_age);
    firstName = _firstName;
    lastName = _lastName;
    age = _age;
    totalCredits = 0;
    numOfCourses = 0;
    GPA = 0;
    numOfStudents++;

}

Student::Student() 
{

    std::string name = "Unknown";
    // setFirstName(name);
    // setLastName(name);
    // setAge(18);
    firstName = name;
    lastName = name;
    age = 18;
    totalCredits = 0;
    GPA = 0;
    numOfStudents++;

}

Student::~Student() 
{ 

    numOfStudents--; 

}

void Student::setFirstName(const std::string &_firstName) 
{ 

    firstName = _firstName;

}

void Student::setLastName(const std::string &_lastName) 
{ 

    lastName = _lastName; 

}

void Student::setAge(int _age) 
{
    if (age < 17)
    {

        age = 17;

    }
    else
    {

        age = _age;

    }

}

std::string Student::getFirstName() const 
{ 

    return firstName;

}

std::string Student::getLastName() const 
{ 

    return lastName;

}

int Student::getAge() const 
{ 

    return age; 

}

int Student::getTotalCredits() const 
{ 

    return totalCredits; 

}

double Student::getGPA() const 
{ 

    return GPA; 

}

std::string Student::getUniversityAddress() 
{ 

    return universityAddress; 

}

int Student::getNumOfStudents() 
{ 

    return numOfStudents; 

}

int Student::getNumOfCourses() const 
{ 

    return numOfCourses; 

}

void Student::addCourse(int credit, char grade) 
{

    totalCredits += credit;
    numOfCourses++;
    if (grade == 'A') 
    {

        GPA = (GPA + 4) / totalCredits;

    } 
    else if (grade == 'B') 
    {

        GPA = (GPA + 3) / totalCredits;

    } 
    else if (grade == 'C') 
    {

        GPA = (GPA + 2) / totalCredits;

    } 
    else if (grade == 'D') 
    {

        GPA = (GPA + 1) / totalCredits;

    } 
    else if (grade == 'F') 
    {

        GPA = (GPA + 0) / totalCredits;

    } 
    else 
    {

        std::cout << "Not eligible grade!" << std::endl;
        totalCredits -= credit;
        numOfCourses--;
        
    }
}
