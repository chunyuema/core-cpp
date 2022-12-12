#include <iostream>
#include <cstdio>

using namespace std;

void basic_reference()
{
    int x = 9;
    /* y is a reference to x */
    int &y = x;
    printf("x is %d\n", x);
    printf("y is %d\n", y);
    /* changing y will change x as well */
    y = 45;
    printf("x is %d\n", x);
    printf("y is %d\n", y);
}

void reference_to_const()
{
    int x = 9;
    const int &y = x;
    printf("x is %d\n", x);
    printf("y is %d\n", y);
    /* y cannot be used to change x any more since it is a const reference */
    // y = 34;

    /* x can only be modified intentionally */
    x = 45;
    printf("x is %d\n", x);
    printf("y is %d\n", y);
}

void only_const_reference_for_const_var()
{
    const int x = 9;
    const int &y1 = x;
    /* y2 cannot reference to x1 since x1 is const, if y2 is allowed to refer to x1, then y2 can be used to change the value of x1, which should not be allowed */
    // int &y2 = x;
}

int main()
{
    // basic_reference();
    // reference_to_const();
    return 0;
}