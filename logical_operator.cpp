#include <iostream>
using namespace std;

int main(){
    int v1 = 7; 
    int v2 = 8;
    if (v1 > v2) {cout << "v1 is larger than v2" << endl;}

    if (v1 == 7 && v2 == 4) {
        cout << "Both conditions are true" << endl;
    } else {
        cout << "One or more condition is false" << endl;
    }

    if (v1 == 8 || v2 == 4) {
        cout << "One or more condition is true" << endl;
    } else {
        cout << "All conditions are false" << endl;
    }


    bool condition = (v2 != 8) && (v1 == 10);
    cout << condition << endl;
    bool condition2 = condition;
    cout << condition2 << endl;

    return 0;
}