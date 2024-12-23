#include <iostream>

using namespace std;
#include <string>
#include <cctype>  // For isalpha() and tolower()

// Function to count the occurrences of each letter in the string
void count(const string &s) 
{

    // Array to store the count of each letter (a-z)
    int letterCount[26] = {0};

    // Traverses the string and updates the count
    for (char ch : s) 
    {

        if (isalpha(ch)) 
        { // Only counts alphabetic characters

            ch = tolower(ch); // Converts to lowercase to make it case-insensitive
            letterCount[ch - 'a']++; // Increments the corresponding letter count

        }

    }

    // Displays the non-zero counts
    for (int i = 0; i < 26; i++) 
    {

        if (letterCount[i] > 0) 
        {

            char currentLetter = 'a' + i;  // Directly computes the letter
            cout << currentLetter << ": " << letterCount[i] << " times" << endl;

        }

    }

}

int main()
{

    // Problem 5
    
    string input;

    // Prompts the user to enter a string
    cout << "Enter a string: ";
    getline(cin, input); // Gets the entire input line

    // Calls the count function to count letter occurrences
    count(input);

    return 0;

}
