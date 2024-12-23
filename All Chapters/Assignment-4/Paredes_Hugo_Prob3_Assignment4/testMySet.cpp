// TestMySet.cpp
#include <iostream>
#include "MySet.h"
#include "MySet.cpp"

int main()
{

    // Step 1: Create a MySet object with a range of numbers [0; 20]
    MySet s1(20);

    // Step 2: Insert numbers 13, 7, 20, 21 (21 should produce an error message)
    s1.insertElement(13);
    s1.insertElement(7);
    s1.insertElement(20);
    s1.insertElement(21); // Out of range, should show warning

    // Step 3: Call printSet function
    s1.printSet(); // Expected output: { 7, 13, 20 }

    // Step 4: Delete numbers 22 (out of range) and 13
    s1.deleteElement(22); // Out of range, should show warning
    s1.deleteElement(13);

    // Step 5: Call printSet function again
    s1.printSet(); // Expected output: { 7, 20 }

    // Step 6: Create a second MySet object with a range of numbers [0; 100]
    MySet s2(100);

    // Step 7: Call printSet function for the second object
    s2.printSet(); // Expected output: { --- }

    // Step 8: Create a third MySet object using the copy constructor with s1
    MySet s3 = s1;

    // Step 9: Check if s3 is equal to s1
    std::cout << "s3.isEqualTo(s1) = " << s3.isEqualTo(s1) << std::endl; // Expected output: 1 (true)

    return 0;

}