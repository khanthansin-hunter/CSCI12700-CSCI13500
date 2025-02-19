/*
Name:   Khant Than Sin @Leo
Email:  khantthan.sin06@myhunter.cuny.edu

This program first checks the leap year condition.
Then checks february for change of days.
Then checks 30 days or 31 days.
*/

#include <iostream>
using namespace std;

int main()
{
    int year, month;
    cout << "Enter a year: ";
    cin >> year;
    cout << "Enter a month: ";
    cin >> month;

    if ((year % 4 == 0) && (year % 100 != 0 || year % 400 == 0))    //leap year
    {
        if (month == 2)                                             //29 days
        {
            cout << "29 days";
        }
        else if (month % 2 == 0)
        {
            if (month < 7)                                          //30 days
            {
                cout << "30 days";
            }
            else if (month > 7)                                     //31 days
            {
                cout << "31 days";
            }
        }
        else if (month % 2 != 0)
        {
            if (month < 8)                                          //31 days
            {
                cout << "31 days";
            }
            else if (month > 8)                                     //30 days
            {
                cout << "30 days";
            }
        }
    }
    else                                                            //common year
    {
        if (month == 2)                                             //28 days
        {
            cout << "28 days";
        }
        else if (month % 2 == 0)
        {
            if (month < 7)                                          //30 days
            {
                cout << "30 days";
            }
            else if (month > 7)                                     //31 days
            {
                cout << "31 days";
            }
        }
        else if (month % 2 != 0)
        {
            if (month < 8)                                          //31 days
            {
                cout << "31 days";
            }
            else if (month > 8)                                     //30 days
            {
                cout << "30 days";
            }
        }
    }  
}