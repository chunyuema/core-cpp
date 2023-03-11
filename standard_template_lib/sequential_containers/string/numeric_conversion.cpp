#include <iostream>
#include <string>

using namespace std;

void string_to_number()
{
    double d = stod("42");
    cout << d << endl;

    string s = "pi = 3.1415926";
    d = stod(s.substr(s.find_first_of("+-.0123456789")));
    cout << d << endl;
}

void number_to_string()
{
    int i = 33;
    string s = to_string(i);
    cout << s << endl;
}

int main()
{
    string_to_number();
    number_to_string();
    return 0;
}