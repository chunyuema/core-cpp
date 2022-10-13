#include <cstdio>

class C1
{
    int i = 0;

public:
    int getI() { return i; }
    void setI(int val) { i = val; }
    void definedOutside();
};

void C1::definedOutside()
{
    puts("You can also define the method this way");
};

int main()
{
    C1 myobject;
    myobject.setI(2);
    printf("i is now: %d\n", myobject.getI());
    myobject.definedOutside();
}