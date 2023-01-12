#include <iostream>
#include <string>

using namespace std;

void dummy_function()
{
    cout << "Hello World" << endl;
}

bool is_longer_string(const string &s1, const string &s2)
{
    return s1.size() > s2.size();
}

int main()
{

    void (*func_ptr1)();
    void (*func_ptr2)();

    /*
        Both are valid ways of assigning function pointers
    */
    func_ptr1 = dummy_function;
    func_ptr2 = &dummy_function; // more complicated

    /*
        Both are valid ways of calling the function
    */
    func_ptr1();
    (*func_ptr2)(); // more complicated

    /*
        The following func_ptr3 is a pointer to function with parameters
    */
    bool (*func_ptr3)(const string &, const string &);
    func_ptr3 = is_longer_string;
    cout << (func_ptr3("hey", "hi") ? "longer" : "shorter") << endl;
    cout << ((*func_ptr3)("hi", "hey") ? "longer" : "shorter") << endl;
    return 0;
}