#include <iostream>

using namespace std;

class My_class
{
    int x;
    int y;

public:
    My_class(int val1, int val2) : x(val1), y(val2) {}

    My_class &operator=(const My_class &rhs)
    {
        cout << "Hi, this is to prove that the copy assignment operator is being called for assigning values" << endl;
        x = rhs.x;
        y = rhs.y;
        return *this;
    }
};

int main()
{
    My_class obj1{1, 2};
    My_class obj2{3, 4};
    // This code below is going to trigger the copy assign operator
    obj2 = obj1;

    /* This is not going to use the copy assign operator as it is using the synthesized copy constructor */
    My_class obj3 = obj2;

    return 0;
}