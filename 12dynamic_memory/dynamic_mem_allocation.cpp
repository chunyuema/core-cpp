#include <iostream>
using namespace std;

void dynamic_allocation()
{
    int *p1 = new int;
    *p1 = 1000;
    cout << *p1 << endl;
    delete p1;

    int *p2 = new int(3);
    cout << *p2 << endl;
    delete p2;

    string *p3 = new string("chunyue");
    cout << *p3 << endl;
    delete p3;

    /* Use auto is allowed */
    auto *p4 = new auto("chunyue");
    cout << *p4 << endl;
    delete p4;

    /* Use const is allowed */
    const int *p5 = new const int(1024);
    cout << *p5 << endl;
    delete p5;
}

// void dynamic_allocation_array(){
//     int * array_ptr = new int[5];
//     array_ptr[4] = 1000;
//     cout << *(array_ptr + 4) << endl;
//     cout << array_ptr[4] << endl;
//     delete array_ptr;
// }

int main()
{
    // dynamic_allocation_array();
    dynamic_allocation();
}