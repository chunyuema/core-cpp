#include <iostream>
using namespace std;

void withdraw(double& balance, double amount){
    const double penalty = 10; 
    if (balance >= amount) {
        balance = balance - amount;
    } else {
        if (balance < 10) balance = 0; 
        else balance -= penalty;
    }
}

void withdraw2(double balance, double amount){
    const double penalty = 10; 
    if (balance >= amount) {
        balance = balance - amount;
    } else {
        if (balance < 10) balance = 0; 
        else balance -= penalty;
    }
}

int main(){
    double chunyue_account = 1000;
    double qiushi_account = 1500;
    withdraw(chunyue_account, 900);
    withdraw(qiushi_account, 1200);
    cout << "chunyue's account balance: " << chunyue_account << endl;
    cout << "qiushi's account balance: " << qiushi_account << endl;

    withdraw2(chunyue_account, 900);
    withdraw2(qiushi_account, 1200);
    cout << "chunyue's account balance: " << chunyue_account << endl;
    cout << "qiushi's account balance: " << qiushi_account << endl;
    return 0; 
}