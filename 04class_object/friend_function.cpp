#include <iostream>

class B;

class B_manager
{
public:
    void set_b(int new_b);
    int get_b();
};

class B
{
private:
    int _b;

    /*
    The below methods are declared as friend, therefore, they are able to access B's private field even though they are defined on B_manager
    */
    friend int B_manager::get_b() { return _b; }

    friend void B_manager::set_b(int new_b)
    {
        _b = new_b;
    };
};