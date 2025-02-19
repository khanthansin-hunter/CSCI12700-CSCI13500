#include <iostream>
#include <string>
using namespace std;

int main()
{
    string question_text = "What is -1 + 5 / 3 ?", expected_answer = "0";
    string user_answer;
    string stringVariable;
    cout << question_text << endl;
    getline(cin,stringVariable);
    bool answer = (stringVariable == expected_answer);
    cout << boolalpha << answer << endl;

    string second_question_text = "Assume that n is properly declared and initialized. Write a condition to represent that n does NOT satisify 0 < n < 100.";
    string second_expected_answer = "(n <= 0 || n >= 100)";
    string secondstringVariable;
    cout << second_question_text << endl;
    getline(cin, secondstringVariable);
    bool second_answer = (secondstringVariable == second_expected_answer);
    cout << boolalpha << second_answer << endl;
}