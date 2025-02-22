#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string texts[] = {"Given char arr[] = {'A', 'B', 'C'}, what is arr[1]?",
    "Given string arr[] = {\"Hello\", \"Hi\", \"Hey\"}, what is arr[2]?",
    "Given two double variables a and b, find out the return of a^b, that is, a raised to the power of b. Hint: use pow function.",
    "Suppose n is properly declared and initialized as an integer. Write a statement to throw away the least significant digit from n. For example, if n is 12, after the statement, n changes to be 1.",
    "Assume that n is properly declared and initialized. Write a statement to declare lastDigit as an integer and initialize it to be the least significant digit of integer n. Suppose n is 123, after the statement, lastDigit is 3.",
    "What is the output?\n#include <iostream>\nusing namespace std;\n\nint main() {\n   int count =0;\n for(int i = -6; i<2; i+=3)\ncout++;\n\n cout << count << endl;\n    return0;\n}",
    "Write a condition to represent that char variable ch is none of the following: 'a', 'b', or 'c'."};
    string answers[] = {"'B'",
    "\"Hey\"",
    "pow(a, b)",
    "n /= 10;",
    "int lastDigit = n % 10;",
    "3",
    "(ch != 'a' && ch != 'b' && ch != 'c')"};
    string user_answer;
    double total_correct_answers = 0;
    double total_user_inputs = 0;
    bool correct_answer;
    for (int i = 0; i<7; i++)
    {
        cout << texts[i] << endl;
        getline(cin, user_answer);
        total_user_inputs += 1;
        correct_answer = (user_answer == answers[i]);
        cout << boolalpha << correct_answer << endl;
        if (correct_answer)
        {
            total_correct_answers += 1;
        }
    }
    cout << "number of user inputs: " << total_user_inputs << endl;
    cout << "number of correct answers: " << total_correct_answers << endl;
    double correct_answer_percentage = (total_correct_answers/total_user_inputs) * 100;
    cout << "percentage of correct answers: " << correct_answer_percentage << "%" << endl;
    if (correct_answer_percentage >= 90)
        cout << "Excellent";
    else if (correct_answer_percentage < 90 && correct_answer_percentage >= 80)
        cout << "Good";
    else if (correct_answer_percentage < 80 && correct_answer_percentage >= 60)
        cout << "Pass";
    else
        cout << "please ask help ASAP";
}