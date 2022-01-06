#include <iostream>
using namespace std;

struct StreetAddress
{
    string house_number; 
    string street_name;
};

struct Employee
{
    string name;
    StreetAddress* office;
};

void basic_pointer(){
    double my_account = 0; 
    double your_account = 0;
    double* account_pointer = &my_account;
    *account_pointer = 1000;
    account_pointer = &your_account;
    *account_pointer = 1500;
    *account_pointer -= 250;
    cout << "my account: " << my_account << endl;
    cout << "your account: " << your_account << endl;
    cout << "your account: " << *account_pointer << endl;
    cout << "where in memory is your account: " << account_pointer << endl;

    double *null_pointer = NULL;
    cout << "what is null pointer pointing at: " << null_pointer << endl;
    cout << "what is in null pointer: " << *null_pointer << endl;
}

double sum1(double*a, int size){
    double total = 0; 
    for (int i = 0; i < size; i++){
        total += a[i];
    }
    return total;
}

// sum2 has double a[], which is a syntatic sugar for double* a;
double sum2(double a[], int size){
    double total = 0;
    for (int i = 0; i < size; i++){
        total += a[i];
    }
    return total;
}

// use pointer to step through an array (tiny bit more efficient)
double sum3(double* a, int size){
    double total = 0;
    double* p = a; 
    for (int i = 0; i < size; i++){
        total += *p;
        p ++; 
    }
    return total;
}

void array_pointer(){
    // array pointer duality
    int a[] = {1, 2, 3, 4};
    cout << "print a will give out the address of the first element: " << a << endl;
    int* array_pointer = a;
    cout << *a << endl;
    cout << a[0] << endl;
    cout << *(array_pointer + 3) << endl;
    cout << a[3] << endl;

    double data[] = {1, 2, 3, 4};
    double total = sum1(data, 4);
    double total2 = sum2(data, 4);
    double total3 = sum3(data, 4);
    cout << total << endl;
    cout << total2 << endl;
    cout << total3 << endl;
}

void structure_pointer(){
    StreetAddress accounting;
    accounting.house_number = "1729";
    accounting.street_name = "Park Avenue";

    Employee harry;
    harry.name = "Harry";
    harry.office = &accounting;

    StreetAddress* admin_pointer = new StreetAddress;
    (*admin_pointer).house_number = "1600";
    admin_pointer -> street_name = "Main St";

    Employee emily;
    emily.name = "Emily Cooper";
    emily.office = admin_pointer;
}

int main(){
    // basic_pointer();
    array_pointer();
    return 0;
}