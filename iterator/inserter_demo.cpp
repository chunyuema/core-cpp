#include <iostream>
#include <list>
#include <vector>
#include <iterator>
#include "../print_containers.h"

using namespace std;

void inserter_vs_insert()
{
    list<int> l1 = {1, 2, 3};
    // getting the regular iterator for insertion
    auto it1 = l1.begin();
    // insert at the iterator
    l1.insert(it1, 4);
    print_list_with_iterator("l1", l1);
    cout << "The iterator it1 is pointing at: " << *it1 << endl;

    list<int> l2 = {1, 2, 3};
    // getting the inserter for insertion
    auto it2 = inserter(l2, l2.begin());
    // insert at the inserter iterator
    it2 = 4;
    print_list_with_iterator("l2", l2);
}

void front_inserter_iterator()
{
    list<int> l1 = {1, 2, 3};
    auto fi = front_inserter(l1);

    // insert a number to v1 using fi
    fi = 6;
    print_list_with_iterator("insert 6 at the front", l1);

    list<int> l2 = {99, 100};
    // insert v2 into v1 using fi
    copy(l2.cbegin(), l2.cend(), fi);
    print_list_with_iterator("insert list l2 at the front", l1);

    vector<int> v1 = {999, 1000};
    // insert v3 backwards into v1 using fi (front_inserter(l1))
    copy(v1.cbegin(), v1.cend(), front_inserter(l1));
    print_list_with_iterator("insert vector v2 at the front", l1);
}

void futile_ops()
{
    /*
     *it, it++, ++it all return it and do nothing if it is an inserter
     */
    list<int> l = {1, 2, 3};
    // getting the inserter for insertion
    auto it = inserter(l, l.begin());
    // insert at the inserter iterator
    *it = 4;
    print_list_with_iterator("l", l);

    l = {1, 2, 3};
    it = inserter(l, l.begin());
    ++it = 4;
    print_list_with_iterator("l", l);

    l = {1, 2, 3};
    it = inserter(l, l.begin());
    it++ = 4;
    print_list_with_iterator("l", l);
}

int main()
{
    inserter_vs_insert();
    front_inserter_iterator();
    futile_ops();
    return 0;
}