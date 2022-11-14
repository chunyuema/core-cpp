#include <cstdio>

class C1
{
    int i = 0;

public:
    int getI()
    {
        // this points at the current object
        printf("this is %p\n", this);
        return i;
    }

    int getI2()
    {
        // getI2 essentially just call getI
        return this->getI();
    }
    void setI(int val) { i = val; }
};

int main()
{
    C1 o1;
    o1.setI(4);
    printf("o1 = { i : %d } \n", o1.getI());
    printf("o1 is at %p\n", &o1);
    printf("o1 = { i : %d } \n", o1.getI2());
}
