#include <iostream>
#include <string>

using namespace std;

// Functions
// int sum(int i1, int i2)
// {

//     int sum = 0;
//     for (int i = i1; i <= i2; i++)
//         sum += i;

//     return sum;

// }

// int main()
// {

//     cout << "Sum from 1 to 10 is " << sum(1, 10) << endl; 55
//     cout << "Sum from 20 to 37 is " << sum(20, 37) << endl; 513
//     cout << "Sum from 1 to 10 is " << sum(35, 49) << endl; 630

// }

// int max(int num1, int num2)
// {

//     int result;

//     if (num1 > num2)
//     {

//         result = num1;

//     }
//     else
//     {

//         result = num2;

//     }

//     return result;

// }

// int x = 2
// int y = 3
// int z = max(x, y)

// Void Functions
// void printGrade(double score)
// {

//     if (score >= 90.0)
//         cout << 'A' << endl;
//     else if (score >= 80.0)
//         cout << 'B' << endl;
//     else if (score >= 70.0)
//         cout << 'C' << endl;
//     else if (score >= 60.0)
//         cout << 'D' << endl;
//     else
//         cout << 'F' << endl;    

// }

// int main()
// {

//     cout << "Enter a score: ";
//     double score;
//     cin >> score;
//     cout << "The grade is ";
//     printGrade(score);

// }

// Passing Arguments by Value
// void nPrint(char ch, int n)
// {

//     for (int i = 0; i < n; i++)
//         cout << ch;

// }

// Overloading Functions
// int max(int num1, int num2)
// {

//     if (num1 > num2)
//     {

//         return num1;

//     }
//     else
//     {

//         return num2;

//     }

// }

// double max(double num1, double num2)
// {

//     if (num1 > num2)
//     {

//         return num1;

//     }
//     else
//     {

//         return num2;

//     }

// }

// double max(double num1, double num2, double num3)
// {

//     return max(max(num1, num2), num3);

// }

// Default Arguments
// void printArea(double radius = 1)
// {

//     double area = radius * radius * 3.14159;
//     cout << "area is " << area << endl;

// }

// int main()
// {

//     printArea();
//     printArea(4);

// }

// Inline Functions
// inline void f(int month, int year)
// {

//     cout << "month is " << month << endl;
//     cout << "year is " << year << endl;

// }

// int main()
// {

//     int month = 10, year = 2008;
//     f(month, year);
//     f(9, 2010);

// }

// Local vs Global Variables

// void t1();
// void t2();

// int main()
// {

//     t1();
//     t2();

// }

// int y;

// void t1()
// {

//     int x = 1;
//     cout << "x is " << x << endl;
//     cout << "y is " << y << endl;
//     x++;
//     y++;

// }

// void t2()
// {

//     int x = 1;
//     cout << "x is " << x << endl;
//     cout << "y is " << y << endl;

// }

// Static Local Variables
// void t1();

// int main()
// {

//     t1();
//     t1();

// }

// void t1()
// {

//     static int x = 1;
//     int y = 1;
//     x++;
//     y++;
//     cout << "x is " << x << endl;
//     cout << "y is " << y << endl;

// }

// Passing Arguments by Reference
// void increment(int& n)
// {

//     n++;
//     cout << "n inside the function is " << n << endl;

// }

// int main()
// {

//     int x = 1;
//     cout << "Before the call. x is " << x << endl;
//     increment(x);
//     cout << "After the call, x is " << x << endl;

// }

// Constant Reference Parameters
// int max(const int& num1, const int& num2)
// {

//     int result;

//     if (num1 > num2)
//     {

//         result = num1;

//     }
//     else
//     {

//         result = num2;

//     }

// }

// These functions must be outside int main()
// void mySwap(int & num1, int & num2)
// {

//     int temp = num1;
//     num1 = num2;
//     num2 = temp;

// }

// string con(string & s1, string & s2)
// {

//     return s1 + s2;

// }

// double area(double radius=1)
// {

//     return radius * radius * 3.1415154;

// }

// & Triggers a passby reference, w/o it causes a passby value
// string addChar(const string& original)
// {

//     return original + "B";

// }

int x = 2;

int main() 
{
    // cout << area() << endl;

    // int n1 = 3;
    // int n2 = 6;

    // mySwap(n1, n2);

    // cout << n1 << " " << n2 << endl;

    // string string1 = "Hugo ";
    // string string2 = "Paredes";

    // cout << con(string1, string2) << endl;

    // string ori = "ACDE";

    // cout << addChar(ori) << endl;

    int x = 1;
    
    // :: calls the global variable 2, w/o it calls the local variable 1
    cout << ::x << endl;

    return 0;

}