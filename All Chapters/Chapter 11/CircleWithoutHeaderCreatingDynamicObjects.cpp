#include <iostream>

class Circle
{

    private:
        double radius;
        static int numberOfObjects;

    public:
        void setRadius(double _radius);

        Circle()
        {

            radius = 1;
            numberOfObjects++;

        }

        Circle(double _radius)
        {

            radius = _radius;
            numberOfObjects++;

        }

        double getRadius() const
        {

            return radius;

        }

        ~Circle()
        {

            numberOfObjects--;

        }

        static int getNumberOfObjects()
        {

            return numberOfObjects;

        }
};

int Circle::numberOfObjects = 0;

int main()
{

    Circle cir1;
    Circle *p1 = new Circle();
    std::cout << cir1.getRadius() << std::endl;
    std::cout << p1->getRadius() << std::endl;

    Circle *p2 = new Circle(3.2);
    std::cout << Circle::getNumberOfObjects() << std::endl;
    delete p2;
    std::cout << Circle::getNumberOfObjects() << std::endl;

}