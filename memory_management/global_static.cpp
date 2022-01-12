#include <iostream>

using namespace std;

int global_count = 0;

int count_global(){
    global_count ++; 
    return global_count;
}

int count_static(){
    static int static_count = 0;
    static_count ++; 
    return static_count;
}

int main(){
    for (int i = 0; i < 5; i ++){
        cout << "count global: " << count_global() << endl;
        cout << "count static: " << count_static() << endl;
    };
}