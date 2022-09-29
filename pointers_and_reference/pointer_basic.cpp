#include <iostream>
#include <cstdio>

using namespace std;

void basic_pointer()
{
    int x = 5;
    int y = 15;
    int *ip = &x;
    printf("x is %d\n", x);
    printf("y is %d\n", y);
    printf("ip holds the value %d\n", *ip);

    x = 45;
    printf("ip holds the value %d\n", *ip);

    ip = &y;
    printf("ip holds the value %d\n", *ip);
}

int main()
{
    basic_pointer();
    // int var = 5;
    // int *ip;
    // double *dp;
    // float *fp;
    // char *cp;
    // cout << "All pointers are just a variable storing the address to another variable" << endl;
    // cout << sizeof(ip) << endl;
    // cout << sizeof(dp) << endl;
    // cout << sizeof(fp) << endl;
    // cout << sizeof(cp) << endl;

    // ip = &var;
    // cout << "Variable value of var: " << var << endl;
    // cout << "Address of variable of var: " << ip << endl;
    // cout << "Pointer pointing at value: " << *ip << endl;

    // *ip = 6;
    // cout << "Variable value of var: " << var << endl;
    // cout << "Address of variable of var: " << ip << endl;
    // cout << "Pointer pointing at value: " << *ip << endl;

    // return 0;
}