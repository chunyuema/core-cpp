#include <cstdio>

void func_1()
{
    puts("this is the first function");
}

void func_2()
{
    puts("this is the second function");
}

int main()
{
    void (*pfunc)() = func_1;
    (*pfunc)();

    void (*pfuncs[])() = {func_1, func_2};
    (*pfuncs[1])();

    return 0;
}