#include <iostream>
#include <vector>
#include <list>
#include <string>
#include "print_container.h"

void assign_with_iterator()
{
    list<string> lnames = {"chunyue", "bobby", "rob"};
    vector<string> vnames = {"name1"};
    print_list_with_iterator("lnames", lnames);
    print_vector_with_iterator("vnames", vnames);

    vnames.assign(lnames.begin(), lnames.end());
    print_vector_with_iterator("vnames", vnames);
}

void assign_with_size()
{
    vector<string> vnames = {"name1"};
    print_vector_with_iterator("vnames", vnames);

    vnames.assign(3, "name2");
    print_vector_with_iterator("vnames", vnames);
}

int main()
{
    // assign_with_iterator();
    assign_with_size();
    return 0;
}