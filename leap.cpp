/*
Name:   Khant Than Sin @Leo
Email:  khantthan.sin06@myhunter.cuny.edu

The main function includes 4 steps
1. displaying a message
2. getting an input
3. creating an if condition
4. displaying a message according to the condition
*/

#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter a year: ";
    cin >> year;
    if (year % 4 != 0)
    {
        cout << "This is a common year";
    }
    else if (year % 100 != 0)
    {
        cout << "This is a leap year";
    }
    else if (year % 400 != 0)
    {
        cout << "This is a common year";
    }
    else
    {
        cout << "This is a leap year";
    }
    return 0;
}