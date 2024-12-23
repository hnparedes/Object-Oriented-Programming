#include <iostream>
using namespace std;

class Circle 
{

    public:
        // Constructor with default radius
        Circle() 
        {

            radius = 1.0;
            numberOfObjects++;

        }

        // Constructor with specified radius
        Circle(double r) 
        {

            radius = r;
            numberOfObjects++;

        }

        // Static function to return number of Circle objects
        static int getNumberOfObjects() 
        {

            return numberOfObjects;

        }

        // Member function to compute the area of the circle
        double getArea() const 
        {

            return 3.14159 * radius * radius;

        }

    private:
        double radius;  // Instance variable for circle's radius

        // Static variable to track number of Circle objects
        static int numberOfObjects;
        
};

// Initialize the static variable (must be done outside the class)
int Circle::numberOfObjects = 0;

// Chapter 9

class House 
{

    private:
        double area;
        int numOfRooms, numOfBath;

    public:
        House() 
        {

            area = 1900;
            numOfRooms = 3;
            numOfBath = 2;

        }

        //How to use the this pointer
        House(double area, int numOfRooms, int numOfBath) 
        {

            this->area = area;
            this->numOfRooms = numOfRooms;
            this->numOfBath = numOfBath;

        }

        // You can implement later
        int getNumOfRooms();

        int getNumOfBath() 
        { 

            return numOfBath; 

        }

        double getArea() 
        { 

            return area; 

        }

        void setNumOfRooms(int _numOfRooms) 
        {
            if (_numOfRooms > 0)
            {

                numOfRooms = _numOfRooms;

            }
        }

        void setNumOfBath(int _numOfBath) 
        {
            if (_numOfBath > 0)
            {

                numOfBath = _numOfBath;

            }
        }

        void setArea(double _area) 
        {
            if (_area > 300)
            {

                area = _area;

            }
        }
};

int House::getNumOfRooms()
{

    return numOfRooms;
    
}

int main() 
{

    // Using the default constructor
    Circle circle1;
    // Accessing static function (shared by all instances)
    cout << "Total number of Circle objects: " << Circle::getNumberOfObjects() << endl;

    Circle circle2(10.0);
    cout << "Total number of Circle objects: " << Circle::getNumberOfObjects() << endl;

    Circle circle3(10.0);
    cout << "Total number of Circle objects: " << Circle::getNumberOfObjects() << endl;

    // Accessing instance function (each object has its own radius)
    cout << "Area of circle1: " << circle1.getArea() << endl;

    cout << "Area of circle2: " << circle2.getArea() << endl;

    cout << "Area of circle3: " << circle3.getArea() << endl;

    House house1;
    std::cout << house1.getNumOfBath() << std::endl;
    std::cout << house1.getNumOfRooms() << std::endl;
    std::cout << house1.getArea() << std::endl;

    // Passing Objects to Functions

    // void printCircle(Circle& c)
    // {
    //     cout << "The area of the circle of "
    //       << c.getRadius() << " is " << c.getArea() << endl;

    // }

    // Array of Objects

    // Circle circleArray[10]; Declare an array of ten Circle objects

    // Circle circleArray[3] = {Circle(3), Circle(4), Circle(5)};

    // Instance and Static Members

    // static int numberOfObjects;

    // static int getNumberOfObjects();

    // Circle circle1(2);
    // Circle circle2(5);

    // Constant Member Functions

    // double getArea() const;

    // double getRadius() const;

    // Return the Radius of this circle
    // double Circle::getRadius() const
    // {

    //     return radius;

    // }

    return 0;
    
}