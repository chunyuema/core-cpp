#include <iostream>
#include <limits.h>
using namespace std;

int main(){
    int value = 34;
    cout << value << endl;
    cout << "Max int value: " << INT_MAX << endl;
    cout << "Min int value: " << INT_MIN << endl;

    long long int value2 = 2482635348L;
    cout << value2 << endl;
    
    short int value3 = 342;
    cout << value3 << endl;

    // size of different types of integers in bytes
    cout << "Size of short int: " << sizeof(short int) << endl;
    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Size of long int: " << sizeof(long int) << endl;
    cout << "Size of long long int: " << sizeof(long long int) << endl;

    // unsigned integers
    unsigned int unsigned_value = -3;
    cout << "The positive value of binary representation of -3: " << unsigned_value << endl;

    return 0;
}