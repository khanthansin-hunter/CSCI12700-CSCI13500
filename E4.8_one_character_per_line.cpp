/*
Name:       Khant Than Sin @Leo
Email:      khantthan.sin06@myhunter.cuny.edu
course:     csci13500
instructor: Tong Yi

This program takes input from user and prints the input in one character per line.
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input_characters;
    cout << "Enter a word: ";
    getline(cin,input_characters);
    int index_count = 0;
    while (index_count < input_characters.length())
    {
        cout << input_characters[index_count] << endl;
        index_count ++;
    }
    return 0;
}