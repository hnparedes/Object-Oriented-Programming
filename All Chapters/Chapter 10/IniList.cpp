#include <iostream>

using namespace std;

class myClass 
{

    private:
        int x;
        const int y;
        char z;

    public:
    myClass(int _x, char _z): y(3) // member initialization list
    {

        x = _x;
        // y = _y; You did not initialize y yet
        z = _z;

    }

};

int main()
{

    myClass obj1(2, 'A');

}