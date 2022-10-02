#include <cstdio>

void c_for_loop()
{
    int array[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        printf("Element %d is %d\n", i, array[i]);
    }

    char s[] = "mystring";
    for (char *p = s; *p; ++p)
    {
        printf("Char is %c\n", *p);
    }
}

void cpp11_range_based_for_loop()
{
    int array[] = {1, 2, 3, 4, 5};
    for (int i : array)
    {
        printf("i is %d\n", i);
    }

    char s[] = "mystring";
    for (char c : s)
    {
        // this line is necessary to test for null terminator
        if (c == 0)
            break;
        printf("c is %c\n", c);
    }
}

int main()
{
    // c_for_loop();
    cpp11_range_based_for_loop();
    return 0;
}
