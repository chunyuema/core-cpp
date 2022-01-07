#include <iostream>
#include <iomanip>
using namespace std;

class CashRegister{
    public: 
        // use a constructor;
        CashRegister();
        void add_item(double price);

        // use const for accessor methods
        double get_total() const;
        int get_count() const;
    
    private: 
        int item_count; 
        double total_price;
};

CashRegister::CashRegister(){
    item_count = 0; 
    total_price = 0;
};

void CashRegister::add_item(double price){
    item_count ++; 
    total_price += price;
};

int CashRegister::get_count() const {
    return item_count;
};

double CashRegister::get_total() const {
    return total_price;
};

void display(CashRegister reg){
    cout << reg.get_count() << " $" << fixed << setprecision(2) << reg.get_total() << endl;
}

int main(){
    // constructor is automatically invoked; it cannot be called by the object
    CashRegister r1;
    // this will not display some random data
    display(r1);
    r1.add_item(1.95);
    display(r1);
    r1.add_item(2.86);
    display(r1);

    // using pointers and dynamic allocation of memory
    CashRegister* reg_pointer = new CashRegister;
    display(*reg_pointer);
    (*reg_pointer).add_item(4.56);
    display(*reg_pointer);
    reg_pointer -> add_item(1.67);
    display(*reg_pointer);
    delete reg_pointer;
    return 0; 
}