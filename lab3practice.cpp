#include <iostream>
using namespace std;

int main()
{
    const int arr_capacity = 10;
    int arr[arr_capacity];

    for (int i=0; i < arr_capacity; i++)    //2 expressions are wrong
    {
        arr[i] = (i+1)*2;   //equation is wrong
        cout << arr[i] << " ";
    }
}