#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

const string return_a_value()
{
    string res = "Chunyue";
    /* returned value is used to initialize a temporary at the call site */
    return res;
}

/*
    Compiling the following function will give you the following warning:
    warning: reference to stack memory associated with local variable 'res' returned [-Wreturn-stack-address]
*/
const string &return_ref_to_local_object()
{
    string res = "Chunyue";
    return res; /* gives us undefined outside the function */
}

/*
    Compiling the following function does not generate a warning, but the pointer return will pointer to nothing as the local object will go out of scope after the function exits
*/
const string *return_pointer_to_local_object()
{
    string res = "Chunyue";
    string *res_ptr = &res;
    return res_ptr; /* gives us undefined outside the function */
}

int main()
{
    cout << return_a_value() << endl;
    // cout << return_ref_to_local_object() << endl;
    cout << *return_pointer_to_local_object() << endl;
}