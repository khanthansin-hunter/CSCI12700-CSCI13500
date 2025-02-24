/*
Name:       Khant Than Sin
Email:      khantthan.sin06@myhunter.cuny.edu
Course:     CSCI13500
Instructor: Tong Yi
Semester:   Spring 2025

Algorithm:  input 2 date from user and output higher elevation between east and west
Assignment: Lab3C
*/

#include <fstream>
#include <iostream>
#include <climits>
#include <cstdlib>
using namespace std;

int main()
{
    ifstream fin("Current_Reservoir_Levels.tsv");

    if (fin.fail())
    {
        cerr << "File cannot be opened" << endl;
        exit(1);
    }

    string date, first_user_date, second_user_date;
    double eastSt, eastEl, westSt, westEl;

    string headline;
    getline(fin, headline);

    cout << "Enter starting date: ";
    cin >> first_user_date;
    cout << "Enter ending date: ";
    cin >> second_user_date;

    while (fin >> date >> eastSt >> eastEl >> westSt >> westEl)
    {
        fin.ignore(INT_MAX, '\n');
        if (date >= first_user_date && date <= second_user_date)
            {
                cout << date << " ";
                if (eastEl > westEl)
                    cout << "East" << endl;
                if (westEl > eastEl)
                    cout << "West" << endl;
                if (eastEl == westEl)
                    cout << "Equal" << endl;
            }
    }
    fin.close();
}