/*
Name:   Khant Than Sin @Leo
Email:  khantthan.sin06@myhunter.cuny.edu

The code starts with basic setup by using iostream, namespace std, and int main() for main function of the program.
first step is displaying a message.
second step is declaring 2 integer variables.
third step is receiving those variables.
fourth step is the conditional statement comparing 2 variables with relational operators and displaying the smaller number.
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter two numbers: \n";
    int num1, num2;
    cin >> num1;
    cin >> num2;
    if (num1 < num2)
    {
        cout << num1 << " is smaller";
    }
    else if (num2 < num1)
    {
        cout << num2 << " is smaller";
    }
    else
        return 0;
}