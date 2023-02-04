#include <iostream>

using namespace std;

void print_dynamic_array(size_t n, int *p)
{
    cout << "array = { ";
    for (int *q = p; q != p + n; ++q)
    {
        cout << *q << " ";
    }
    cout << "}" << endl;
}

void basic_dynamic_array()
{
    size_t n = 5;
    int *p = new int[n];
    print_dynamic_array(n, p);
    delete[] p;

    int *q = new int[n]{1, 2, 3, 4, 5};
    print_dynamic_array(n, q);
    delete[] q;
}

int main()
{
    basic_dynamic_array();
    return 0;
}