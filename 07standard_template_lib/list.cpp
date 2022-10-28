#include <iostream>
#include <list>
using namespace std;

template <typename T>
void print_list(string message, list<T> &l)
{
    cout << message << ": ";
    if (l.empty())
        return;
    for (T &i : l)
        cout << i << " ";
    cout << endl;
}

void list_initialization()
{
    list<int> l1 = {1, 2, 3};
    print_list("direct initialization", l1);
}

void list_basic_method()
{
    list<int> l1 = {1, 2, 3};
    print_list("list l1", l1);
    cout << "size: " << l1.size() << endl;
    cout << "front: " << l1.front() << endl;
    cout << "back: " << l1.back() << endl;
    l1.push_back(4);
    print_list("pushed 4 onto list", l1);
}

void insert_and_erase()
{
    cout << "Iterators are required for insertion: " << endl;
    list<int> l1 = {1, 2, 3};
    list<int>::iterator it1 = l1.begin();
    while ((*++it1 != 3) && (it1 != l1.end()))
        ;
    if (it1 != l1.end())
    {
        cout << "inserting 78 before 3" << endl;
        l1.insert(it1, 78);
    }
    print_list("after insertion", l1);

    cout << "Iterators are required for erase: " << endl;
    // reset the iterator back to the beginning
    it1 = l1.begin();
    while ((*++it1 != 78) && (it1 != l1.end()))
        ;
    if (it1 != l1.end())
    {
        cout << "erasing 78" << endl;
        l1.erase(it1);
    }
    print_list("after erase", l1);
}

void remove()
{
    // to be implemented
}

void erase_range_with_iterator()
{
    // to be implemented
}

int main()
{
    // list_initialization();
    // list_basic_method();
    insert_and_erase();
    return 0;
}