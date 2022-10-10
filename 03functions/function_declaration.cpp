#include <cstdio>
// or include a header file
#include "func.h"

// function needs to be declared at least, otherwise the compiler will throw errors
void func();

int main()
{
    func();
    myFunc();
    return 0;
}

void func()
{
    puts("sample function");
}

void myFunc()
{
    puts("sample function defined from header file");
}