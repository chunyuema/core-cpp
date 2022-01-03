#include <iostream>
using namespace std;

int main(){
    // flush does not go into a new line
    cout << "Starting the program..." << flush;
    // endl breaks into a new line
    cout << "This is some text." << endl;
    cout << "Banana. " << "Apple. " << "Orange. " << endl;
    cout << "Here is some more text" << endl;
    return 0;
}