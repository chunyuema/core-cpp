#include <iostream>
using namespace std;

int if_else_switch(){
    string password = "hello";
    cout << "Enter your password > " << flush;
    string user_input;
    cin >> user_input;

    cout << "The user entered: " << user_input << endl;

    if (user_input == password) {
        cout << "The password is correct!" << endl;
    } else {
        cout << "The password is not correct!" << endl;
    }
    return 0;
}

int multiple_switch(){
    cout << "1.\t Add a record." << endl;
    cout << "2.\t Delete a record." << endl;
    cout << "3.\t View a record." << endl;
    cout << "4.\t Search a record." << endl;
    cout << "5.\t Quit." << endl;
    cout << "Enter your selection: " << flush;

    int value;
    cin >> value;
    if (value == 1){
        cout << "Adding a record now...." << endl;
    } else if (value == 2){
        cout << "Deleting a record now...." << endl;
    } else if (value == 3){
        cout << "Viewing a record now..." << endl;
    } else if (value == 4){
        cout << "Searching for a record..." << endl;
    } else {
        cout << "Quiting!" << endl;
    }
}

int main(){
    // if_else_switch();
    multiple_switch();
    return 0;
}