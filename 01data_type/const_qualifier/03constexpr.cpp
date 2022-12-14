/*
link: https://stackoverflow.com/questions/14116003/whats-the-difference-between-constexpr-and-const
constexpr is a new C++11 keyword that rids you of the need to create macros and hardcoded literals. It also guarantees, under certain conditions, that objects undergo static initialization. It controls the evaluation time of an expression. By enforcing compile-time evaluation of its expression, constexpr lets you define true constant expressions that are crucial for time-critical applications, system programming, templates, and generally speaking, in any code that relies on compile-time constants.

const can be evaluated both at compile and runtime
*/
#include <cstdio>
#include <stdlib.h>
using namespace std;

void initialize_fixed_size_array()
{
    constexpr int arr_size = 6;
    int arr[arr_size];
}

void const_and_constexpr()
{
    /* this is okay as i is initialized at compile time */
    constexpr int i = 1 + 2;

    int num = random();
    /* this is okay as j can be evaluated during runtime */
    const int j = num;

    /* this is not okay as k must be known at compile time */
    // constexpr int k = num;
}

int main()
{
    initialize_fixed_size_array();
    return 0;
}