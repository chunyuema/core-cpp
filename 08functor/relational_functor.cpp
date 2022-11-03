#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
#include <typeinfo>
using namespace std;

template <typename T>
void print_v(vector<T> &v)
{
    if (!v.size())
        return;
    if (typeid(T) == typeid(bool))
    {
        for (T e : v)
        {
            cout << (e ? "T" : " F") << " ";
        }
    }
    else
    {
        for (T e : v)
        {
            cout << e << " ";
        }
    }
    cout << endl;
}

void greater_functor()
{
    vector<int> v1 = {1, 23, 42, 56, 12};
    vector<int> v2 = {32, 13, 45, 67, 8};
    vector<bool> v3(v1.size());
    greater<int> gt;

    // using functor for transform
    transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), gt);
    cout << "Comparing v1 elements to v2 elements: ";
    print_v(v3);

    // using functor for sorting
    sort(v2.begin(), v2.end(), gt);
    cout << "Sorted v2: ";
    print_v(v2);
}

int main()
{
    greater_functor();
    return 0;
}