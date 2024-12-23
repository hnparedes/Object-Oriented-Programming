#include <iostream>
#include <string>
using namespace std;
#define SIZE 20

class Student
{

    public:
        string *firstName, *lastName;
        int age;
        double GPA;

    Student()
    {

        firstName = new string[SIZE];
        lastName = new string[SIZE];
        age = 18;
        GPA = 2;

    }
};

int main()
{

    Student stu1;
    Student *stu2 = new Student;

}