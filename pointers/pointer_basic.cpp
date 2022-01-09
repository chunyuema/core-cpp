#include <iostream>
using namespace std;

int main()
{
    int var = 5;
    int *ip;
    double *dp;
    float *fp;
    char *cp;
    cout << "All pointers are just a variable storing the address to another variable" << endl;
    cout << sizeof(ip) << endl;
    cout << sizeof(dp) << endl;
    cout << sizeof(fp) << endl;
    cout << sizeof(cp) << endl;

    ip = &var;
    cout << "Variable value of var: " << var << endl;
    cout << "Address of variable of var: " << ip << endl;
    cout << "Pointer pointing at value: " << *ip << endl;

    *ip = 6;
    cout << "Variable value of var: " << var << endl;
    cout << "Address of variable of var: " << ip << endl;
    cout << "Pointer pointing at value: " << *ip << endl;

    return 0;
}