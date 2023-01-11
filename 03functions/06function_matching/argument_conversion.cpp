#include <iostream>

using namespace std;

void f1(int i) { cout << "f1(int) is called with " << i << endl; }

int main()
{
    /*
    You will get the following warning: implicit conversion from 'double' to 'int' changes value from 9.68 to 9 [-Wliteral-conversion]
    */
    f1(9.68);

    /*
    Character is automatically promoted to an integer
    */
    f1('a');

    return 0;
}