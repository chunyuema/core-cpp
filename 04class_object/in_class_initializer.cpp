#include <iostream>
#include <string>

using namespace std;

/*
    Below are 2 ways of adding the in-class initializer
*/
struct My_class
{
    string name1 = "chunyue";
    string name2{"chunyue"};
};

int main()
{
    My_class c;

    cout << c.name1 << endl;
    cout << c.name2 << endl;

    return 0;
}