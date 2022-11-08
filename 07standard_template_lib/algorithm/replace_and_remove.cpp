#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
using namespace std;

bool is_negative(int n)
{
    return n < 0;
}

template <typename T>
void print_vector(const T &v)
{
    if (!v.size())
        return;
    for (auto e : v)
    {
        cout << e << " ";
    }
    cout << endl;
}

void replace_algo()
{
    vector<int> v1 = {1, -2, 3, -4};
    replace(v1.begin(), v1.end(), 3, -3);
    print_vector(v1);
    replace_if(v1.begin(), v1.end(), is_negative, 0);
    print_vector(v1);
}

void remove_algo()
{
    vector<int> v1 = {1, 2, 3, 4};
    auto it = remove(v1.begin(), v1.end(), 3);
    cout << "iterator pointing at the next element after the element removed: " << *it << endl;
    // just after the removal, vector gets messed up
    print_vector(v1);
    if (it == v1.end())
    {
        cout << "no elements to be removed" << endl;
    }
    else
    {
        // need to resize the vector
        v1.resize(it - v1.begin());
    }
    print_vector(v1);

    vector<int> v2 = {1, -2, 3, -4};
    auto it2 = remove_if(v2.begin(), v2.end(), is_negative);
    print_vector(v2);
    if (it2 == v2.end())
    {
        cout << "no elements to be removed" << endl;
    }
    else
    {
        // need to resize the vector
        v2.resize(it2 - v2.begin());
    }
    print_vector(v2);
}

void unique_algo(vector<int> v)
{
    auto it = unique(v.begin(), v.end());
    print_vector(v);
    if (it == v.end())
    {
        cout << "No duplicated elements" << endl;
    }
    else
    {
        v.resize(it - v.begin());
        print_vector(v);
    }
}

int main()
{
    // replace_algo();
    // remove_algo();
    vector<int> v1 = {1, 2, 2, 3, 4, 4};
    vector<int> v2 = {1, 2, 3, 4};
    unique_algo(v1);
    unique_algo(v2);
    return 0;
}