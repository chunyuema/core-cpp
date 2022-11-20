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
    // tells compiler that this method might be over written
    virtual void speak() const;
    const string &name() const { return _name; }
    const string &type() const { return _type; }
    const string &sound() const { return _sound; }
    // need to have a virtual destructor
    virtual ~Animal(){};
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
    void speak() const
    {
        Animal::speak();
        puts("WOOOOOOF");
    }
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

    // d2 is a dog but with Animal class, but calling
    Animal d2 = d;
    d2.speak(); // WOOOOOF wont be printed here

    Animal *d3 = &d;
    d3->speak(); // WOOOOOF will be printed here
}