#include <iostream>
#include <set>
using namespace std;

void bidir_it_forward()
{
    set<int> s1 = {1, 2, 3, 4, 5};
    // set iterator is a bidirectional iterator
    set<int>::iterator it1;
    for (it1 = s1.begin(); it1 != s1.end(); it1++)
    {
        cout << *it1 << " ";
    }
    cout << endl;
}

void bidir_it_backward()
{
    set<int> s1 = {1, 2, 3, 4, 5};
    set<int>::iterator it1;
    for (it1 = s1.end(); it1 != s1.begin();)
    {
        // need to decrement first before dereference
        cout << *--it1 << " ";
    }
    cout << endl;
}

int main()
{
    bidir_it_forward();
    bidir_it_backward();
    return 0;
}