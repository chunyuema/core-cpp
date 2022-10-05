#include <cstdio>

struct MyStruct
{
    int i;
    double d;
    const char *s;
};

void check_size_of_struct()
{
    MyStruct s1 = {5, 4.19, "my test string"};
    printf("size of s1 =  %zd bits\n", sizeof(s1) * 8);
}

void access_struct_directly()
{
    MyStruct s1 = {5, 4.19, "my test string"};
    printf("s1 = { %d, %f, %s }\n", s1.i, s1.d, s1.s);
    printf("Modifying the structure\n");
    s1.d = 5.20;
    printf("s1 = { %d, %f, %s }\n", s1.i, s1.d, s1.s);
}

void access_struct_through_pointer()
{
    MyStruct s1 = {5, 4.19, "my test string"};
    MyStruct *s2 = &s1;
    printf("s2 = { %d, %f, %s }\n", s2->i, s2->d, s2->s);
}

int main()
{
    check_size_of_struct();
    // access_struct_directly();
    // access_struct_through_pointer();
    return 0;
}