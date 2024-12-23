#include <string>
#include <iostream>

using namespace std;

class Attendance {
public:

    // Method to check the attendance rules
    bool checkAttendance() {

        return !isAbsent() && !isLate(); // Passes if both conditions are met

    }

    // Constructor to initialize the attendance record
    Attendance(const string& atd) {

        attendance = atd;  // Assign the parameter value to the attendance data member

    }

private:
    string attendance; // Private data member to store the attendance record

    // Method to check if student was absent 2 or more days
    bool isAbsent() {

        int absentCount = 0;
        for (char c: attendance) 
        {

            if (c == 'A') 
            {

                absentCount++;

            }

        }

        return absentCount >= 2; // True if 2 or more absences

    }

    // Method to check if student was late for 3 or more consecutive days
    bool isLate() {

        int lateCount = 0;
        for(size_t i = 0; i < attendance.length(); i++) 
        {

            if(attendance[i] == 'L')
            {

                lateCount++; // Increments counter if 'L' is found
                if(lateCount == 3)
                {

                    return true; // Finds 3 'L's in the string

                }

            }
            else
            {

                lateCount = 0; // Resets count if the string doesn't have 'L's

            }

        }

        return false; // No 3 'L's in the string
 
    }

};

int main(void) {

    Attendance atd1("PPALLP"); // Test case 1: should pass
    Attendance atd2("PPALLL"); // Test case 2: should fail

    // Check attendance for both students and print the result
    (atd1.checkAttendance()) ? cout << "PASSED" : cout << "FAILED";
    cout << endl;
    (atd2.checkAttendance()) ? cout << "PASSED" : cout << "FAILED";
    cout << endl;

    return 0;

}
