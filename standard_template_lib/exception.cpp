#include <iostream>
#include <exception>
using namespace std;

class CustomizeMsgException : public exception
{
    const char *msg;
    CustomizeMsgException();

public:
    CustomizeMsgException(const char *s) noexcept(true) : msg(s) {}
    const char *what() const noexcept(true) { return msg; }
};

void throw_exception()
{
    cout << "Throwing an exception" << endl;
    throw exception();
}

void throw_customized_excpetions()
{
    const CustomizeMsgException ouch("ouch");
    cout << "Throwing an exception" << endl;
    throw ouch;
}

int main()
{
    try
    {
        // throw_exception();
        throw_customized_excpetions();
    }
    catch (exception &e)
    {
        cout << e.what() << endl;
    }
}