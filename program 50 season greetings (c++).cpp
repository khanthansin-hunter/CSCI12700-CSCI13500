//Name:     Khant Than Sin
//Email:    khantthan.sin06@myhunter.cuny.edu
//Date:     December 18, 2024

#include <iostream>
using namespace std;

int main()
{
    int i;
    cout<<"Enter the number of month in a year"<<endl;
    cin>>i;
    if (i<3 or i>11)      //12 to 2
    {
        cout<<"Happy Winter\n";
    }
    else if (i>=3 and i<7)          //3 to 6
    {
        cout<<"Happy Spring\n";
    }
    else if (i>=7 and i<9)          //7 to 8
    {
        cout<<"Happy Summer\n";
    }
    else if (i>=9 and i<=11)        //9 to 11
    {
        cout<<"Happy Fall\n";
    }
    return 0;
}
