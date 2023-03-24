#include <iostream>
#include <string>
#include <vector>

using namespace std;

void reverse_traversal()
{
    vector<int> v1 = {1, 2, 3, 4};
    for (auto r_it = v1.crbegin(); r_it != v1.crend(); ++r_it)
    {
        cout << *r_it << endl;
    }
}

void reverse_find()
{
    string s1 = "abc,def,ghi";
    auto comma = find(s1.cbegin(), s1.cend(), ',');
    cout << string(s1.cbegin(), comma) << endl;

    auto rcomma = find(s1.crbegin(), s1.crend(), ',');
    cout << string(s1.crbegin(), rcomma) << endl;

    // to go forward from rcomma
    cout << string(rcomma.base(), s1.cend()) << endl;
}

int main()
{
    // reverse_traversal();
    // reverse_find();
    return 0;
}