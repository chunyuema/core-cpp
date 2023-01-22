#include <iostream>

using namespace std;

struct My_class
{

    /* Definition of non const static data members need to be outside the class */
    static int y;
    /* The following line works only with C++17 */
    // inline static int x = 1;

    /* Const static memebers can be initialized from within the class */
    const static int z = 9;
    const static int p{10};
    constexpr static int arr1[] = {1, 2, 3};
    constexpr static int arr2[] = {z, p};
};

/* Definition of static data members need to be outside the class */
int My_class::y = 8;

int main()
{
    return 0;
}