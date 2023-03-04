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
    // Direct initialization with another container
    list<string> l1 = {"chunyue", "bobby", "rob"};
    list<string> l2(l1);

    // Initialization with container denoted with decorator
    list<string> l3 = {"chunyue", "bobby", "rob"};
    vector<string> v1(l3.begin(), l3.end());
    auto it1 = l3.begin();
    auto it2 = l3.begin();
    it2++;
    vector<string> v2(it1, it2);
    it2++;
    vector<string> v3(it1, it2);
    print_vector("v1", v1);
    print_vector("v2", v2);
    print_vector("v3", v3);

    // The following line does not work due to incompatibility of type
    // vector<string> vnames2(lnames);

    // The following line does not work either
    // vector<const char *> vnames3(lnames);
}

void list_initialization()
{
    list<std::string> lnames = {"chunyue", "bobby", "rob"};
    print_list_with_iterator("lnames", lnames);

    vector<const char *> vnames = {"chunyue", "bobby", "rob"};
    print_vector("vnames", vnames);
}

int main()
{
    // size_related_constructor();
    initialize_with_another_container();
    // list_initialization();
    return 0;
}