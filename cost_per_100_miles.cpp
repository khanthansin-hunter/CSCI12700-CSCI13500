/*
Name:   Khant Than Sin @Leo
Email:  khantthan.sin06@myhunter.cuny.edu

cost per 100 miles
how far the car will go with given gas
*/

#include <iostream>
using namespace std;

int main()
{
    double gallons, milespergallon, price;
    double costper100miles, milesforgallon;
    cout << "Enter number of gallons of gas in the tank" << endl;
    cin >> gallons;
    cout << "Enter fuel efficiency in miles per gallon" << endl;
    cin >> milespergallon;
    cout << "Enter price of gas per gallon" << endl;
    cin >> price;
    milesforgallon = milespergallon * gallons;
    costper100miles = price * (100 / milespergallon);
    cout << milesforgallon << endl;
    cout << costper100miles << endl;
}