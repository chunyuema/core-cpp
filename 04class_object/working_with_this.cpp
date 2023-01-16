#include <iostream>
#include <string>

using namespace std;

class My_class
{
    string name;
    int x;

public:
    My_class(string name, int x) : name(name), x(x){};

    string get_name() { return name; }

    int get_x() { return x; }

    inline void set_name(string new_name) { name = new_name; }

    inline void set_x(int new_x) { x = new_x; }

    inline My_class &set_name_w_this(string new_name)
    {
        name = new_name;
        return *this;
    }

    inline My_class &set_x_w_this(int new_x)
    {
        x = new_x;
        return *this;
    }
};

int main()
{
    My_class c1{"chunyue", 0};
    cout << "{ " << c1.get_name() << ", " << c1.get_x() << " }" << endl;

    /*
    You need to set the name and x separately if you are working with My_class member functions that do not return *this
    */

    c1.set_name("chunyue1");
    c1.set_x(1);
    cout << "{ " << c1.get_name() << ", " << c1.get_x() << " }" << endl;

    /*
    You can chain methods together if you use member functions that will be able to return *this
    */
    c1.set_name_w_this("chunyue2").set_x_w_this(2);
    cout << "{ " << c1.get_name() << ", " << c1.get_x() << " }" << endl;

    return 0;
}