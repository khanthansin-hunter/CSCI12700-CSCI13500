#include <iostream>
using namespace std;

int main()
{
    string original, target;
    cout << "Enter a string: ";
    cin >> original;
    cout << "Enter a target string: ";
    cin >> target;
    int count = 0;
    for (int i=0; i <= original.length(); i++)
        if (original.substr(i,target.length()) == target)   //substr(startindex, reading length)
            count ++;
    cout << "there are " << count << " occurrences of " << target << " in " << original;
}