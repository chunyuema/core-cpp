#include <memory>
#include <iostream>

using namespace std;

void no_effect_on_counter()
{
    shared_ptr<int> p1 = make_shared<int>(3);
    cout << "p1 is pointing at {" << p1 << " : " << *p1 << "} with counter = " << p1.use_count() << endl;

    auto p2(p1);
    cout << "p2 is pointing at {" << p2 << " : " << *p2 << "} with counter = " << p2.use_count() << endl;

    /* No effect on the counter */
    weak_ptr<int> p3(p1);
    cout << "counter = " << p3.use_count() << endl;
}

void lock_before_use()
{
    shared_ptr<int> p1 = make_shared<int>(3);
    weak_ptr<int> p2(p1);
    if (shared_ptr<int> copy_pointer = p2.lock())
    {
        cout << "p2 is pointing at {" << copy_pointer << " : " << *copy_pointer << "} with counter = " << p2.use_count() << endl;
    }
    else
    {
        cout << "p2 has expired." << endl;
    }
}

int main()
{
    no_effect_on_counter();
    lock_before_use();
    return 0;
}