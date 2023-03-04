#include <iostream>
#include <vector>
#include <list>
#include "print_container.h"

void size_related_constructor()
{
    // fill vector with same values
    std::vector<int> v1(10, -1);
    std::vector<std::string> v2(5, "hi");
    std::vector<std::string> v3(5); // five empty strings
    print_vector("v1", v1);
    print_vector("v2", v2);
    print_vector("v3", v3);
}

void initialize_with_another_container()
{
    list<const char *> lnames = {"chunyue", "bobby", "rob"};
    vector<string> vnames(lnames.begin(), lnames.end());

    // The following line does not work due to incompatibility of type
    // vector<string> vnames2(lnames);

    // The following line does not work either
    // vector<const char *> vnames3(lnames);

    print_vector("vnames", vnames);
    print_vector_with_iterator("vnames", vnames);
}

int main()
{
    // size_related_constructor();
    initialize_with_another_container();
    return 0;
}