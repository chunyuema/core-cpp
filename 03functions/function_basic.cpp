#include <iostream>
using namespace std;

size_t count_calls()
{
    // static variable gets destroyed at the end of the point
    static size_t ctr = 0;
    return ++ctr;
}

int main()
{
    for (size_t i = 0; i != 10; i++)
    {
        cout << count_calls() << endl;
    }
}