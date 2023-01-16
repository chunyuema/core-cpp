#include <iostream>

using namespace std;

class A
{
    friend class A_manager;
    int x;

public:
    A(int x) : x(x) {}
    int get_x() { return x; }
    void set_x(int new_x) { x = new_x; }
};

/*
Note that class1 manager has access to the non public fields of class 1 because class 1 declared it as the friend class
*/
class A_manager
{
public:
    void display()
    {
        cout << "{ " << a.x << " }" << endl;
    }

    void clear()
    {
        a.x = 0;
    }

private:
    // class 1 manager manage this c1 object
    A a{1000000};
};

int main()
{
    A_manager m;
    m.display();
    m.clear();
    m.display();
    return 0;
}