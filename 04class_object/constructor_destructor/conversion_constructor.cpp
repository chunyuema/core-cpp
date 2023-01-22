/*
Modified from https://learn.microsoft.com/en-us/cpp/cpp/user-defined-type-conversions-cpp?view=msvc-170#ConvCTOR
*/

#include <iostream>
using namespace std;

class Money
{

public:
    Money() : amount{0.0} {};
    Money(double _amount) : amount{_amount} {};
    Money(double _amount1, double _amount2) : amount(_amount1 + _amount2){};
    // Mark the method const so that it can be called by const objects
    double get_amount() const { return amount; }

private:
    double amount;
};

void display_balance(const Money balance)
{
    std::cout << "The balance is: " << balance.get_amount() << std::endl;
}

int main(int argc, char *argv[])
{
    // Create a Money object and then call the method
    Money payable{79.99};
    display_balance(payable);

    // Directly converting double into Money objects
    display_balance(49.95);
    display_balance(9.99f);

    // Directly converting double double into Money object
    display_balance({50.87, 87.90});
    return 0;
}