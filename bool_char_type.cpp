#include <iostream>
using namespace std;

int strlength(const char s[]){
    int i = 0; 
    while (s[i] != '\0') { i++; }
    return i; 
}

void c_string(){
    const char* char_pointer = "Harry"; // pointer that points to H
    cout << char_pointer << endl; // this is equivalent as printing the string
    cout << *char_pointer << endl; // dereference the char pointer, which gives H
    int len = strlength(char_pointer);
    cout << len << endl;
}

void c_char_arrays(){
    const char char_array[] = "Harry";
    cout << char_array << endl;
    cout << *char_array << endl;
    int len = strlength(char_array);
    cout << len << endl;
}

void cpp_string(){
    string name = "Harry";
    cout << name << endl; 
    cout << &name << endl;
    cout << name.length() << endl;
    cout << name.substr(3, 1) << endl; 
}

int main(){
    // bool bValue = true;
    // cout << "Boolean values are stored in 1 or 0: " << bValue << endl;

    // cout << "Size of the char: " << sizeof(char) << endl;
    // cout << "Size of the wchar_t: " << sizeof(wchar_t) << endl;
    // char cValue = 55;
    // cout << "55 corresponds to the " << cValue << " in ACSII table" << endl;
    // cout << "Converting 55 from ACSII to integer: " << (int)cValue << endl;

    // char cValue1 = '7';
    // cout << cValue1 << endl;

    // c_string();
    // c_char_arrays();
    cpp_string();
}

