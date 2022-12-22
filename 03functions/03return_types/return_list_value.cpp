#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

vector<string> eval(string &expected, string &actual)
{
    if (expected.empty())
    {
        return {};
    }
    else if (expected == actual)
    {
        return {"eval result okay"};
    }
    else
    {
        return {"eval result not okay", expected, actual};
    }
}

int main()
{
    string s1 = "chunyue";
    string s2 = "chunyue";
    string s3 = "Chunyue";
    for (auto s : eval(s1, s2))
    {
        cout << s << " ";
    }
    cout << endl;

    for (auto s : eval(s1, s3))
    {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}