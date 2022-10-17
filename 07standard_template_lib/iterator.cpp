#include <iostream>
#include <typeinfo>
#include <vector>
using namespace std;

void iterator_through_string()
{
    string s = "hello world";
    cout << s << endl;
    for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
    {
        *it = toupper(*it);
    }
    cout << s << endl;
}

void iterator_through_vector()
{
    vector<int> int_array = {1, 2, 3, 4, 5};
    for (auto it = int_array.begin(); it < int_array.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    // iterator_through_string();
    iterator_through_vector();
    return 0;
}