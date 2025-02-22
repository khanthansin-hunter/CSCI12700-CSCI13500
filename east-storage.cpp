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
    double eastEl;
    double westSt;
    double westEl;

    while (fin >> date >> eastSt >> eastEl >> westSt >> westEl)
    {
        fin.ignore(INT_MAX, '\n');
        string user_input;
        cout << "Enter a date in (MM/DD/YYYY) format" << endl;
        getline(cin, user_input);
        cout << user_input;
        if (user_input == date)
        {
            cout << user_input << " " << eastSt;
        }
    }
    fin.close();
}