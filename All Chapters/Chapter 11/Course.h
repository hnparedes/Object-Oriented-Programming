#ifndef COURSE_H
#define COURSE_H
#include "Student.h"

class Course 
{
    
    private:
        std::string courseName;
        int capacity, numOfStudents, ID, credit;
        Student *students;

    public:
        Course(const std::string &_courseName, int _capacity, int _ID);
        ~Course();
        Course(const Course &course);

        std::string getCourseName() const;
        int getCapacity() const;
        int getNumOfStudents() const;
        int getID() const;
        Student *getStudentObjects() const;

        void setCourseName(const std::string &_courseName);
        void setCapacity(int _capacity);
        void setID(int _ID);
        void setCredit(int _credit);
        
        void addStudent(const Student &student);
        void completeCourse(char grades[]) const;

};

#endif