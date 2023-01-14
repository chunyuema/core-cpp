#include <iostream>
#include <string>

using namespace std;

struct Person
{
    // constructors
    Person() = default;

    /* You are leaving the age to the constructor to initialize */
    Person(const string &s) : name(s) {}

    Person(const string &s, const int &i) : name(s), age(i) {}

    // data member
    string name;
    int age;
};

int main()
{
    Person p0;
    cout << "Person 0, name: " << p0.name << " ; age: " << p0.age << endl;

    Person p1("chunyue1");
    cout << "Person 1, name: " << p1.name << " ; age: " << p1.age << endl;

    Person p2("chunyue2", 24);
    cout << "Person 2, name: " << p2.name << " ; age: " << p2.age << endl;
}