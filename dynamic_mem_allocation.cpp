#include <iostream>
using namespace std;

void dynamic_allocation_int(){
    int * var_ptr = new int; 
    *var_ptr = 1000;
    cout << *var_ptr << endl; 
    delete var_ptr;
}

void dynamic_allocation_array(){
    int * array_ptr = new int[5]; 
    array_ptr[4] = 1000;
    cout << *(array_ptr + 4) << endl;
    cout << array_ptr[4] << endl; 
    delete array_ptr;
}

int main(){
    dynamic_allocation_array(); 
    dynamic_allocation_int();
}