#include <iostream>
using namespace std;

int reused = 42;

int main()
{
    cout << "Using the global resued variable: " << reused << endl;
    int reused = 0; // bad practice
    cout << "Using the local reused variable: " << reused << endl;
    cout << "Using the global reused variable again: " << ::reused << endl;
}