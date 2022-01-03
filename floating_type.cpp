#include <iostream>
#include <iomanip>
using namespace std;

int float_basics(){
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

int comparing_floats(){
    float value = 1.1;
    if (value == 1.1) {
        cout << "value is equal to 1.1" << endl;
    } else {
        cout << "value is not equal to 1.1" << endl;
    }
    cout << "Since the float is never stored exactly as it is, using == for comparison will yield unexpected results" << endl;
    return 0;
}


int main(){
    comparing_floats();
}