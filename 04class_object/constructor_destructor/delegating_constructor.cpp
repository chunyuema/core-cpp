#include <iostream>
#include <string>

using namespace std;

class My_class
{
    string name;
    int val1;
    int val2;

public:
    // Non delegating constructor
    My_class(string s, int i, int j) : name(s), val1(i), val2(j) {}

    // Delegating constructor
    My_class() : My_class("", 0, 0) {}
    My_class(string s) : My_class(s, 0, 0) {}
    My_class(string s, int i) : My_class(s, i, 0) {}

    string get_name() { return name; }
    int get_val1() { return val1; }
    int get_val2() { return val2; }
};

int main()
{
    My_class c1;
    cout << "c1 = { " << c1.get_name() << ", " << c1.get_val1() << ", " << c1.get_val2() << " }" << endl;

    My_class c2("chunyue");
    cout << "c2 = { " << c2.get_name() << ", " << c2.get_val1() << ", " << c2.get_val2() << " }" << endl;

    return 0;
}