#include <string>
#include <list>
#include <iostream>

using namespace std;

void list_basic()
{
    list<string> names;
    names.push_back("Chunyue");
    names.push_back("Harry");
    names.push_back("Roy");

    list<string>::iterator pos;
    pos = names.begin();
    pos++;
    pos++;
    names.insert(pos, "Romeo");

    pos = names.begin();
    pos++;
    names.erase(pos);

    for (pos = names.begin(); pos != names.end(); pos++)
        cout << *pos << " ";
    cout << endl;
}

int main()
{
    list_basic();
}