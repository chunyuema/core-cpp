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

void unique_pointer_and_dynamic_array()
{
    size_t n = 5;
    unique_ptr<int[]> p(new int[n]{1, 2, 3, 4, 5});
    cout << "array = { ";
    for (size_t i = 0; i != n; ++i)
    {
        // Use subscript operator to access the element from the array
        cout << p[i] << " ";
    }
    cout << "}" << endl;
    // This will automatically call delete[] p to free the memory
    p.reset();
}

int main()
{
    // basic_dynamic_array();
    unique_pointer_and_dynamic_array();
    return 0;
}