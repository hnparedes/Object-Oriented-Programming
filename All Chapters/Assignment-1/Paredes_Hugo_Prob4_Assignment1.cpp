#include <iostream>
#include <cmath>      // Includes the cmath library for mathematical functions like pow() and tan()
#include <iomanip>    // Includes the iomanip library for formatting output (e.g., setprecision())

using namespace std;

int main() 
{

    // Declares two double variables: 'side' to store the input, and 'area' to store the calculated area of the hexagon
    double side, area;

    // Prompts the user to enter the length of a side of the hexagon
    cout << "Enter the side: ";
    cin >> side;  // Takes the input value from the user and stores it in 'side'

    // Calculates the area of the hexagon using the formula: (6 * side^2) / (4 * tan(π / 6))
    // 'pow(side, 2)' computes the square of the side, and 'tan(M_PI / 6)' computes the tangent of 30 degrees
    area = (6 * pow(side, 2)) / (4 * tan(M_PI / 6));

    // Sets the output to display floating-point numbers with a fixed precision of 2 decimal places
    cout << fixed << setprecision(2);

    // Displays the calculated area of the hexagon
    cout << "The area of the hexagon is " << area << endl;

    return 0;  // Returns 0 to indicate that the program finished successfully

}