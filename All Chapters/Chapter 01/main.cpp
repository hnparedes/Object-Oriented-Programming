#include <iostream>
using namespace std;

int main() 
{ 

  // Syntax Error
  // cout << "Programming is fun << endl;

  // Runtime Error
  // int i = 4;
  // int j = 0;
  // cout << i / j << endl;

  // Logic Error
  // cout << "Celsius 35 is Fahrenheit degree ";
  // cout << (9 / 5) * 35 + 32 << endl;

  // Practice 1

  // A Simple C++ Program
  // A.
  // cout << "First Name: Hugo" << endl; 
  // cout << "Last Name: Paredes" << endl;
  // cout << "I am supposed to spend " << (16.0 * 2.5 * 360) + (4 * 360) + (2.5 * 16 * 360) << " seconds studying C++ Programming" << endl;

  // B.
  double distance;
  double mpg;
  double ppg;

  cout << "Enter the driving distance: " << endl;
  cin >> distance;
  cout << "Enter miles per gallon: " << endl;
  cin >> mpg;
  cout << "Enter price per gallon: " << endl;
  cin >> ppg;
  cout << "The cost of driving is ";
  double cost = (distance / mpg) * ppg;
  cout << cost << endl;
  
  return 0;
  
}