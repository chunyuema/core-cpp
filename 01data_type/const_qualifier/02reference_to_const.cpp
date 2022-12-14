#include <cstdio>
#include <iostream>

using namespace std;

void legal_reference_to_const()
{
    const int i = 1024;
    const int &r1 = i;

    const int &r2 = 2048;

    const int &r3 = r1 * 2;
}

void illegal_reference_to_const()
{
    const int i = 1048;
    const int &r1 = i;

    /* illegal: r1 is a const reference to a const int, hence it cannot be used to change the value */
    // r1 = 2048;

    /* illagel: r2 and r3 are not a const reference, hence they cannot be used to reference a const integer */
    // int &r2 = i;
    // int &r3 = r1 * 2;
}

void const_vs_regular_reference()
{
    int i = 9;
    int &r1 = i;
    /* the const here is a low level const since its a const in reference */
    const int &r2 = i;

    cout << "Before - r1: " << r1 << ", r2: " << r2 << endl;
    r1 = 10; /* legal because r1 is a regular reference to a non const integer i */
    // r2 = 20; /* illegal because r2 is a const reference */
    cout << "After - r1: " << r1 << ", r2: " << r2 << endl;
}

int main()
{
    const_vs_regular_reference();
    return 0;
}
