/*
Name:       Khant Than Sin
Email:      khantthan.sin06@myhunter.cuny.edu
Course:     CSCI13500
Instructor: Tong Yi
Semester:   Spring 2025
Assignment: E3.1
*/

#include <iostream>
using namespace std;

int main()
{
    int user_input;
    cout << "Enter an integer";
    cin >> user_input;
    if (user_input > 0)
        cout << "Positive" << endl;
    else if (user_input < 0)
        cout << "Negative" << endl;
    else
        cout << "Zero" << endl;
}