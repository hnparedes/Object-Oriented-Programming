// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main() 
{
    // Character Data Type
    // '0' to '9'  48 to 57
    // 'A' to 'Z'  65 to 90
    // 'a' to 'z'  97 to 122

    // Special Characters and Casting
    // char c = 65.25
    // cout << c;

    // int i = ''A'
    // cout << i;

    int i = '2' + '3';
    cout << "i is " << i << endl;

    // The string Type
    // string message = "Programming is fun";
    // length()
    // size()
    // at(index)

//     string message = "ABCD";
//     cout << message.length() << endl;
//     cout << message.at(0) << endl;
//     string s = "Bottom";
//     cout << s.length() << endl;
//     cout << s.at(1) << endl;

    // Concatenating Strings
//     string s1 = "ABCD";
//     string s2 = "EFGH";
//     string s3 = s1 + s2;
//     cout << s3 << endl;
//     string s4 = "ABC";
//     s4 += 'D';
//     cout << s4 << endl;

    // Comparing Strings
//     string s1 = "ABC";
//     string s2 = "ABE";
//     cout << (s1 == s2) << endl;
//     cout << (s1 != s2) << endl;
//     cout << (s1 > s2) << endl;
//     cout << (s1 >= s2) << endl;
//     cout << (s1 < s2) << endl;
//     cout << (s1 <= s2) << endl;

    // Reading Strings
    // getline(cin, s, delimitCharacter)

    // string city;
    // cout << "Enter a city: ";
    // getline(cin, city, '\n');
    // cout << "You entered " << city << endl;

    // setprecision(n) Manipulator
    // double number = 12.345
    // cout << setprecision(3) << number << " "
         // << setprecision(4) << number << " "
         // << setprecision(5) << number << " "
         // << setprecision(6) << number << endl;

    // fixed Manipulator
    // cout << 232123434.357 << endl;
    // cout << fixed << 232123434.357 << endl;

    // double monthlyPaymet = 345.4567;
    // double totalPayment = 78676.887234;
    // cout << fixed << setprecision(2)
         // << monthlyPayment << endl
         // << totalPayment << endl;

    // setw(width) Manipulator
    // cout << setw(8) << "C++" << setw(6) << 101 << endl;
    // cout << setw(8) << "Java" << setw(6) << 101 << endl;
    // cout << setw(8) << "HTML" << setw(6) << 101 << endl;

    // Left and Right Manipulators
    // cout << right;
    // cout << setw(8) << 1.23 << endl;
    // cout << setw(8) << 351.34 << endl;

    // cout << left;
    // cout << setw(8) << 1.23 << endl;
    // cout << setw(8) << 351.34 << endl;


    // Examples
    string s1 = "ABCE";
    string s2 = "ABE";

    if(s2 > s1)
        cout << "you are right!" << endl;

    string s5;

    cout << "Where are you from: ";
    getline(cin,s5);
    // cin >> s5;

    cout << s5 << endl;

    return 0;

}
