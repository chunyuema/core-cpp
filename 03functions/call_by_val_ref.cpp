#include <iostream>
using namespace std;

void reset_to_zero_parameter_passing(int *ip)
{
    *ip = 0; // change the integer that ip points at to 0
    ip = 0;  // change only local copy of ip, argument is not changed
    cout << "local copy of ip =  " << ip << endl;
}

// by default, call by value in c++
void call_by_val(int a)
{
    a = 73;
    printf("inside function, val is %d\n", a);
}

// dangerous as the side effect can be implicit
void call_by_ref(int &a)
{
    a = 45;
    printf("inside function, val is %d\n", a);
}

// avoid unintended side effect with const modifier
void call_by_const_ref(const int &a)
{
    // a = 45; // this line will not be allowed
    printf("inside function, val is %d\n", a);
}

// avoid unintended side effect by making explicit calles with ptr
void call_by_ptr(int *a)
{
    *a = 73;
    printf("inside function, val is %d\n", *a);
}

int main()
{
    // int i = 42;
    // int *ip = &i;
    // cout << "i = " << i << endl;
    // cout << "ip = " << ip << endl;
    // reset_to_zero_parameter_passing(ip);
    // cout << "i = " << i << endl;
    // cout << "ip = " << ip << endl;

    int a = 23;
    call_by_val(a);
    printf("outside function, val is %d\n", a);

    // still passing in a, but a will be changed
    call_by_ref(a);
    printf("outside function, val is %d\n", a);

        call_by_const_ref(a);
    printf("outside function, val is %d\n", a);

    call_by_ptr(&a);
    printf("outside function, val is %d\n", a);

    return 0;
}