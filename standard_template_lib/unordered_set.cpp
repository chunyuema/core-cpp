#include <iostream>
#include <set>
#include <string>
#include <unordered_set>
using namespace std;

template <typename T>
void print_set(string msg, T &set)
{
    cout << msg << " : ";
    if (set.empty())
    {
        cout << "empty set" << endl;
        return;
    }
    for (auto element : set)
    {
        cout << element << " ";
    }
    cout << endl;
}

void set_init()
{
    unordered_set<string> s1 = {"foo", "bar", "lol"};
    // note that the result is unordered
    print_set("set init", s1);
}

void insert_to_set()
{
    set<string> s1 = {"foo", "bar", "lol"};
    print_set("initial set", s1);
    s1.insert("boo");
    print_set("inserted boo", s1);

    // check if the insertion is successful
    auto r = s1.insert("foo");
    cout << "insertion outcome: " << r.second << endl;
    if (!r.second)
        print_set("failed to insert foo", s1);
}

void find_in_set()
{
    set<string> s1 = {"foo", "bar", "lol"};
    print_set("initial set", s1);
    // find returns an iterator
    auto it = s1.find("foo");
    if (it != s1.end())
    {
        // erase element
        cout << "erasing " << *it << endl;
        s1.erase(it);
    }
    else
    {
        cout << "element not found" << endl;
    }
    print_set("after find and erase foo", s1);
}

int main()
{
    // set_init();
    insert_to_set();
    // find_in_set();
    return 0;
}