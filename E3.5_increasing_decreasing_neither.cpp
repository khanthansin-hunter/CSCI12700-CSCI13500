/*
Name:       Khant Than Sin
Email:      khantthan.sin06@myhunter.cuny.edu
Course:     CSCI13500
Instructor: Tong Yi
Semester:   Spring 2025
Assignment: E3.5
*/

#include <iostream>
using namespace std;

int main()
{
    int input_one, input_two, input_three;
    cout << "Enter first integer: ";
    cin >> input_one;
    cout << "Enter second integer: ";
    cin >> input_two;
    cout << "Enter third integer: ";
    cin >> input_three;

    if (input_one > input_two && input_two > input_three)
        cout << "DECREASING";
    else if (input_one < input_two && input_two < input_three)
        cout << "INCREASING";
    else
        cout << "NEITHER";
}