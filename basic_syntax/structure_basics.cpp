#include <cstdio>

struct MyStruct
{
    int i;
    double d;
    const char *s;
};

int main()
{
    MyStruct s1 = {5, 4.19, "my test string"};
    printf("s1 = { %d, %f, %s }\n", s1.i, s1.d, s1.s);
    printf("Modifying the structure\n");
    s1.d = 5.20;
    printf("s1 = { %d, %f, %s }\n", s1.i, s1.d, s1.s);
    return 0;
}