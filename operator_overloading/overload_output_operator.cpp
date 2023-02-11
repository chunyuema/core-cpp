#include <iostream>
#include <string>
using namespace std;

class A
{
    int i;
    string s;

public:
    A(int int_val, string string_val) : i(int_val), s(string_val) {}

    /* IO operators must be non member functions */
    friend ostream &operator<<(ostream &os, const A &a);
};

ostream &operator<<(ostream &os, const A &a)
{
    os << "{ " << a.i << ", " << a.s << " }";
    return os;
}

int main()
{
    A a(1, "chunyue");
    cout << a << endl;
}