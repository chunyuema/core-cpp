#include <iostream>
#include <string>

template <typename T>
T maxof(T a, T b)
{
    return (a > b ? a : b);
}

int main()
{
    std::cout << maxof<int>(7, 9) << std::endl;
    // c string
    std::cout << maxof<const char *>("chunyue", "bobby") << std::endl;
    // string
    std::cout << maxof<std::string>("chunyue", "bobby") << std::endl;
    // template argument deduction
    std::cout << maxof(7, 9) << std::endl;
    return 0;
}