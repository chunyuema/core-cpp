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

void pointers_to_const()
{
    const int i = 20;
    const int *pi = &i;
    /* pi cannot be used to modify i since it is a const pointer */
    // *pi = 21;

    int x = 20;
    const int *px = &x;
    /* even if x is not const, px cannot be used to modify x since it is a const pointer */
    // *px = 21;

    /* pj cannot point to i since pj is not a constant pointer, it can modify i, which should not be allowed */
    // int *pj = &i;
}

void const_pointers()
{
    int x = 90;
    /* px is a const pointer to x */
    int *const px = &x;
    /* py is a pointer to a const int */
    const int *py = &x;
    /* pz is a const pointer to a const int */
    const int *const pz = &x;

    int y = 80;

    /* px cannot be reassigned since it is a const itself */
    // px = &y;

    /* py can be reassigned, it points to a const int, but is not a const itself */
    py = &y;
}

int main()
{
    // pointer_initialization();
    // use_pointer_to_access_objects();
    // reassign_pointer();
    // compare_pointers();
    return 0;
}