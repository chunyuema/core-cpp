#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
using namespace std;

template <typename T>
void print_v(vector<T> &v)
{
    if (!v.size())
        return;
    for (T e : v)
    {
        cout << e << " ";
    }
    cout << endl;
}

void logical_and_functor()
{
    vector<bool> v1 = {1, 0, 1};
    vector<bool> v2 = {0, 1, 1};
    vector<bool> v3(v1.size());
    logical_and<bool> la;
    transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), la);
    print_v(v3);
}

int main()
{
    logical_and_functor();
    return 0;
}