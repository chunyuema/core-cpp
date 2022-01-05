#include <iostream>
using namespace std;

void while_loop(){
    int i = 0;
    while (i <= 10) {
        cout << i << ": Hello World!" << endl;
        i++;
    }
    cout << "The final value of i is: " << i << endl;

    // while loop getting the user's input
    const string password = "hello";
    string input; 
    cout << "Enter your password > " << flush;   
    cin >> input; 
    while (input != password) {
        cout << "Access denied! Enter your password > " << flush;   
        cin >> input; 
    };
    cout << "Password accepted ==> Logged In" << endl;
}


void do_while_loop(){
    int value = 7;
    do {
        cout << "Hello" << endl;
    } while(value < 6);

    // use do while loop feature
    const string password = "hello";
    string input; 
    do {
        cout << "Enter your password > " << flush;   
        cin >> input; 
        if (input != password) cout << "Accessed Denied!" << flush;
    } while (input != password);
    cout << "Password accepted ==> Logged In" << endl;

}


void for_loop(){
    for (int i = 0; i <= 5; i++){
        cout << i << ": Hello World!" << endl; 
    }
}

int main(){
    // while_loop();
    // do_while_loop();
    for_loop();
    return 0;
}