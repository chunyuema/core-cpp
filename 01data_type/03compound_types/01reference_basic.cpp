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

void mark_reference_constant()
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

int main()
{
    // basic_reference();
    // mark_reference_constant();
    return 0;
}