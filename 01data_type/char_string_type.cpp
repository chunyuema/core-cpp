#include <cstdio>

int main()
{
    // declare as const char pointer
    const char *cstring = "mystring";
    puts(cstring);
    const char *anotherCString = "string1"
                                 "string2";
    puts(anotherCString);
    return 0;
}