#include <iostream>
#include <string>
#include <vector>
using namespace std;

// increase a specialization of this template during the runtime
template <typename T>
T maxof(T a, T b)
{
    return (a > b ? a : b);
}

template <typename T>
void printVector(const vector<T> &v)
{
    if (v.empty())
        return;
    for (const T &i : v)
        cout << i << " ";
    cout << endl;
    return;
}

// ***** supported in c++ 14
// template <typename lT, typename rT>
// auto tf(const lT &lhs, const rT &rhs)
// {
//     return lhs + rhs;
// }

int main()
{
    // integer comparison
    cout << maxof<int>(7, 9) << endl;
    // c string comparison
    cout << maxof<const char *>("chunyue", "bobby") << endl;
    // string comparison
    cout << maxof<string>("chunyue", "bobby") << endl;
    // template argument deduction
    cout << maxof(7, 9) << endl;

    vector<int> v1 = {1, 2, 3};
    printVector<int>(v1);
    // deduction
    printVector(v1);

    vector<string> v2 = {"chunyue",
                         "chunyue1",
                         "chunyue2"};
    // deduction
    printVector(v2);

    // supported in c++14
    // const char *cstring = "I am a c string";
    // const string classString = "I am a string class string";
    // auto z = tf<string, const char *>(classString, cstring);
    // cout << "z is " << z << endl;
    // cout << "type of z is " << typeid(z).name() << endl;
    return 0;
}