/*
Name:   Khant Than Sin @Leo
Email:  khantthan.sin06@myhunter.cuny.edu

The code starts with basic setup by using iostream, namespace std, and int main() for main function of the program.
first step is displaying a message.
second step is declaring 3 integer variables.
third step is receiving those variables.
fourth step is the conditional statement comparing 3 variables with relational operators and displaying the smaller number.
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter two numbers: \n";
    int num1, num2, num3;
    cin >> num1;
    cin >> num2;
    cin >> num3;
    if (num1 < num2 & num1 < num3)
    {
        cout << "The smaller of the three is " << num1;
    }
    else if (num2 < num1 & num2 < num3)
    {
        cout << "The smaller of the three is " << num2;
    }
    else if (num3 < num1 & num3 < num2)
    {    
        cout << "The smaller of the three is " << num3;
    }
    else
        return 0;
}