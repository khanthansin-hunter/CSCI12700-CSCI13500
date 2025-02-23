/*
Name:       Khant Than Sin
Email:      khantthan.sin06@myhunter.cuny.edu
Course:     CSCI13500
Instructor: Tong Yi
Semester:   Spring 2025
*/

#include <fstream>
#include <cstdlib>
#include <climits>
#include <iostream>
using namespace std;

int main()
{
    ifstream fin("Current_reservoir_Levels.tsv");
    if (fin.fail())
    {
        cerr << "File cannot be opened" << endl;
        exit(1);
    }

    string headerline;
    getline(fin,headerline);

    string date;
    double eastSt;
    string user_input;

    cout << "Enter a date in (MM/DD/YYYY) format" << endl;
    getline(cin, user_input);

    while (fin >> date >> eastSt)
    {
        fin.ignore(INT_MAX, '\n');
        if (user_input == date)
        {
            cout << eastSt;
        }
        else
            cout << "Data unavailable";
            return 0;
    }
    fin.close();
    /*
    Enter date: 05/20/2018
    East basin storage: 80.96 billion gallons
    */
}