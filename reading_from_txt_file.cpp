#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream fin("lecture_slip_feb13.txt");
    if (fin.fail())
    {
        cerr << "Error" << endl;
        exit(1);
    }
    string sentence;
    while (getline(fin, sentence))
    {
        cout << sentence << endl;
    }
    fin.close();
}