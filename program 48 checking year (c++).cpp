//Name:     Khant Than Sin
//Email:    khantthan.sin06@myhunter.cuny.edu
//Date:     December 18, 2024

#include <iostream>
using namespace std;

int main() {
    int year;
    bool valid = false;

    while (!valid) {
        cout << "Enter year: ";
        cin >> year;

        // Check if the user entered a year that is 2018 or earlier
        if (year <= 2018) {
            valid = true; // Valid input found
        } else {
            cout << "Year must be 2018 or earlier" << endl;
        }
    }

    cout << "You entered:  " << year << endl;
    return 0;
}