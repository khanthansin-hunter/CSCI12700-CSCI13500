#include <iostream>
#include <fstream>
#include <climits>
#include <cstdlib>
using namespace std;

int main()
{
    ifstream fin("Current_Reservoir_Levels.tsv");

    if (fin.fail())
    {
        cerr << "File cannot be opened";
        exit(1);
    }

    //if file cannot open

    string header;
    getline(fin, header);

    //skipping header

    const int SIZE = 1000;
    string date[SIZE], first_user_date, second_user_date;
    double eastSt[SIZE], eastEl[SIZE], westSt[SIZE], westEl[SIZE];
    int read_data;

    //declaring variable & array

    cout << "Enter earlier date: ";
    cin >> first_user_date;
    cout << "Enter later date: ";
    cin >> second_user_date;

    //user interaction

    while (fin >> date[read_data] >> eastSt[read_data] >> eastEl[read_data] >> westSt[read_data] >> westEl[read_data])
    {
        fin.ignore(INT_MAX,'\n');
        read_data ++;
    }
    fin.close();

    //reading file into array

    for (int i = SIZE; i >= 0; i--)
    {
        if (date[i] >= first_user_date && date[i] <= second_user_date)
        {
            cout << date[i] << " " << westEl[i] << endl;
        }
    }
}
/*
Enter earlier date: 05/29/2018
Enter later date: 06/02/2018
 
06/02/2018  590.32 ft
06/01/2018  590.26 ft
05/31/2018  590.24 ft
05/30/2018  590.23 ft
05/29/2018  590.22 ft
*/