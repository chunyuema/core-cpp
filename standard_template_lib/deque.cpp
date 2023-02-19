#include <iostream>
#include <deque>
#include <string>
using namespace std;

template <typename T>
void print_deque(string message, T &d)
{
    cout << message << ": [";
    if (d.empty())
    {
        cout << "deque is empty" << endl;
        return;
    }
    for (auto v : d)
        cout << v << " ";
    cout << "]" << endl;
}

void deque_initialization()
{
    deque<string> d1 = {"foo", "bar", "fee"};
    print_deque("deque init", d1);
}

void deque_operation()
{
    deque<string> d1 = {"foo", "bar", "boo"};
    print_deque("deque init", d1);

    d1.pop_front();
    print_deque("popped from front", d1);

    d1.pop_back();
    print_deque("popped from back", d1);

    d1.push_back("new_boo");
    print_deque("pushed from back", d1);

    d1.push_front("new_foo");
    print_deque("pushed from front", d1);
}

int main()
{
    // deque_initialization();
    // deque_operation();
    return 0;
}