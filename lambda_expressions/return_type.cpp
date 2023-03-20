#include <iostream>
#include <vector>
#include "../print_containers.h"

using namespace std;

void no_return_type()
{
    vector<int> intVec = {1, -1, 2, -2, 3, -3};
    transform(intVec.begin(), intVec.end(), intVec.begin(),
              [](int i)
              { return i < 0 ? -i : i; });
    print_vector("intVec", intVec);
}

void return_type()
{
    vector<int> intVec = {1, -1, 2, -2, 3, -3};
    transform(intVec.begin(), intVec.end(), intVec.begin(),
              [](int i) -> int
              { if (i<0) return -i ; else return i; });
    print_vector("intVec", intVec);
}

int main()
{
    no_return_type();
    return_type();
    return 0;
}