#include <iostream>

using namespace std;
int main() 
{

    // Declares an integer variable 'number' to store the user's input
    int number;

    // Prompts the user to enter an integer between 0 and 1,000,000
    cout << "Enter an integer between 0 and 1000000: ";
    cin >> number;  // Reads the input value and stores it in 'number'

    if (number <= 10 && number >= 0)
    {

        cout << "The sum of the digits into one digit is 0" << endl;

    }

    // Checks if the input number is within the valid range (0 to 1,000,000)
    else if (number >= 0 && number <= 1000000) 
    {

        // Repeats the digit summing process as long as 'number' has more than one digit (i.e., is 10 or greater)
        while (number >= 10) 
        {

            // Declares a temporary variable 'sum' to hold the sum of the digits
            int sum = 0;

            // Loops through each digit of the current 'number' and adds it to 'sum'
            while (number > 0) 
            {

                // Adds the last digit of 'number' to 'sum'
                sum += number % 10;
                // Removes the last digit from 'number' (integer division by 10)
                number /= 10;

            }

            // After summing the digits, assigns the result to 'number' for the next iteration
            number = sum;

        }

        // Outputs the final single-digit result after reducing the number
        cout << "The sum of the digits into one digit is " << number << endl;

    } 
    else
    {

        // If the input number is not in the valid range, prints an error message
        cout << "Wrong input" << endl;

    }

    return 0;  // Returns 0 to indicate successful execution
    
}
