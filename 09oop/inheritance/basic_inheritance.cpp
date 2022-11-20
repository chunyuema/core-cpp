#include <iostream>
#include <string>
using namespace std;

// animal class is the base class
class Animal
{
    string _name;
    string _type;
    string _sound;

    // private constructor to prevent initalization of the base class
    Animal() {}

    // available only to the derived class
protected:
    Animal(const string &n, const string &t, const string &s) : _name(n), _type(t), _sound(s) {}

    // avaialble to all
public:
    void speak() const;
    const string &name() const { return _name; }
    const string &type() const { return _type; }
    const string &sound() const { return _sound; }
};

void Animal::speak() const
{
    printf("%s the %s says %s\n", _name.c_str(), _type.c_str(), _sound.c_str());
}

// dog class derives from animal class
class Dog : public Animal
{
    int _walked = 0;

public:
    Dog(string n) : Animal(n, "dog", "woof"), _walked(0){};
    int walk() { return ++_walked; };
};

int main()
{
    // The code in line below will be illegal as the constructor is declared as private
    // Animal a;

    // The code in the line below is illegal as the constructor is only available for derived classes
    // Animal a("Ray", "dog", "woof");

    Dog d("Ray");
    // calling the method defined in the base class
    d.speak();
    cout << "The " << d.type() << " has been walked " << d.walk() << " times" << endl;
}