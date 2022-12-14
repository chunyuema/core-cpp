#include <cstdio>

/* The const a in the function below is initialized during compile time and cannot be changed */
void initialize_at_compile_time()
{
    /* the const is top level const since it indicates the object is const */
    const int a = 34;
    printf("a = %d\n", a);
}

int get_num()
{
    return 34;
}

/* The const a in the function below is initialized during runtime with get_num() and cannot be changed */
void initialize_at_runtime()
{
    const int a = get_num();
    printf("a = %d\n", a);
}

int main()
{
    initialize_at_compile_time();
    initialize_at_runtime();
    return 0;
}
