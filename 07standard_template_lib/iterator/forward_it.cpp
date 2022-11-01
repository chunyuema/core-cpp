#include <iostream>
#include <forward_list>
using namespace std;

void loop_through_forward_linked_list()
{
    forward_list<int> fl = {1, 2, 3, 4};
    forward_list<int>::iterator flit;
    // only forward is permitted
    cout << "Looping with forward iterator: ";
    for (flit = fl.begin(); flit != fl.end(); flit++)
    {
        cout << *flit << " ";
    }
    cout << endl;

    // the range based for usese forward iterator
    cout << "Looping with range based for: ";
    for (int i : fl)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    loop_through_forward_linked_list();
    return 0;
}