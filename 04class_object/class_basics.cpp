#include <cstdio>

class C1
{
    int i = 0;

public:
    int getI() { return i; }
    void setI(int val) { i = val; }
    void definedOutsideSetI(const int &);
};

// define the method outside the class
void C1::definedOutsideSetI(const int &value)
{
    i = value;
};

int main()
{
    C1 myobject;
    myobject.setI(2);
    printf("i is now: %d\n", myobject.getI());
    myobject.definedOutsideSetI(4);
    printf("i is now: %d\n", myobject.getI());
}