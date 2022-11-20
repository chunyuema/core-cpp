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

// another animal class as the base class
class Animal2
{
    string _color;
    Animal2() {}

protected:
    Animal2(const string &c) : _color(c){};

public:
    const string &color() const { return _color; }
};

// dog class derives from animal and animal2 class
class Dog : public Animal, public Animal2
{
    int _walked = 0;

public:
    // here need constructor for both
    Dog(string n) : Animal(n, "dog", "woof"), Animal2("red"), _walked(0){};
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
    cout << "The color of the dog is " << d.color() << endl;
}