#include <cstdio>
#include <iostream>

using namespace std;

/* The pointer to the first element is returned */
int *return_integer_pointer()
{
    static int a[5];
    for (int i = 0; i < 5; i++)
    {
        a[i] = i;
    }
    return a;
}

/* The pointer points to an array of size 5; This is rather hard to work with */
int (*return_array_pointer())[5]
{
    static int a[5];
    for (int i = 0; i < 5; i++)
    {
        a[i] = i;
    }
    return &a;
}

int main()
{
    int *ptr = return_integer_pointer();
    for (int i = 0; i < 5; i++)
    {
        cout << ptr[i] << " ";
    }
    cout << endl;

    // int(*ptr2)[5] = return_array_pointer();
    // cout << *ptr2;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << (ptr2 + i) << " ";
    // }
    // cout << endl;

    return 0;
}