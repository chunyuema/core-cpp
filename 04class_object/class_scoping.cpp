#include <iostream>
#include <string>

using namespace std;

/* this msg will not be used by the class S */
string msg = "chunyue from the outside world";

class S
{
private:
    string msg = "chunyue from the inside world";

public:
    void
    dummy(string msg)
    {
        /* this msg will refer to the parameter */
        cout << msg << endl;
    }

    void dummy2()
    {
        /* this msg will refer to the data member msg */
        cout << msg << endl;
    }

    void dummy3()
    {
        /* forcefully using the global scope */
        cout << ::msg << endl;
    }
};

int main()
{
    S s;
    s.dummy("chunyue from the function world");
    s.dummy2();
    s.dummy3();
    return 0;
}