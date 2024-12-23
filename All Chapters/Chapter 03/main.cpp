#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

  // If-Else Statement

  // double radius, area;

  // cout << "Enter the radius of the circle: ";
  // cin >> radius;

  // if (radius < 0)
  // {
  //   cout << "Incorrect Input" << endl;
  // }
  // else
  // {
  //   area = radius * radius * PI;
  //   cout << "The area of the circle is: " << area << endl;
  // }

  // The Bool Data Type
  bool flag = true;
  cout << (2 < 5);
  flag = false;
  cout << flag;

  // If Statements
  // int number;
  // cout << "Enter an integer: ";
  // cin >> number;

  // if (number % 2 == 0)
  //   cout << "HiFive" << endl;

  // if (number % 2 == 1)
  //   cout << "HiEven" << endl;

  // if (score >= 90.0)
  //   cout << 'Grade is A' << endl;
  // else if (score >= 80.0)
  //   cout << 'Grade is B' << endl;
  // else if (score >= 70.0)
  //   cout << 'Grade is C' << endl;
  // else if (score >= 60.0)
  //   cout << 'Grade is D' << endl;
  // else
  //   cout << 'Grade is F' << endl;

  // Logical Operators
  // int number;
  // cout << "Enter an integer: ";
  // cin >> number;

  // if (number % 2 == 0 && number % 3 == 0))
  //   cout << number << " is divisible by 2 and 3" << endl;
  // if (number % 2 == 0 || number % 3 == 0))
  //   cout << number << " is divisible by 2 or 3" << endl;
  // if ((number % 2 == 0 || number % 3 == 0) && !(number % 2 == 0 && number % 3 == 0))
  // cout << number << " divisible by 2 or 3, but not both." << endl;

  // switch(day)
  // {

  //   case 1:
  //     cout << "Monday" << endl;
  //   case 2:
  //     cout << "Tuesday" << endl;
  //   case 3:
  //     cout << "Wednesday" << endl;
  //   case 4:
  //     cout << "Thursday" << endl;
  //   case 5:
  //     cout << "Friday" << endl;
  //   default:
  //     cout << "It is not a correct input!!!"
    
  // }

  // Conditional Expression

  // double x, y, z;
  // cin >> x >> y >> z;

  // cout << (x < y && y < z ? "sorted" : "not sorted") << endl;

  srand(time(0));

  int number1 = rand() % 10;
  int number2 = rand() % 10;

  cout << number1 << " " << number2 << endl;

  return 0;

}