#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a number" << endl;   // << is insertion for cout
                                        // >> is extraction for cin
    int number;
    int i = 0;
    cin >> number;

    if (number > i)
    {
        for (i = 0; i < number; i++)
        {
            cout << "*";
        }
    }
    else
    {
        cout << "Wrong number" << endl;
    }
    return 0;
}
