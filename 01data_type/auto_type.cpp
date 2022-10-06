#include <cstdio>
#include <vector>
using namespace std;

void no_use_auto()
{
    vector<int> intVector = {1, 2, 3, 4, 5};
    for (vector<int>::iterator it = intVector.begin(); it != intVector.end(); it++)
    {
        printf("int is %d\n", *it);
    }
}

void use_auto()
{
    vector<int> intVector = {1, 2, 3, 4, 5};
    // simplify the code
    for (auto it = intVector.begin(); it != intVector.end(); it++)
    {
        printf("int is %d\n", *it);
    }
}

int main()
{
    // no_use_auto();
    use_auto();
}
