#include <iostream>
#include <string>

using namespace std;

// class Car
// {

//     public:
//         string color, make, model;
//         int year;
//         double MPG, weight;

//         Car()
//         {

//             color = "White";
//             make = "Ford";
//             model = "Mustang";
//             year = 2024;
//             MPG = 18.7;
//             weight = 3500;

//         }

//         Car(string _color, string _make, string _model, int _year, double _MPG, double _weight)
//         {

//             color = _color;
//             make = _make;
//             model = _model;
//             year = _year;
//             MPG = _MPG;
//             weight = _weight;

//         }

//         Car(string _color, string _make, string _model)
//         {

//             color = _color;
//             make = _make;
//             model = _model;
//             year = 2024;
//             MPG = 18.6;
//             weight = 3500;

//         }

//         Car(int _year, double _MPG, double _weight, string _color)
//         {

//             year = _year;
//             MPG = _MPG;
//             weight = _weight;
//             color = _color;

//         }

//         void display()
//         {

//             cout << "The current car is: " << endl;
//             cout << make << endl;
//             cout << model << endl;
//             cout << color << endl;
//             cout << weight << endl;
//             cout << MPG << endl;
//             cout << year << endl;

//         }


// };


// passby value void display is easier to make, but passby reference void displayFun is faster
// Has to be outside the class
// void displayFun(Car& car)
// {

//     cout << "The current car is: " << endl;
//     cout << car.make << endl;
//     cout << car.model << endl;
//     cout << car.color << endl;
//     cout << car.weight << endl;
//     cout << car.MPG << endl;
//     cout << car.year << endl;

// }

class Account
{

    public:
    int id;
    double balance, annualInterestRate;

    Account()
    {

        id = 0;
        balance = 0.0;
        annualInterestRate = 0.0;

    }

    Account(int _id, double _balance, double _annualInterestRate)
    {

        id = _id;
        balance = _balance;
        annualInterestRate = _annualInterestRate;


    }

    double getMonthlyInterestRate()
    {

        return annualInterestRate /= 12.0;

    }

    void withdraw(double amount)
    {

        balance -= amount;

    }

    void deposit(double amount)
    {

        balance += amount;

    }

    double getBalance()
    {

        return balance;

    }


};

class Student
{

    public:
    string firstName, lastName;
    double GPA;
    int id, credits;

    Student()
    {

        this->firstName = " ";
        this->lastName = " ";
        this->id = 0;
        this->GPA = 0;
        this->credits = 0;

    }

    //this is an alternate pointer for the _parameters
    Student(string firstName, string lastName, int id, double GPA, int credits)
    {

        this->firstName = firstName;
        this->lastName = lastName;
        this->id = id;
        this->GPA = GPA;
        this->credits = credits;

    }

    void print()
    {

        cout << "ID: " << id << endl;
        cout << "First Name: " << firstName << endl;
        cout << "Last Name: " << lastName << endl;
        cout << "GPA: " << GPA << endl;
        cout << "Completed credits: " << credits << endl;

    }

    void addCourse(int credit, char grade)
    {

        int gradeNum;

        if(grade == 'A')
        {

            gradeNum = 4;

        }
        else if(grade == 'B')
        {

            gradeNum = 3;

        }
        else if(grade == 'C')
        {

            gradeNum = 2;

        }
        else if(grade == 'D')
        {

            gradeNum = 2;

        }
        else if(grade == 'F')
        {

            gradeNum = 1;

        }
        else
        {

            cout << "Grade is not correct" << endl;

        }

        GPA = ((GPA * credits) + (gradeNum * credit)) / (credits + credit);
        credits = credits + credit;

    }

};

class Circle2
{

    private:
        int radius;
        static int numOfObjects;

    public:
        Circle2()
        {

            radius = 1;
            numOfObjects++;

        }

        Circle2(double _radius)
        {

            radius = _radius;
            numOfObjects++;

        }

        static int getNumOfObjects()
        {

            return numOfObjects;

        }

};

int Circle2::numOfObjects = 0;

int main()
{

    // no-area will work
    // Car car1;
    // Car car2("Black", "Mercedes", "GLA");
    // Car car3("Black", "Mercedes", "GLA", 2021, 24.2, 4500);
    // Car car4(2020, 21.5, 3500, "Red");

    // car3.display();

    // displayFun(car3);

    // cout << car4.MPG << endl;
    // cout << car2.year << endl;

    // car4.MPG = 23.4;

    // cout << car4.MPG << endl;

    Student stu1;

    Student * stuP = &stu1;

    stu1.print();
    // stuP->print();
    stu1.addCourse(3, 'A');
    stu1.print();

    stu1.addCourse(4, 'B');
    // stu1.print();

    // Constructor Not Found?
    // cir2.radius = 100;
    // cout << cir2.getRadius() << endl;

    cout << Circle2::getNumOfObjects() << endl;

    // Not A Member?
    // Circle2 cir2;
    // cout << cir2.getNumOfObjects() << endl;

    // Constructors
    // Construct a default circle object
    // Circle()
    // {

    //     radius = 1;

    // }

    // Construct a circle object
    // Circle(double newRadius)
    // {

    //     radius = newRadius;

    // }


    // Constructing and Using Objects
    // Circle circle1;

    // Circle circle2(2);

    // cout << circle1.radius << " " << circle2.radius << endl;
    // cout << circle1.getArea() << " " << circle2.getArea() << endl;

    // circle1 = circle2;

    // Separating Class Definition from Implementation
    // Construct a circle object
    // Circle::Circle(double _radius)
    // {

    //     radius = _radius;

    // }

    // Preventing Multiple Inclusions

    // #ifndef ClassName_H
    // #define ClassName_H

    // A class header for the class named ClassName

    // #endif

    // Inline Functions in Classes
    // class A
    // {

    //     public:
    //     A()
    //     {

    //         Do something;

    //     }
    //     double f1()
    //     {

    //         Return a number

    //     }

    //     double f2();

    // };

    // Implement function as inline
    // intline double A::f2()
    // {

    //     Return a number

    // }

    // Data Field Encapsulation
    // Default is private
    // class Circle
    // {

    //     public:
    //     Circle();
    //     Circle(double);
    //     double getArea();

    //     private:
    //     double radius;

    // };

    // class Circle
    // {
    // public:
    // Circle();
    // Circle(double);

    // private:
    // double radius;

    // public:
    // double getArea();
    // double getRadius();
    // void setRadius(double);
    // };

    // class Circle
    // {

    //     private:
    //     double radius;

    //     public:
    //     double getArea();
    //     double getRadius();
    //     void setRadius();

    //     public:
    //     Circle();
    //     Circle(double);

    // };

    // Get --> returnType getPropertyName()
    // Set --> void setPropertyName(dataType propertyValue)

    // Practice 4

    Account sav1(1122, 20000.0, 4.5);

    sav1.withdraw(2500);
    sav1.deposit(3000);
    cout << "The balance for the account is " << sav1.getBalance() << endl;
    cout << "The monthly interest rate is " << sav1.getMonthlyInterestRate() << endl;

    return 0;

}
