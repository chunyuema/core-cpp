#include <iostream>
using namespace std;

class Bar
{
    int x;

public:
    /*
        Note that we did not create a copy constructor for Bar, but there is an implicit copy constructor generated for it.
    */
    Bar(int val) : x(val){};
    int get_x() { return x; }
};

class Foo
{
private:
    int x;

public:
    /* This is the default constructor */
    Foo()
    {
        printf("Default constructor is beding called \n");
    }

    Foo(int x1)
    {
        x = x1;
    }

    /* Copy constructor */
    Foo(const Foo &f)
    {
        printf("Copy constructor is being called \n");
        x = f.x;
    }
};

/* Parameters have a nonreference type are copy initialized */
void copy_initialize_parameter(Foo f)
{
    return;
}

/* Return value is used to copy initialize the result of the call operator
   TODO: Check if this is the correct understanding
*/
Foo copy_return(Foo f)
{
    return f;
}

int main()
{
    Bar bar1(4);
    Bar bar2 = bar1; // This is possible with synthesized copy constructor
    cout << "bar2 = { x: " << bar2.get_x() << " }" << endl;

    /* This will use the default constructor */
    Foo f1;
    Foo f2(3);
    /* This will use the copy constructor */
    Foo f3 = f2;

    // copy_initialize_parameter(f2);
    // copy_return(f3);
}