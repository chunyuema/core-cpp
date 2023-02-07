#include <iostream>

using namespace std;

class A
{
public:
    A(const string &s = string()) : ps(new string(s)), i(0), counter(new size_t(1)) {}

    // Copy constructor
    A(const A &a) : ps(a.ps), i(a.i), counter(a.counter)
    {
        cout << "Copy constructor is called, updating the shared counter" << endl;
        ++*counter;
    }

    // Copy assign operator
    A &operator=(const A &rhs);

    // Destructor
    ~A();

    string get_s() const
    {
        return *ps;
    }

    int get_i() const
    {
        return i;
    }

    size_t get_count() const
    {
        return *counter;
    }

private:
    string *ps;
    int i;
    size_t *counter;
};

A::~A()
{
    if (--*counter == 0)
    {
        cout << "Counter decreased to 0, deleting the resources" << endl;
        delete ps;
        delete counter;
    }
}

A &A::operator=(const A &rhs)
{
    cout << "Copy assign operator is used" << endl;
    ++*rhs.counter;
    if (--*counter == 0)
    {
        delete ps;
        delete counter;
    };
    ps = rhs.ps;
    i = rhs.i;
    counter = rhs.counter;
    return *this;
}

void print_a(const A &a)
{
    cout << "{ " << a.get_s() << " " << a.get_i() << " } : reference counter = " << a.get_count() << endl;
}

int main()
{

    A a("chunyue");
    print_a(a);

    A a2(a);
    print_a(a);

    A a3;
    a3 = a;
    print_a(a);

    return 0;
}