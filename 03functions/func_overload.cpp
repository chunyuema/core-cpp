#include <cstdio>

constexpr double pi = 3.1415926;

double area(double radius)
{
    double a = pi * radius * radius;
    printf("area of circle: %.3lf\n", a);
    return a;
}

double area(double height, double width)
{
    double a = height * width;
    printf("area of rectangle: %.3lf\n", a);
    return a;
}

int main()
{
    area(2.88);
    area(2.45, 3.98);
    return 0;
}