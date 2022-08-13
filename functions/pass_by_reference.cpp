#include <iostream>
using namespace std;

// i is another name of what is passed into the function
void reset_to_zero_pass_by_reference(int &i)
{
    cout << "in the function, previously, i = " << i << endl;
    i = 0;
    cout << "in the function, after, i = " << i << endl;
}

int main()
{
    int i = 42;
    reset_to_zero_pass_by_reference(i);
    cout << "outside the function, after, i = " << i << endl;
    return 0;
}
