#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
using namespace std;

template <typename T>
const bool is_prime(const T &num)
{
    if (num <= 1)
        return false;
    for (T l = 2; l < num; l++)
    {
        if (num % l == 0)
        {
            return false;
        }
    }
    return true;
}

void all_of_algo()
{
    const vector<int> v1 = {2, 5, 7, 11};
    if (all_of(v1.begin(), v1.end(), is_prime<int>))
    {
        cout << "all of the numbers are prime" << endl;
    }
    else
    {
        cout << "not all of the numbers are prime" << endl;
    }
}

void any_of_algo()
{
    const vector<int> v1 = {2, 6, 7, 11};
    if (all_of(v1.begin(), v1.end(), is_prime<int>))
    {
        cout << "one of the numbers is prime" << endl;
    }
    else
    {
        cout << "none of the numbers is prime" << endl;
    }
}

void none_of_algo()
{
    const vector<int> v1 = {2, 5, 7, 11};
    if (none_of(v1.begin(), v1.end(), is_prime<int>))
    {
        cout << "none of the numbers is prime" << endl;
    }
    else
    {
        cout << "all of the numbers are prime" << endl;
    }
}

int main()
{
    all_of_algo();
    any_of_algo();
    none_of_algo();
    return 0;
}