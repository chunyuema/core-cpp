#include <iostream>
using namespace std;

void reset_to_zero(int *ip)
{
    *ip = 0; // change the integer that ip points at to 0
    ip = 0;  // change only local copy of ip, argument is not changed
    cout << "local copy of ip =  " << ip << endl;
}

int main()
{
    int i = 42;
    int *ip = &i;
    cout << "i = " << i << endl;
    cout << "ip = " << ip << endl;
    reset_to_zero(ip);
    cout << "i = " << i << endl;
    cout << "ip = " << ip << endl;
    return 0;
}