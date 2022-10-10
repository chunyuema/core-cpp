#include <iostream>
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

int main()
{
    int a = 42;
    call_by_reference_ref(a);
    cout << "outside the function, after, a = " << a << endl;

    int b = 42;
    call_by_reference_ptr(&b);
    cout << "outside the function, after, b = " << b << endl;
    return 0;
}
