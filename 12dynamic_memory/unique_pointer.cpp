#include <memory>
#include <iostream>

using namespace std;

void transfer_ownership()
{
    unique_ptr<int> p1(new int(2));
    cout << "p1 is pointing to: " << p1 << " : " << *p1 << endl;

    unique_ptr<int> p2(p1.release());
    cout << "p2 is pointing to: " << p2 << " : " << *p2 << endl;

    if (!p1)
    {
        cout << "p1 is now null a pointer" << endl;
    }

    unique_ptr<int> p3(new int(4));
    cout << "p3 is pointing to: " << p3 << " : " << *p3 << endl;
    p2.reset(p3.release());
    cout << "p2 is pointing to: " << p2 << " : " << *p2 << endl;

    if (!p3)
    {
        cout << "p3 is now null a pointer" << endl;
    }
}

int main()
{
    transfer_ownership();
    return 0;
}