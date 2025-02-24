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
    ifstream fin("Current_Reservoir_Levels.tsv");   //read file
    if (fin.fail()) //cannot read file condition
    {
        cerr << "File cannot be opened" << endl;    //display error message
        exit(1);    //exit program
    }

    string headerline;  //declare variable for header
    getline(fin,headerline);    //read header to skip

    string date;    //declare variable to assign to column in file
    double eastSt;  //declare variable to assign to column in file
    string user_input;  //declare variable to store user input

    cout << "Enter a date in (MM/DD/YYYY) format" << endl;  //ask for user input
    cin >> user_input;   //getline function to read whole line from cin user input and store in variable

    while (fin >> date >> eastSt)   //input first two tabs to two variables
    {
        fin.ignore(INT_MAX, '\n');  //after assigning two tabs with variables, skip everything until next line
        if (user_input == date)
        {
            cout << eastSt;
        }
    }
    fin.close();
}
/*
    Enter date: 05/20/2018
    East basin storage: 80.96 billion gallons
    */