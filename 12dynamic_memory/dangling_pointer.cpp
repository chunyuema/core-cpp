#include <iostream>

using namespace std;

void process(shared_ptr<int> p)
{
    cout << "shared pointer p is pointing at integer: " << *p << endl;
    return;
}

int main()
{
    int *x(new int(1024));
    cout << "pointer x points to integer: " << *x << endl;
    /*
    The following line pass a temporary shared pointer to process method, the problem is that it is initialized with x. When the temporary expression is gone, the shared pointer will free the memory where x is pointing at.
    */
    process(shared_ptr<int>(x));

    /*
    As a result, after the method call, x will become a dangling pointer that is no longer invalid
    */
    cout << "pointer x points to integer: " << *x << endl;
    return 0;
}