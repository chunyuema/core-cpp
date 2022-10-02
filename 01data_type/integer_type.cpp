#include <iostream>
#include <cstdio>
#include <cstdint>
#include <limits.h>
using namespace std;

// The results will depend on the system
void number_of_bits()
{
    char c = 0;
    short int si = 0;
    short s = 0;
    int i = 0;
    long int li = 0;
    long long int lli = 0;

    printf("size of c is %zd bits \n", sizeof(c) * 8);
    printf("size of si is %zd bits \n", sizeof(si) * 8);
    // the line below works but not recommended
    printf("size of s is %zd bits \n", sizeof(s) * 8);
    printf("size of i is %zd bits \n", sizeof(i) * 8);
    printf("size of li is %zd bits \n", sizeof(li) * 8);
    printf("size of lli is %zd bits \n", sizeof(lli) * 8);
}

// The results will not depend on the system
void specify_bits_needed()
{
    printf("size of int8_t is %ld bits\n", sizeof(int8_t) * 8);
    printf("size of int16_t is %ld bits\n", sizeof(int16_t) * 8);
    printf("size of int32_t is %ld bits\n", sizeof(int32_t) * 8);
    printf("size of int64_t is %ld bits\n", sizeof(int64_t) * 8);
}

int main()
{
    // number_of_bits();
    specify_bits_needed();

    // int value = 34;
    // cout << value << endl;
    // cout << "Max int value: " << INT_MAX << endl;
    // cout << "Min int value: " << INT_MIN << endl;

    // long long int value2 = 2482635348L;
    // cout << value2 << endl;

    // short int value3 = 342;
    // cout << value3 << endl;

    // // size of different types of integers in bytes
    // cout << "Size of short int: " << sizeof(short int) << endl;
    // cout << "Size of int: " << sizeof(int) << endl;
    // cout << "Size of long int: " << sizeof(long int) << endl;
    // cout << "Size of long long int: " << sizeof(long long int) << endl;

    // // unsigned integers
    // unsigned int unsigned_value = -3;
    // cout << "The positive value of binary representation of -3: " << unsigned_value << endl;

    return 0;
}