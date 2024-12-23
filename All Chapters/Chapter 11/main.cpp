// int* reverse(const int* list, int size)
// {

//     Wrong: int result[6]; Correct Version: int* result = new int[size];

//     for(int i = 0, j = size - 1; i < size; i++, j--)
//     {

//         result[j] = list[i];

//     }

//     return result;

// }

// void printArray(const int* list, int size)
// {

//     for(int i = 0; i < size; i++)
//     {

//         cout << list[i] << " ";

//     }

// }

// Student Names Printed From Class
// void printStudentNames(const Course &course) 
// {
//     for (int i = 0; i < course.getNumOfStudents(); i++)
//     {

//         std::cout << course.getStudentNames()[i] << " from " << course.getCourseName() << std::endl;

//     }

//     std::cout << std::endl;
// }

int main() 
{

    // int a;

    // int *pInt = new int(5);
    // cout << *pInt << endl;

    // delete pInt;
    // cout << *pInt << endl;

    // Course Class with Student Names

    // Course course1("Object Oriented Programming", 42);
    // course1.addStudent("Student-1");
    // course1.addStudent("Student-2");
    // course1.addStudent("Student-3");
    // course1.addStudent("Student-4");
    // printStudentNames(course1);

    // Creating a course object on Heap but having a pointer on Stack (course2).
    // Course *course2 = new Course("Introduction to Programming", 48);
    // course2->addStudent("Student-1");
    // course2->addStudent("Student-2");
    // course2->addStudent("Student-3");
    // course2->addStudent("Student-4");

    // When you pass an object from a pointer
    // printStudentNames(*course2);

    // Dynamic Persistent Memory Allocation

    // int list[] = {1, 2, 3, 4, 5, 6};
    // int* p = reverse(list, 6);
    // printArray(p, 6);

    // How to Free Memory?

    // delete p;
    // delete [] list;

    // int x = 10;
    // int* p = &x;
    // delete p; This is wrong

    // Creating and Accessing Dynamic Objects

    // ClassName* pObject = new ClassName(); or
    // ClassName* pObject = new ClassName;

    // ClassName* pObject = new ClassName(arguments);

    // string* p = new string("abcdefg");
    // cout << "The first three characters in the string are"
    //   << (*p).substr(0, 3) << endl;
    // cout << "The length of the string is " << (*p).length() << endl;

    // cout << "The first three characters in the string are "
    //   << p->substr(0, 3) << endl;
    // cout << "The length of the string is " << p->length() << endl;

    // Destructors
    
    // Destruct a circle object
    // Circle::~Circle()
    // {

    //     numberOfObjects--;

    // }

    // Copy Constructors
    // ClassName(const ClassName&)

    // Customizing Copy Constructors
    // Course::Course(const Course& course) Copy constructor
    // {

    //     courseName = course.courseName;

    //     numberOfStudents = course.numberOfStudents;
    //     capacity = course.capacity;
    //     students = new string[capacity];

    // }

    return 0;

}
