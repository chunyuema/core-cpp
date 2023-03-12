#include <numeric>
#include <vector>
#include <list>
#include <string>
#include <iostream>

using namespace std;

void accumulate_int()
{
    vector<int> intVec = {1, 2, 3, 4};
    cout << accumulate(intVec.begin(), intVec.end(), 0) << endl;
}

void accumulate_string()
{
    list<string> strList = {"Chunyue", " ", "Ma"};
    cout << accumulate(strList.begin(), strList.end(), string("")) << endl;
    // The following line gives compile error because "" is of type const char*, so + is not defined
    // cout << accumulate(strList.begin(), strList.end(), "") << endl;
}

int main()
{
    accumulate_int();
    accumulate_string();
    return 0;
}