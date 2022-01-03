#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << "Size of float: " << sizeof(float) << endl;
    cout << "Size of double: " << sizeof(double) << endl;
    cout << "Size of long double: " << sizeof(long double) << endl;

    float fValue = 76.4;
    cout << fValue << endl;
    // after some point, you are basically just having garbage data
    cout << fixed << fValue << endl;
    cout << setprecision(20) << fValue << endl;
    cout << scientific << fValue << endl;

    double dValue = 76.4;
    // get more precision but after some point, it still just gives out garbage
    cout << setprecision(20) << dValue << endl;

    return 0;
}