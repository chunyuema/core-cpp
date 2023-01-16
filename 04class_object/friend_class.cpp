#include <iostream>

using namespace std;

class Class1
{
    friend class Class1_manager;
    int x;

public:
    Class1(int x) : x(x) {}
    int get_x() { return x; }
    void set_x(int new_x) { x = new_x; }
};

/*
Note that class1 manager has access to the non public fields of class 1 because class 1 declared it as the friend class
*/
class Class1_manager
{
public:
    void display()
    {
        cout << "{ " << c1.x << " }" << endl;
    }

    void clear()
    {
        c1.x = 0;
    }

private:
    // class 1 manager manage this c1 object
    Class1 c1{1000000};
};

int main()
{
    Class1_manager cm;
    cm.display();
    cm.clear();
    cm.display();
    return 0;
}