#include <iostream>
#include <string>

using namespace std;

class Product
{
public:
    double get_total_revenue() { return revenue; }
    string get_product_name() { return product_name; }
    friend istream &operator>>(istream &is, Product &p);

private:
    string product_name;
    int unit;
    double revenue;
};

istream &operator>>(istream &is, Product &p)
{
    double price;
    is >> p.product_name >> p.unit >> price;
    // Check if is in good state
    if (is)
    {
        p.revenue = p.unit * price;
    }
    else
    {
        cout << "Something went wrong while reading, return empty Product" << endl;
        p = Product();
    }
    return is;
};

int main()
{
    Product p;
    cout << "Enter product name, unit, and price: \n";
    cin >> p;
    cout << "[ " << p.get_product_name() << ": " << p.get_total_revenue() << " ]" << endl;
}

/*
Enter product name, unit, and price:
apple 8 0.87
[ apple: 6.96 ]
*/