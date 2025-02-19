/*
Name:   Khant Than Sin
Email:  khantthan.sin06@myhunter.cuny.edu

Couse:  CSCI-13500
Instructor: Tong Yi
Assignment: Lab 2D

use an array of ints to compute and print all Fibonacci numbers from F(0) to F(59)
*/

#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 60;
    int fibonacci[SIZE];                                //long long integer type will fix the problem
    int given_range = 1;
    for (int i=0; i<=given_range; i+=1)
    {
        fibonacci[i] = i;
        cout << fibonacci[i] << endl;
    }
    for (int i=2; i<SIZE; i+=1)
    {
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
        cout << fibonacci[i] << endl;
    }
}