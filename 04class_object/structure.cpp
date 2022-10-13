#include <cstdio>

// fields are public
struct S
{
    int a;
    int b;
};

// fields are private
class C
{
    int ia;
    int ib;

public:
    // constructor needed
    C(int a, int b) : ia(a), ib(b){};
    // getters needed to access the private fields
    int getA() { return ia; }
    int getB() { return ib; }
};

int main()
{
    S myS{1, 2};
    C myC{1, 2};
    printf("s: %d, %d\n", myS.a, myS.b);
    printf("c: %d, %d\n", myC.getA(), myC.getB());
    return 0;
}
