#include <memory>
#include <iostream>

using namespace std;

// Initializing shared pointer with new is not recommended
void using_shared_ptr_with_new()
{
    /* You cannot convert a built in pointer into shared pointer */
    // shared_ptr<int> p1 = new int(1);

    /* If you'd like to use new, try direct initialization */
    shared_ptr<int> p2(new int(1));
}

int main()
{
    shared_ptr<string> p1 = make_shared<string>(5, 'c');
    if (p1)
        cout << "p1: { " << p1 << ": " << *p1 << " }" << endl;
    if (p1.unique())
        cout << "Unique pointer" << endl;
    else
        cout << "Non-unique pointer: " << p1.use_count() << endl;

    // p2 is also pointing to what p1 is pointing at
    auto p2(p1);

    if (p1.unique())
        cout << "Unique pointer" << endl;
    else
        cout << "Non-unique pointer: " << p1.use_count() << endl;
    return 0;
}