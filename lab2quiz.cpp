#include <iostream>
using namespace std;

int main()
{
    int user_input;
    string output;
    cout << "Enter a positive integer";
    cin >> user_input;
    if (user_input <= 0)
        cout << "This is not a positive integer";
    else
        for (int i=0; i < user_input; i++)
            output = output + to_string(i);
            cout << "I like C++" << endl;
    cout << output;
}