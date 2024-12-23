#include <iostream>
#include <string>     // Includes the string library to work with the string data type

using namespace std;

int main() 
{

    // Declares a string variable to store the user's input
    string sentence;

    // Prompts the user to enter a string
    cout << "Enter a string: ";
    getline(cin, sentence);  // Reads the entire line of input and stores it in 'sentence'

    // Loop iterates through every second character of the string, starting from index 1
    // 'i = 1' starts at the second character, 'i < sentence.length() - 1' ensures we stay within the string bounds, 
    // and 'i += 2' increments by 2 to skip every other character
    for (size_t i = 1; i < (sentence.length() - 1); i += 2) 
    {

        cout << sentence[i];  // Outputs every second character starting from index 1

    }

    cout << endl;  // Outputs a newline after printing the characters

    return 0;  // Returns 0 to indicate that the program finished successfully

}