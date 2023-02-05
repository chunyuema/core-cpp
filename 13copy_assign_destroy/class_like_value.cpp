#include <iostream>
#include <string>

using namespace std;

class A
{
public:
    // Constructor with value initialization (the string is optional)
    A(const string &s = string()) : ps(new string(s)), i(0) {}

    // Copy constructor needs to create a new resource where the pointer ps is pointing at
    A(const A &a) : ps(new string(*a.ps)), i(a.i)
    {
        cout << "Copy constructor is used" << endl;
    }

    // Copy-assign operator
    A &operator=(const A &rhs);

    // Destructor
    ~A() { delete ps; }

    string get_s() { return *ps; }

    int get_i() { return i; }

private:
    string *ps;
    int i;
};

A &A::operator=(const A &rhs)
{
    cout << "Copy assignment is triggered" << endl;
    // Copying over the s value from RHS
    /*
    The reason why we want to copy over the rhs's ps into a newp first is because we would like to avoid self assignment. If we delete ps first directly in the self assignment case, then the next line will essentially assignment empty memory to ps, which is invalid based on what we want to do
    */
    auto newp = new string(*rhs.ps);
    delete ps;
    ps = newp;

    // Copying over the i value from RHS
    i = rhs.i;

    return *this;
};

void print_a(A &a)
{
    cout << "{ " << a.get_s() << " " << a.get_i() << " }" << endl;
    return;
}

int main()
{
    A a("chunyue");
    print_a(a);

    A a1(a);
    print_a(a1);

    A a2 = a1;
    print_a(a2);

    A a3;
    a3 = a1;
    print_a(a3);

    return 0;
}