#include <cstdio>
using namespace std;

void f(int i)
{
    printf("function taking in integer is executed: %d\n", i);
}

void f(const char *c)
{
    printf("function taking a pointer is executed: %p\n", c);
}

int main()
{
    f(1);
    f(nullptr);
    return 0;
}