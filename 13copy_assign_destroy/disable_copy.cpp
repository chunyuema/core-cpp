#include <iostream>

using namespace std;

class A
{
    int x;

public:
    A(int val) : x(val) {}
    /* This explicitly say that copy constructor and copy assign operator are disabled */
    A(const A &) = delete;
    A &operator=(const A &) = delete;

    int get_x() { return x; }
    void set_x(int val) { x = val; }
};

int main()
{
    A obj1(4);
    cout << "A { x : " << obj1.get_x() << " }" << endl;
    /* The following are not possible since copy is disabled */
    // A obj2(obj1);
    // A obj3 = obj1;
    return 0;
}