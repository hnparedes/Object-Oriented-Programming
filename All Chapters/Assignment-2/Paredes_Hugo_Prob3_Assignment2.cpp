#include <iostream>

using namespace std;

// Recursive function to count even digits in an integer
int evenCount(int value) 
{

    // Base case: when value is 0, it checks if the digit is even
    if (value == 0) 
    {

        return 0;

    }

    // Recursive step: checks the last digit of the value
    int lastDigit = value % 10;
    if (lastDigit % 2 == 0) 
    {

        // If the last digit is even, it adds 1 to the recursive call
        return 1 + evenCount(value / 10);

    } 
    else 
    {

        // If the last digit is odd, it continues the recursive call
        return evenCount(value / 10);

    }
}

int main()
{

    // Problem 3
    int number;
    
    // Prompts user to enter an integer
    cout << "Enter the number ";
    cin >> number;

    // Special case for zero: count it as 1 even digit
    if (number == 0) 
    {

        cout << "The number of even digits is 1" << endl;
        
    }

    // Makes the number positive for counting
    number = abs(number);

    // Calls the recursive function and displays the result
    int result = evenCount(number);
    cout << "The number of even digits is " << result << endl;

    return 0;

}