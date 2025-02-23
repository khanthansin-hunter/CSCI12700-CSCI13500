#include <fstream>
#include <iostream>
#include <climits>
#include <cstdlib>
using namespace std;

int main()
{
    ifstream fin("Current_reservoir_levels.tsv");
    if (fin.fail())
    {
        cerr << "File cannot be opened" << endl;
        exit(1);
    }


    
    fin.close();
}