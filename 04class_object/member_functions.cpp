#include <cstdio>
class C1
{
    int i = 0;

public:
    int getI() { return i; }
    int getI() const
    {
        printf("const qualified getter: ");
        return i;
    }
    void setI(int val) { i = val; }
};

int main()
{
    C1 myobject;
    myobject.setI(2);
    printf("i is now: %d\n", myobject.getI());

    const C1 myobject2 = myobject;
    // const qualified objects requires const qualified memeber functions
    printf("i is now: %d\n", myobject2.getI());
}