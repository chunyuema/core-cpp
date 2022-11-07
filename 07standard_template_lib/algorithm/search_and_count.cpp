#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
using namespace std;

bool is_odd(const int &num)
{
    return (num % 2 == 1);
}

void find_algo(const vector<int> &v1, int target)
{
    auto it = find(v1.begin(), v1.end(), target);
    if (it != v1.end())
    {
        size_t index = it - v1.begin();
        cout << target << " is at " << index << endl;
    }
    else
    {
        cout << "unable to find " << target << endl;
    }
}

void find_if_and_not(const vector<int> &v1)
{
    auto it = find_if(v1.begin(), v1.end(), is_odd);
    if (it != v1.end())
    {
        cout << "The first odd number is: " << *it << " at index " << it - v1.begin() << endl;
    }

    auto it1 = find_if_not(v1.begin(), v1.end(), is_odd);
    if (it1 != v1.end())
    {
        cout << "The first non-odd (even) number is: " << *it1 << " at index " << it1 - v1.begin() << endl;
    }
}

void search_range(const vector<int> &v1, const vector<int> &v2)
{
    auto it = search(v1.begin(), v1.end(), v2.begin(), v2.end());
    if (it != v1.end())
    {
        cout << "found the sequence starting from index " << it - v1.begin() << endl;
    }
}

void count_occurrences(const vector<int> &v1)
{
    auto c = count_if(v1.begin(), v1.end(), is_odd);
    cout << "Number of odd numbers: " << c << endl;
}

int main()
{
    const vector<int> v1 = {1, 3, 5, 8, 9};
    const vector<int> v2 = {5, 8};
    // find_algo(v1, 3);
    // find_algo(v1, 8);
    // find_if_and_not(v1);
    // search_range(v1, v2);
    // count_occurrences(v1);
    return 0;
}