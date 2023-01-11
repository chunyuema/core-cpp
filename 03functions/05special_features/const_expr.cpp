#include <cstdio>

using namespace std;

constexpr int new_sz() { return 3; }

constexpr size_t scale(size_t cnt) { return new_sz() * cnt; }

int main()
{
    printf("Creating an array of size 3 \n");
    int arr[new_sz()];

    printf("Creating an array of size 6 \n");
    int arr2[scale(2)];
}
