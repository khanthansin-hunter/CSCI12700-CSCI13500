/*
Name:       Khant Than Sin
Email:      khantthan.sin06@myhunter.cuny.edu
Course:     CSCI13500
Instructor: Tong Yi
Semester:   Spring 2025

Algorithm:  reads first 2 columns and find max and min in eastSt column
Assignment: Lab3B
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

    string date;
    double eastSt;
    string read_string;
    double found_max = 0;
    double found_min = 100;

    getline(fin, read_string);

    while (fin >> date >> eastSt)
    {
        fin.ignore(INT_MAX, '\n');
        if (eastSt > found_max)
            found_max = eastSt;
        if (eastSt < found_min)
            found_min = eastSt;
    }
    cout << "minimum storage in East basin: " << found_min << " billion gallons" << endl;
    cout << "maximum storage in East basin: " << found_max << " billion gallons" << endl;
    fin.close();
}