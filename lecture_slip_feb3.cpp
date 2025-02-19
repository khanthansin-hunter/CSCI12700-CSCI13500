#include <iostream>
using namespace std;

int main()
{
    int number = 1;
    while (number >= 1 && number <= 100)
    {
        number += 1;
        if (number % 3 == 0)
        {
            cout << number << endl;
        }
    }
    /*
    for (number = 1; number <= 100; number += 1)
    {
        if (number % 3 == 0)
        {
            cout << number << endl;
        }
    }
    */
}