#include <iostream>
#include <cstdio>

using namespace std;

void basic_reference()
{
    int x = 9;
    int &y = x;
    printf("x is %d\n", x);
    printf("y is %d\n", y);
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
    // the line below will not be valid
    // y = 34;

    // x won't be accidentally modified
    x = 45;
    printf("x is %d\n", x);
    printf("y is %d\n", y);
}

int main()
{
    // basic_reference();
    mark_reference_constant();
}