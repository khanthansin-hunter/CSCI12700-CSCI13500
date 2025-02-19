/*
Name:   Khant Than Sin
Email:  khantthan.sin06@myhunter.cuny.edu

Couse:  CSCI-13500
Instructor: Tong Yi
Assignment: Lab 2B

asks the user to input two integers L and U (representing the lower and upper limits of the interval)
print out all integers in the range L ≤ i < U separated by spaces
include the lower limit, but exclude the upper limit
*/

#include <iostream>
using namespace std;

int main()
{
    int L, U;
    L = 0;
    U = 0;
    cout << "Please enter L: " << endl;
    cin >> L;
    cout << "Please enter U: " << endl;
    cin >> U;
    while (L < U)
    {
        cout << L << endl;
        L += 1;
        
        if (L == U)
        {
            return 0;
        }
    }
}