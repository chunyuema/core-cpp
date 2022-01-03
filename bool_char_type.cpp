#include <iostream>
using namespace std;

int main(){
    bool bValue = true;
    cout << "Boolean values are stored in 1 or 0: " << bValue << endl;

    cout << "Size of the char: " << sizeof(char) << endl;
    cout << "Size of the wchar_t: " << sizeof(wchar_t) << endl;
    char cValue = 55;
    cout << "55 corresponds to the " << cValue << " in ACSII table" << endl;
    cout << "Converting 55 from ACSII to integer: " << (int)cValue << endl;

    char cValue1 = '7';
    cout << cValue1 << endl;
}

