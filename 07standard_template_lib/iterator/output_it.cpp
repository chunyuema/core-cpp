#include <iostream>
#include <iterator>
using namespace std;

void output_it_for_printing()
{
    ostream_iterator<int> output(cout, " ");
    for (int i : {1, 2, 3, 4})
    {
        *output++ = i;
    }
    cout << endl;
}

int main()
{
    output_it_for_printing();
    return 0;
}