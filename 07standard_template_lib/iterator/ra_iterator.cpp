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

void random_access_through_iterator()
{
    vector<int> int_array = {1, 2, 3, 4, 5};
    auto it1 = int_array.begin() + 2;
    cout << "the element with index 2 is: " << *it1 << endl;
    // the following is implemented using the random access iterator
    cout << "the element with index 2 is: " << int_array[2] << endl;

    auto it2 = int_array.end() - 3;
    cout << "the element with index 2 from back is: " << *it2 << endl;
}

int main()
{
    // iterator_through_string();
    // iterator_through_vector();
    random_access_through_iterator();
    return 0;
}