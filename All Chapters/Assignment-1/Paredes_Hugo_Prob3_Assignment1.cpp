#include <iostream>
#include <cmath>     // Includes the cmath library for math functions like sqrt()

using namespace std;

int main() 
{

    int number;  // Declares an integer variable 'number' to store user input

    // Asks the user to input an integer number
    cout << "Enter an integer number to see if the given number is divisible by 4 or not: ";
    cin >> number;  // Reads the input value from the user and stores it in 'number'

    // Checks if the input number is negative
    if (number < 0) 
    {

        // If the number is negative, it displays an error message
        cout << "The program does not accept negative numbers" << endl;

    }
    // Checks if the number is in the range from 0 to 100 (inclusive)
    else if (number >= 0 && number <= 100) 
    {

        // Checks if the number is divisible by 4 without a remainder
        if (number % 4 == 0) 
        {

            // If divisible by 4, outputs a message with the quotient and remainder
            cout << "The given number (" << number << ") is divisible by 4" << endl;
            cout << "Quotient: " << number / 4 << " and Remainder: " << number % 4 << endl;

        } 
        else 
        {

            // If not divisible by 4, outputs a message showing the quotient and remainder
            cout << "The given number (" << number << ") is not divisible by 4" << endl;
            cout << "Quotient: " << number / 4 << " and Remainder: " << number % 4 << endl;

        }
    } 
    // If the number is greater than 100, calculates and displays its square root
    else 
    {

        cout << "The entered number is greater than 100 and the square root of the number is " << sqrt(number) << endl;

    }

    return 0;  // Returns 0 to indicate that the program has finished successfully

}