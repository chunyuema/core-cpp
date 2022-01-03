#include <iostream>
using namespace std;

int main(){
    string text = "Hello";
    cout << text << endl;
    cout << "Enter your name: " << flush;
    // declare a variable to hold the user input
    string user_input;
    // read in from the user's input to the variable
    cin >> user_input;
    cout << "You entered: " << user_input << endl;

    int value;
    cout << "Enter a number: " << flush;
    cin >> value;
    cout << "You entered: " << value << endl;
}