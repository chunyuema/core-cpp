/*
    Call by value
    When argument is into the function as value, the argument is copied.
    As a result, changes made to a in the function has no effect on the initializer (argument) => see void call_by_val(int a)

    To avoid this issue, you can pass the pointer into the function instead. Even though it is passed in as value and will be copied as a distinct pointer, we can still access the argument value and alter it. => see void call_by_ptr(int *a)
*/

#include <iostream>
using namespace std;

void call_by_val(int a)
{
    /* reassignment of the val */
    a = 73;
    printf("Inside function, a is reassigned to %d\n", a);
}

void call_by_ptr(int *a)
{
    /* Use pointer to make sure that the reassignment is preserved */
    *a = 73;
    printf("[Pointer] Inside function, a is reassigned to %d\n", *a);
}

int main()
{
    int a = 23;
    printf("===========================================\n");
    printf("Before calling the function, a = %d \n", a);
    call_by_val(a);
    printf("After calling the funnction, a = %d\n", a);
    printf("===========================================\n");
    printf("Before calling the function, a = %d \n", a);
    call_by_ptr(&a);
    printf("After calling the funnction, a = %d\n", a);
    printf("===========================================\n");

    return 0;
}