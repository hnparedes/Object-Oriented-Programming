#ifndef MYINTEGER_H
#define MYINTEGER_H

class MyInteger 
{
    private:
        int value;
        static double averageOfIntegers;
        static int sumOfIntegers;
        static int numberOfObjects;

    public:
        MyInteger(int val);
        int getValue() const;
        bool isEven() const;
        static bool isOdd(int val);

        bool equals(int val) const;
        bool equals(const MyInteger &myInt) const;

        static double getAverageOfIntegers();
        
};

#endif