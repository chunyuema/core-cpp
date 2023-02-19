#include <iostream>
#include <utility>
#include <string>
using namespace std;

template <typename T1, typename T2>
void print_pair(string message, pair<T1, T2> &p)
{
    cout << message << ": ( " << p.first << " , " << p.second << " )" << endl;
}

void pair_initialization()
{
    pair<int, string> p1(1, "test");
    print_pair("default constructor", p1);

    pair<int, string> p2;
    p2 = make_pair(2, "hello world");
    print_pair("construct using make pair", p2);
}

void pair_comparison()
{
    pair<int, string> p1(1, "test");
    pair<int, string> p2(2, "hello world");
    pair<int, string> p3(3, "hello world");
    pair<int, string> p4(2, "jello world");
    cout << "p1 and p2: " << (p1 < p2) << endl;
    cout << "p2 and p3: " << (p2 < p3) << endl;
    cout << "p2 and p4: " << (p2 < p4) << endl;
}

int main()
{
    // pair_initialization();
    pair_comparison();
    return 0;
}