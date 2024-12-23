#include <iostream>
using namespace std;

class House
{

    private:
        double area;
        int numOfRooms, numOfBath;

    public:
        House()
        {

            setArea(1800);
            setNumOfBath(2);
            setNumOfRooms(3);

        }

        House(double _area, int _numOfBath, int _numOfRooms)
        {

            setArea(_area);
            setNumOfBath(_numOfBath);
            setNumOfRooms(_numOfRooms);

        }

        void setArea(double _area)
        {

            if(_area > 200)
                area = _area;

        }

        void setNumOfRooms(double _numOfRooms)
        {

            if(_numOfRooms > 0)
                numOfRooms = _numOfRooms;

        }

        void setNumOfBath(double _numOfBath)
        {

            if(_numOfBath > 0)
                numOfBath = _numOfBath;

        }

        int getNumOfBath() const;

        int getNumOfRoom() const
        {

            return numOfRooms;

        }

        double getArea() const
        {

            return area;

        }

};

int House::getNumOfBath() const
{

    return numOfBath;

}

int main()
{

    House house1;
    House house2(2000, 2, 4);

    cout << house1.getArea() << endl;
    cout << house2.getNumOfBath() << endl;

}