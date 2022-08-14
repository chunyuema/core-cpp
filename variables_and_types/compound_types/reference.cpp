#include <iostream>
using namespace std;

void reference_as_alias()
{
    int val = 1024;
    cout << "val = " << val << endl;
    int &refVal = val;
    cout << "refVal = " << refVal << endl;
    refVal = 2048;
    cout << "val = " << val << endl;
}

int main()
{
    reference_as_alias();
}