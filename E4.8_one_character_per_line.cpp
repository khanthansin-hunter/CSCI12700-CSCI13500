#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input_characters;
    cout << "Enter a word: ";
    getline(cin, input_characters);
    int index_count = 0;
    while (index_count < input_characters.length())
    {
        cout << input_characters[index_count] << endl;
        index_count++;
    }
    return 0;
}