#include <iostream>
using namespace std;

int main()
{
    char c = 'a';
    cout << "character = " << c << "; its address = " << &c << endl;

    // Change the content in the original memory address
    char *pc = new (&c) char('A');
    cout << "character = " << c << "; its address = " << pc << endl;

    cout << "pc == &c: " << (pc == &c) << endl;
}