#include <iostream>
#include <string>
using namespace std;

int main()
{
    int user_input;
    cout << "Enter an integer: ";
    cin >> user_input;
    string digits_output = to_string(user_input);
    cout << digits_output.length();
}