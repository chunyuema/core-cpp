#include <iostream>
using namespace std;

int main(){
    int numberCats = 5;
    int numberDogs = 7;
    int numberAnimals = numberDogs + numberCats;

    cout << "Hello World! Number of cats: " << numberCats << endl;
    cout << "Total number of animals: " << numberAnimals << endl;
    numberDogs = numberDogs + 1;
    cout << "New number of dogs: " << numberDogs << endl;
    return 0;
}