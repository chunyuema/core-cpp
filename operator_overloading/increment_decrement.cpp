#include <iostream>
#include <list>
#include <vector>
using namespace std;

void prefix_postfix_add(){
    int j = 9; 
    cout << "j++ return j before increment " << j++ << endl;

    j = 9; 
    cout << "++j return j after increment " << ++j << endl; 

    j = 9;
    j++; 
    cout << j << endl;

    j = 9; 
    ++j;
    cout << j << endl;
}

double list_sum_pointer(double data[], int size){
    double* start = data;
    double* end = start + size;
    double sum = 0;
    while (start != end){
        sum += *start;
        start ++;
    }
    return sum;
}


double list_sum_iterator(list<double>& data){
    list<double>::iterator start = data.begin();
    list<double>::iterator end = data.end();
    double sum = 0;
    while (start != end){
        sum += *start;
        start ++;
    }
    return sum;
}

int main(){
    // prefix_postfix_add();
    double data[] = {1, 2, 3, 4};
    double sum = list_sum_pointer(data, 4); 
    cout << sum << endl;

    list<double> data1 = {1, 2, 3, 4};
    double sum1 = list_sum_iterator(data1);
    cout << sum1 << endl;

    vector<double> data2 = {1, 2, 3, 4};
    double sum2 = 0; 
    vector<double>::iterator start = data2.begin();
    vector<double>::iterator end = data2.end(); 
    while (start != end){
        sum2 += *start; 
        start ++;
    }
    cout << sum2 << endl;
}