#include <cstdio>
using namespace std;

// note that constructors and destructors are not defined explicitly in C1
class C1
{
    int i = 0;

public:
    int getI() { return i; }
    void setI(int val) { i = val; }
};

int main()
{
    // default constructor is used
    C1 o1;
    o1.setI(3);
    printf("o1 { i = %d }\n", o1.getI());
    // default copy operator
    C1 o2 = o1;
    printf("o2 { i = %d }\n", o2.getI());
    // default destructor is used to clear the memory
    return 0;
}
