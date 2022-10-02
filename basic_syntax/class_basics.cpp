#include <cstdio>

class MyClass
{
    // encapsulate i, it is private by default
    int i = 0;

public:
    // set i through this setter
    void setI(int value)
    {
        i = value;
    }

    // get i through this getter
    int getI()
    {
        return i;
    }
};

int main()
{
    int i = 47;
    MyClass o1;
    o1.setI(i);
    printf("o1 = { i = %d } \n", o1.getI());
    o1.setI(i * 2);
    printf("o1 = { i = %d } \n", o1.getI());
    return 0;
}