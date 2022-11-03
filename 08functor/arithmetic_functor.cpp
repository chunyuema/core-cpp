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

void plus_functor()
{
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2 = {0, 9, 8, 7, 6};
    vector<int> v3(v1.size(), 0);
    cout << "initial v3: ";
    print_v(v3);
    plus<int> p;
    transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), p);
    cout << "after transform, v3: ";
    print_v(v3);
}

void minus_functor()
{
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2 = {0, 9, 8, 7, 6};
    vector<int> v3(v1.size(), 0);
    cout << "initial v3: ";
    print_v(v3);
    minus<int> m;
    transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), m);
    cout << "after transform, v3: ";
    print_v(v3);
}

void negate_functor()
{
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v3(v1.size(), 0);
    cout << "initial v3: ";
    print_v(v3);
    negate<int> n;
    transform(v1.begin(), v1.end(), v3.begin(), n);
    cout << "after transform, v3: ";
    print_v(v3);
}

int main()
{
    plus_functor();
    minus_functor();
    negate_functor();
    return 0;
}