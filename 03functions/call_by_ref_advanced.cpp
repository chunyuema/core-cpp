#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

// i is another name of what is passed into the function
void call_by_reference_ref(int &i)
{
    cout << "in the function, previously, i = " << i << endl;
    i = 0;
    cout << "in the function, after, i = " << i << endl;
}

void call_by_reference_ptr(int *i)
{
    cout << "in the function, previously, i = " << *i << endl;
    *i = 0;
    cout << "in the function, after, i = " << *i << endl;
}

// it is recommended to use pass by reference for non simple data types as it requires less overheaded. c++ needs to copy the values of parameters if it is passed through val, but this can be avoided if we use call by ref
void pass_large_parameters_through_reference(const string &s)
{
    printf("The string is %s\n", s.c_str());
}

int main()
{
    int a = 42;
    call_by_reference_ref(a);
    cout << "outside the function, after, a = " << a << endl;

    int b = 42;
    call_by_reference_ptr(&b);
    cout << "outside the function, after, b = " << b << endl;

    string s = "this is my string";
    pass_large_parameters_through_reference(s);
    return 0;
}
