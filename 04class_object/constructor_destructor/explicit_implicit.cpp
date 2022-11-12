#include <cstdio>
using namespace std;

class C1
{
    int _value = 0;
    // default constructor cannot be called since it is in the private section
    C1();

public:
    C1(const int &val) : _value(val) {}
    void set_value(const int &val) { _value = val; }
    int get_value() const { return _value; }
};

class C2
{
    int _value = 0;
    // default constructor cannot be called since it is in the private section
    C2();

public:
    explicit C2(const int &val) : _value(val) {}
    void set_value(const int &val) { _value = val; }
    int get_value() const { return _value; }
};

int main()
{
    // implicit constructor allows type conversion
    C1 o1 = 'X';
    printf("o1{ _value = %d }\n", o1.get_value());

    // C2 o2 = 'X'; //  this will not compile because the constructor is defined as explicit
}