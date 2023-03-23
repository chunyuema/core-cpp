#include <iostream>
#include <vector>
#include "../print_containers.h"
using namespace std;

int main()
{
    vector<int> v1;

    auto pushinto = [&](int i)
    { v1.push_back(i); };

    for (int i = 0; i < 10; i++)
    {
        // reusing the lambda expression here
        pushinto(i);
    }

    pushinto(10087);

    print_vector("final v1", v1);

    return 0;
}