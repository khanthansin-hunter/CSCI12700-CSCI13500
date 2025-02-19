/*
Name:   Khant Than Sin
Email:  khantthan.sin06@myhunter.cuny.edu

Couse:  CSCI-13500
Instructor: Tong Yi
Assignment: Lab 2C

creates an array of 10 integers
provides the user with an interface to edit any of its elements
Create an array myData of 10 integers.
Fill all its cells with value 1 (using a for loop).
Print all elements of the array on the screen.
Ask the user to input the cell index i, and its new value v.
If the index i is within the array range (0 ≤ i < 10), update the asked cell, myData[i] = v, and print all elements of the array on the screen. 
If index i is out of range, the program exits.
*/

#include <iostream>
using namespace std;

int main()
{
    const int array_size = 10;                                                  //declare a constant
    int ten_array[array_size];                                                  //declare an array with the constant value
    for (int array_index = 0; array_index < array_size; array_index += 1)       //declare a value and loop the value to meet conditional expression with increment of 1
    //initial expression / conditional expression / update expression
    {
        ten_array[array_index] = 1;                                             //assign the array index with value
                                                                                //printing the value of the given index of the array
        cout << ten_array[array_index] << " ";
    }
    cout << endl;
    int i, v;
    cout << "Input index: ";
    cin >> i;
    if (i < 0 || i >= array_size)                                               //check if user input is within index range and exit program if not
    {
        cout << "Index out of range";
        return 0;
    }
    cout << "Input value: ";
    cin >> v;
    while (0 <= i < array_size)
    {
        ten_array[i] = v;                                                       //assigning user input value to user input index
        for (int i = 0; i < array_size; i += 1)
        {
            cout << ten_array[i] << " ";
        }
        cout << endl;
        cout << "Input index: ";
        cin >> i;
        if (i < 0 || i >= array_size)
        {
            cout << "Index out of range";
            return 0;
        }
        cout << "Input value: ";
        cin >> v;
    }
}