#include <cstdio>
#include <iostream>
using namespace std;

void pointer_initialization()
{
    int i = 42;
    /* Initialize by taking the address of i */
    int *p1 = &i;

    /* Unlike reference, pointers are objects and don't have to be initialized at the time when it is defined */
    int *p2;
    p2 = &i;

    cout << p1 << ", " << p2 << endl;
    cout << *p1 << ", " << *p2 << endl;
}

void use_pointer_to_access_objects()
{
    int i = 42;
    int *p = &i;
    cout << p << "," << *p << endl;
    /* Use pointer to update the value in i */
    *p = 45;
    cout << p << "," << *p << endl;
}

void reassign_pointer()
{
    int i = 42;
    int j = 54;
    int *p = &i;
    cout << p << "," << *p << endl;
    /* Reassign what the pointer points to */
    p = &j;
    cout << p << "," << *p << endl;
}

void compare_pointers()
{
    int i = 0;
    int *p1 = &i;
    int *p2 = &i;
    cout << "p1 and p2 are " << (p1 == p2 ? "equal" : "not equal") << endl;

    p2 = nullptr;
    cout << "p1 and p2 are " << (p1 == p2 ? "equal" : "not equal") << endl;
}

int main()
{
    // pointer_initialization();
    // use_pointer_to_access_objects();
    // reassign_pointer();
    // compare_pointers();
    return 0;
}