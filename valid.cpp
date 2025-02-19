/*
Name:   Khant Than Sin
Email:  khantthan.sin06@myhunter.cuny.edu

Course: CSCI-13500
Instructor: Tong Yi
Assignment: Lab 2A

asks the user to input an integer in the range 0 < n < 100
If the number is out of range, the program should keep asking to re-enter until a valid number is input
After a valid value is obtained, print this number n squared
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int input_value, output_value;
    input_value = 0;
    output_value = 0;
    cout << "Please enter an integer: ";
    cin >> input_value;
    
    while (input_value <= 0 || input_value >= 100)      // || instead of && because there is only one input and the value will meet only one condition instead of both
    {
        cout << "Please re-enter: ";
        cin >> input_value;
    }

    cout << "Number squared is " << pow(input_value, 2) << endl;
    
}