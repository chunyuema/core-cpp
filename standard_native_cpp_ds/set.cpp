#include <iostream>
#include <set>
using namespace std;

void set_basics()
{
    set<string> names;
    names.insert("Romeo");
    names.insert("Juliet");
    names.insert("Juliet");
    names.erase("Juliet");
    cout << "Number of Romeo: " << names.count("Romeo") << endl;
    cout << "Number of Juliet: " << names.count("Juliet") << endl;
    names.insert("Bob");
    names.insert("Mary");
    names.insert("Jane");

    set<string>::iterator pos;
    for (pos = names.begin(); pos != names.end(); pos++)
    {
        cout << "Name: " << *pos << endl;
    }
}

void multiset_basics()
{
    multiset<string> names;
    names.insert("Romeo");
    names.insert("Juliet");
    names.insert("Juliet");
    names.insert("Juliet");
    cout << "Number of Romeo: " << names.count("Romeo") << endl;
    cout << "Number of Juliet: " << names.count("Juliet") << endl;
    names.erase("Juliet");
    cout << "Number of Juliet after erase: " << names.count("Juliet") << endl;
    names.insert("Bob");
    names.insert("Mary");
    names.insert("Mary");
    names.insert("Jane");

    multiset<string>::iterator pos;
    for (pos = names.begin(); pos != names.end(); pos++)
    {
        cout << "Name: " << *pos << endl;
    }
}

int main()
{
    // set_basics();
    // multiset_basics();

    return 0;
}