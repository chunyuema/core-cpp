#include <cstdio>

// slightly more efficient
void prefix_increment()
{
    int x = 8;
    printf("x is %d\n", ++x);
    printf("x is %d\n", ++x);
    printf("x is %d\n", ++x);
    // eventually they are the same value
    printf("x is %d\n", x);
}

void post_increment()
{
    int x = 8;
    printf("x is %d\n", x++);
    printf("x is %d\n", x++);
    printf("x is %d\n", x++);
    // eventually they are the same value
    printf("x is %d\n", x);
}

void print_ptr_and_content(u_int32_t *p)
{
    printf("pointer is at %p, value is %d\n", p, *p);
}

void increment_ptr()
{
    u_int32_t arr[5] = {1, 2, 3, 4, 5};
    u_int32_t *p = arr;
    // p is passed to the function and then incremented
    print_ptr_and_content(p++);
    // p is incremented, and then passed into the function
    print_ptr_and_content(++p);
    print_ptr_and_content(p++);
    print_ptr_and_content(p);
}

int main()
{
    // prefix_increment();
    // post_increment();
    increment_ptr();
    return 0;
}