#include <iostream>
#include <vector>

using namespace std;

class A
{
    /* If my_data looks like this, you could be getting your desired behavior */
    // int my_data[5] = {1, 2, 3, 4, 5};

    /*
    However, if my_data is initialized with dynamic memory allocation, when copy constructor / copy assignment operator is used, the pointer actually towards the same vector in all the three objects we created. As a result, operations on one object could be affecting the other two. This therefore might result in fatal errors.
    */
    int *my_data = new int[5];

public:
    void set_data_by_index(int i, int val)
    {
        my_data[i] = val;
    }

    int get_data_by_index(int i)
    {
        return my_data[i];
    }
};

int main()
{
    A obj1;
    cout << obj1.get_data_by_index(3) << endl;

    A obj2 = obj1;
    obj2.set_data_by_index(3, 1000);
    cout << obj2.get_data_by_index(3) << endl;
    cout << obj1.get_data_by_index(3) << endl;

    A obj3(obj1);
    cout << obj3.get_data_by_index(3) << endl;
    obj3.set_data_by_index(3, 9999);
    cout << obj3.get_data_by_index(3) << endl;
    cout << obj2.get_data_by_index(3) << endl;
    cout << obj1.get_data_by_index(3) << endl;
}