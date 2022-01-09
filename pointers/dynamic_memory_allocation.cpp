/*
Dynamic Memory Allocatoin of C++ 
*/

#include <iostream>
using namespace std;

int main()
{
    int size;
    int *ptr;

    cout << "Enter number of values to be stored: " << flush;
    cin >> size;

    ptr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value " << i << "> " << flush;
        cin >> ptr[i];
    }

    cout << "The input data values are: " << flush;
    for (int i = 0; i < size; i++)
    {
        cout << ptr[i] << " ";
    }
    cout << endl;
    return 0;
}
