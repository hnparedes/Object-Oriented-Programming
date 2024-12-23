#include <iostream>

// Function to calculate the average of an int array
int average(const int* array, int size)
{

    int sum = 0;
    for(int i = 0; i < size; ++i)
    {

        sum += array[i];

    }

    return sum / size;

}

// Function to calculate the average of an double array
double average(const double* array, int size)
{

    double sum = 0.0;
    for(int i = 0; i < size; ++i)
    {

        sum += array[i];

    }

    return sum / size;

}

int main()
{

    const int size = 10;
    double doubleArray[size];

    // Prompting user to enter 10 double values
    std::cout << "Enter ten double values\n";
    for(int i = 0; i < size; ++i)
    {

        std::cin >> doubleArray[i];

    }

    // Calculating and displaying the average of the double array
    double avg = average(doubleArray, size);
    std::cout << "The average of the entered values is: " << avg << std::endl;

    return 0;

}