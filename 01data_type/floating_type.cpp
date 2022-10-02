#include <cstdio>

void size_of_floating_type()
{
    float f;
    double df;
    long double ldf;

    printf("size of float f is %zd bits\n", sizeof(f) * 8);
    printf("size of double df is %zd bits\n", sizeof(df) * 8);
    printf("size of long double ldf is %zd bits\n", sizeof(ldf) * 8);
}

void float_point_literal()
{
    float f = 500.0;
    printf("f is %f\n", f);
    f = 5e2;
    printf("f is %f\n", f);
    f = .1 + .1 + .1;
    // precision is wrong
    printf("f is %1.10f\n", f);
    if (f == 0.3)
        puts("equals");
    else
        puts("not equals");

    double df = .1 + .1 + .1;
    // this will not work either
    printf("df is %1.20f\n", df);
}

int main()
{
    // size_of_floating_type();
    // float_point_literal();
}