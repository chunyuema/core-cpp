#include <numeric>
#include <vector>
#include <list>
#include <string>
#include <iostream>
#include "complex.h"

using namespace std;

void accumulate_int()
{
    vector<int> intVec = {1, 2, 3, 4};
    cout << accumulate(intVec.cbegin(), intVec.cend(), 0) << endl;
}

void accumulate_string()
{
    list<string> strList = {"Chunyue", " ", "Ma"};
    cout << accumulate(strList.cbegin(), strList.cend(), string("")) << endl;
    // The following line gives compile error because "" is of type const char*, so + is not defined
    // cout << accumulate(strList.begin(), strList.end(), "") << endl;
}

void accumulate_object_with_plus_defined()
{
    Complex c1(10, 5);
    Complex c2(2, 4);
    Complex c3(8, 7);
    list<Complex> complexList = {c1, c2, c3};
    Complex c4 = accumulate(complexList.cbegin(), complexList.cend(), Complex(0, 0));
    c4.print();
}

int main()
{
    accumulate_int();
    accumulate_string();
    accumulate_object_with_plus_defined();
    return 0;
}