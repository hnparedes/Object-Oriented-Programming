#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;
int main() 
{

    // Loops
    // int count = 0;
    // while (count < 100)
    // {
        // cout << "Welcome to C++!\n";
        // count++;
    // }

    // While Loop
    // int sum = 0; i = 1;
    // while (i < 10)
    // {

        // sum = sum + i;
        // i++;

    // }

    // cout << "sum is " << sum;

    // Controlling a Loop with User Confirmation
    // char continueLoop = 'Y';
    // while (continueLoop == 'Y')
    // {

        // Executes the loop once

        // Prompts the user for confirmation
        // cout << "Enter Y to continue and N to quit: ";
        // cin >> continueLoop;

    // }

    // Controlling a Loop with a Sentinel Value
    // cout << "Enter an integer (the input ends if it is 0): ";
    // int data;
    // cin >> data;
    // int sum = 0;

    // Keep reading data until the input is 0
    // while (data != 0)
    // {

    
    //     sum += data;

    //     // Read the next data
    //     cout << "Enter an integer (the input ends if it is 0): ";
    //     cin >> data;

    // }

    // cout << "The sum is " << sum << endl;

    // The Do-While Loop
    // Keep reading data until the input is 0
    cout << "Enter an integer (the input ends " << "if it is 0): ";
    int data;
    cin >> data;
    int sum = 0;

    do
    {

        sum += data;

        // Read the next data
        cout << "Enter an integer (the input ends " << "if it is 0): ";
        cin >> data;

    } while (data != 0);

    cout << "The sum is " << sum << endl;

    // The For Loop
    // for (int i = 0; i < 10000; i++)

    // Nested Loops
    // for (int i = 0; i < 10000; i++)
    //   for (int j = 0; j < 10000; j++)
    //     for (int k = 0;  < 10000; k++)

    // continue; and  break;
    // continue breaks out of an iteration
    // break breaks out of a loop

    // Practice 2

    // A.
    double feet_1 = 3.280;
    cout << left << "Meters" << right << setw(8) << "Feet" << endl;
    for(int meter = 1; meter < 16; meter++)
    {

        double feet = feet_1 * meter;
        cout << left << setw(10) << meter << feet << endl;
        meter++;

    }

    // B.
    int user_choice;
    int cpu_choice = rand() % 3;

    cout << "scissor (0), rock (1), paper (2): ";
    cin >> user_choice;
    string choices[] = {"scissor", "rock", "paper"};
    cout << "Computer is " << choices[cpu_choice] << ". You are " << choices[user_choice] << ". ";

    if (user_choice == cpu_choice) 
    {

        while(user_choice == cpu_choice)
        {

            cout << "It's a draw" << endl;
            cout << "scissor (0), rock (1), paper (2): ";
            cin >> user_choice;
            cout << "Computer is " << choices[cpu_choice] << ". You are " << choices[user_choice] << ". ";

        }

        if((user_choice == 0 && cpu_choice == 2) || (user_choice == 2 && cpu_choice == 1) || (user_choice == 1 && cpu_choice == 0))
        {

            cout << "You win" << endl;

        }
        else
        {

            cout << "You lost" << endl;

        }

    }
    else if ((user_choice == 0 && cpu_choice == 2) || (user_choice == 2 && cpu_choice == 1) || (user_choice == 1 && cpu_choice == 0))
    {

        cout << "You win" << endl;

    }
    else
    {

        cout << "You lost" << endl;

    }

    return 0;
    
}
