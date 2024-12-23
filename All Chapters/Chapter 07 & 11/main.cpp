# include <iostream>

using namespace std;

// void reverseArray(const int firstArr[], int secondArr[], int size)
// {

//     int f = size - 1;
//     int s = 0;

//     for(int i=0; i < size; i++)
//     {

//         secondArr[s] = firstArr[f];
//         f--;
//         s++;

//     }

// }

// void printArray(const int arr[], int size)
// {

//     for(int i=0; i < size; i++)
//     {

//         cout << arr[i] << " ";

//     }

//     cout << endl;

// }

// Practice 3

// string swapCase(const string &str)
// {

//     string newStr = str;
//     for(int i=0; i <= str.length() - 1; i++)
//     {

//         if(isalpha(str[i]))
//         {

//             if(islower(str[i]))
//             {

//                 newStr[i] = toupper(str[i]);

//             }
//             else
//             {

//                 newStr[i] = tolower(str[i]);

//             }

//         }

//     }

//     return newStr;

// }

// int getDigit(int n)
// {

//     n = abs(n);
//     if (n == 0)
//     {

//         return 1;

//     }

//     int count = 0;
//     while (n > 0)
//     {

//         n /= 10;
//         count++;

//     }

//     return count;

// }

double sumEven(double *even, int num)
{

    double sum = 0.0;

    for (int i = 1; i < num; i += 2)
    {

        sum += even[i];

    }

    return sum;

}

int main()
{

    // Declaring Arrays
    // double myList[10];

    // myList[0] = 5.6;
    // myList[1] = 4.5;
    // myList[2] = 3.3;
    // myList[3] = 13.2;
    // myList[4] = 4.0;
    // myList[5] = 34.33;
    // myList[6] = 34.0;
    // myList[7] = 45.45;
    // myList[8] = 99.993;
    // myList[9] = 111.23;

    // Array Initializers
    // double myList[4] = {1.9, 2.9, 3.4, 3.5};

    // Or

    // double myList[4];
    // myList[0] = 1.9;
    // myList[1] = 2.9;
    // myList[2] = 3.4;
    // myList[3] = 3.5;

    // Passing Arrays to Functions

    // void printArray(int list[], int arraySize); Function prototype

    // int numbers [5] = {1, 4, 3, 6, 8};
    // printArray(numbers, 5); Invoke the function

    // void printArray(int list[], int arraySize)
    // {

    //     for(int i = 0; i < arraySize; i++)
    //     {

    //         cout << list[i] << " ";

    //     }

    // }

    // void p(const int list[], int arraySize)
    // {

    //     Modify array accidentally
    //     list[0] = 100; Compile error!

    // }

    // int numbers[5] = {1, 4, 3, 6, 8};
    // p(numbers, 5);

    // Return the reversal of list
    // int[] reverse(const int list[], int size) Wrong

    // newList is the reversal of list
    // void reverse(const int list[], int newList[], int size) Right

    // Pointers
    // int x;
    // x = 10;
    // int *p;
    // p = &x;

    // 401 } p
    // 10 } x 

    // cout << p << endl; 401
    // cout << &x << endl; 401
    // cout << &p << endl; 405
    // cout << *p << endl; 10
    // *p = 20;
    // cout << x << endl; 20

    // Memory (RAM)
    // Each segment 1 byte
    // 1 byte = 8 bits
    // int variable = 4 bytes
    // char variable = 1 byte
    // int x;
    // x = 10;
    // char c

    // Using the typedef Keyword
    // typedef existingType newType;
    // typedef int integer;

    // int* p1, p2; Wrong
    // intpointer p1, p2; Correct

    // Using const with Pointers
    // double radius = 5;
    // double* const p = &radius;

    // const double* const pValue = &radius;

    // Arrays and Pointers
    // int list[6] = {11, 12, 13, 14, 15, 16};
    // cout << "The starting address of the array is " << list << endl;

    // Passing Pointer Arguments in a Function Call
    // void f(int* p1, int* &p2)

    // Returning a Pointer from Functions
    // int* reverse(int* list, int size)
    // {

    //     for(int i = 0, j = size - 1; i < j; i++, j--)
    //     {

    //         // Swap list with list[j]
    //         int temp = list[i];
    //         list[j] = list[i];
    //         list[i] = temp;

    //     }

    //     return list;

    // }


    // int first[5] = {1,2,3,4,5};
    // int second[5] = {1,2,3,4,5};
    // printArray(second, 5);
    // reverseArray(first, second, 5);
    // printArray(second, 5);


    // int x = 42;
    // int* pointer = &x;
    // cout << *pointer << endl;
    // cout << x << endl;


    // double num = 5;
    // double * numP = &num;
    // cout << * numP << endl;

    // int arr[] = {1,4,3,4,5,6};
    // cout << *arr << endl;
    // cout << *(arr + 1) << endl;
    // cout << *arr + 1 << endl;

    // Practice 3

    // A.

    // string sentence;
    // cout << "Enter a string: ";
    // getline(cin, sentence);
    // string new_sentence = swapCase(sentence);
    // cout << "The new string is: ";
    // cout << new_sentence << endl;

    // B.

    // int num;
    // cout << "Enter an integer: ";
    // cin >> num;

    // cout << "Number of digits is " << getDigit(num) << endl;

    // C.

    int num = 5;
    int* p = &num;

    cout << "The value of num is " << num << endl;
    cout << "The value of num is " << *p << endl;
    cout << "The address of num is " << &num << endl;
    cout << "The address of num is " << p << endl;
    cout << "The value of the pointer is " << p << endl;
    cout << "The address of the p pointer is " << &p << endl;

    // D.

    int size = 6;
    double list[size];

    cout << "Please enter six double numbers: ";
    for(int i = 0; i < size; i++)
    {

        cin >> list[i];

    }

    cout << "Sum of values at even locations: " << sumEven(list, size) << endl;

    return 0;

}