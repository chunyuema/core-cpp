#include <iostream>
#include <iomanip>
using namespace std;

class CashRegister{
    public: 
        void clear();
        void add_item(double price);

        // use const for accessor methods
        double get_total() const;
        int get_count() const;
    
    private: 
        int item_count; 
        int total_price;
};

void CashRegister::clear(){
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
    CashRegister r1;
    // this will display some random data
    display(r1);
    r1.clear();
    r1.add_item(1.95);
    display(r1);
    r1.add_item(2.86);
    display(r1);
    return 0; 
}