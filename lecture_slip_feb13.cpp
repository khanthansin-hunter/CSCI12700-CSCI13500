#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int CAPACITY = 10;
    int arr[CAPACITY];
    int count = 0;
    int num;
    while (count < CAPACITY && cin >> num)
    {
        arr[count] = num;
        count += 1;
    }
    for (int i = CAPACITY-1; i >= 0; i--)   //print in reverse
    {
        cout << arr[i] << endl;
    }

    ifstream name("lecture_slip_feb13.txt");
    
}