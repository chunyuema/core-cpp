#include <iostream>
#include <string>
#include <algorithm> // where transform is defined
#include <locale>
using namespace std;

void transform_string_to_upper()
{
    string s1 = "hello world";
    string s2(s1.size(), '.');
    cout << "before s2 = " << s2 << endl;
    transform(s1.begin(), s1.end(), s2.begin(), ::toupper);
    cout << "after s2 = " << s2 << endl;
}

int main()
{
    transform_string_to_upper();
    return 0;
}