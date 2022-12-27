#include <iostream>
#include <string>
using namespace std;

inline const string &shorter_string(const string &s1, const string &s2)
{
    return s1.size() <= s2.size() ? s1 : s2;
}

int main()
{
    string s1 = "chunyue";
    string s2 = "bobby";
    cout << shorter_string(s1, s2) << endl;
}