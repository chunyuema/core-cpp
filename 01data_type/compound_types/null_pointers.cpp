#include <cstdio>
#include <iostream>

using namespace std;

void using_nullptr()
{
    int *p = nullptr;
    cout << p << endl;
    /* You cannot dereference a null pointer => Segmentation fault */
    // cout << *p << endl;
}

void using_NULL()
{
    int *p = NULL;
    cout << p << endl;
    /* You cannot dereference a null pointer => Segmentation fault */
    // cout << *p << endl;
}

void using_0()
{
    int *p = 0;
    cout << p << endl;
    /* You cannot dereference a null pointer => Segmentation fault */
    // cout << *p << endl;
}

void pointer_as_loop_guard()
{
    int *p = nullptr;
    /* null pointer evaluate to false */
    if (p)
        cout << "It was not a null pointer" << endl;
    else
        cout << "It was a null pointer" << endl;
}

int main()
{
    // using_nullptr();
    // using_NULL();
    // using_0();
    // pointer_as_loop_guard();
    return 0;
}