#include <cstdio>

class MyClass
{
public:
    int static_val()
    {
        static int i = 7;
        return ++i;
    }
};

void static_is_global()
{
    MyClass mc1;
    MyClass mc2;
    MyClass mc3;
    printf("mc1 has %d \n", mc1.static_val());
    printf("mc2 has %d \n", mc2.static_val());
    printf("mc3 has %d \n", mc3.static_val());
}

int main()
{
    static_is_global();
    return 0;
}