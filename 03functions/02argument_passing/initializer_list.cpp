#include <iostream>
using namespace std;

void print_messages(initializer_list<string> ls)
{
    /* loop through the initializer list using range based for loop */
    for (auto beg = ls.begin(); beg != ls.end(); ++beg)
    {
        cout << *beg << endl;
    }
}

int main()
{
    print_messages({"chunyue", "ma", "is", "here", "to", "say", "hi"});
    return 0;
}