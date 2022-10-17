#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void cin_one_word()
{
    string user_input;
    cout << "Enter a sentence with more than one words: ";
    cin >> user_input;
    cout << "The user put (you will only see one word): " << user_input << endl;
}

void cin_get_line()
{
    char buffer[128]; // need to have enough size
    cout << "Enter a sentence with more than one words: ";
    cin.getline(buffer, sizeof(buffer));
    cout << "The user put: " << buffer << endl;
}

int main()
{
    // cin_one_word();
    cin_get_line();
    return 0;
}