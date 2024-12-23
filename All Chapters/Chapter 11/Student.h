#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>

class Student 
{
    private:
        std::string firstName, lastName;
        int age, totalCredits, numOfCourses;
        double GPA;
        static int numOfStudents;
        static std::string universityAddress;

    public:
        Student(const std::string & _firstName, const std::string & _lastName, int _age);
        Student();
        ~Student();
        void setFirstName(const std::string &_firstName);
        void setLastName(const std::string &_lastName);
        void setAge(int _age);
        std::string getFirstName() const;
        std::string getLastName() const;
        int getAge() const;
        int getTotalCredits() const;
        double getGPA() const;
        int getNumOfCourses() const;
        static std::string getUniversityAddress();
        static int getNumOfStudents();
        void addCourse(int credit, char grade);

};

#endif
