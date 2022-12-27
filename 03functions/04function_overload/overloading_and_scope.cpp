#include <cstdio>
using namespace std;

void print(double)
{
    printf("print(double) is being called");
}

/*
This program is not going to compile since print(int) is not defined, however, the example serves to show that the print(int) will hide the previous definition of print(double). When compiling, you will see this following warning too: overloading_and_scope.cpp:14:11: warning: implicit conversion from 'double' to 'int' changes value from 3.1415926 to 3
*/
int main()
{
    void print(int);

    /* print(int) will be called, print(double) will be hidden */
    print(3.1415926);
    return 0;
}