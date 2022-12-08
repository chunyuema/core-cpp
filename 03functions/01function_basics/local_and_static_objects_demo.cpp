/*
    In C++, function parameters are automated objects. They only exist while the block is executing, and go out of scope when the function terminates

    Using static, we can avoid this issue. This program demostrates how local static objects's lifetime can persist through the calls to the function
*/
#include <cstdio>
using namespace std;

/* ctr is cleared everytime, so you only see 1 everytime */
void count_number_of_calls_non_static()
{
    size_t ctr = 0;
    printf("[Non static] Being called %zu times \n", ++ctr);
}

/* ctr is persisted, so you see it increasing if called multiple times */
void count_number_of_calls_static()
{
    static size_t ctr = 0;
    printf("[Static] Being called %zu times \n", ++ctr);
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        count_number_of_calls_non_static();
        count_number_of_calls_static();
    }
}
