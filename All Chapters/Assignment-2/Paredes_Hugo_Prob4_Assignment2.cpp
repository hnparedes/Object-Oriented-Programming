#include <iostream>

using namespace std;
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time() to seed rand()

// Function to roll dice (1-6)
int rollDie() 
{

    return rand() % 6 + 1;

}

int main()
{

    // Problem 4
    srand(time(0)); // Seed random number generator with current time

    int die1, die2, sum, point;

    // First roll
    die1 = rollDie();
    die2 = rollDie();
    sum = die1 + die2;

    cout << "You rolled " << die1 << " + " << die2 << " = " << sum << endl;

    // Checks if the player wins or loses on the first roll
    if (sum == 7 || sum == 11) 
    {

        cout << "You win" << endl;

    } 
    else if (sum == 2 || sum == 3 || sum == 12) 
    {

        cout << "You lose" << endl;

    } 
    else 
    {

        // If the point establishes (4, 5, 6, 8, 9, 10), it continues the game
        point = sum;
        cout << "Point is " << point << endl;

        // Rolls again to see if the player either rolls the point again (win) or rolls a 7 (lose)
        do {
            die1 = rollDie();
            die2 = rollDie();
            sum = die1 + die2;
            cout << "You rolled " << die1 << " + " << die2 << " = " << sum << endl;

            if (sum == point) 
            {

                cout << "You win" << endl;
                break;

            } 
            else if (sum == 7)
            {

                cout << "You lose" << endl;
                break;

            }

        } while (true);

    }

    return 0;

}

