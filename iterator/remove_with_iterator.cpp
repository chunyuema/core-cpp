#include <vector>
#include <string>
#include "../print_containers.h"
using namespace std;

void remove_from_vector_with_while()
{
    vector<string> sVector = {"Hello", "Hello", "World"};
    auto it = sVector.begin();
    while (it != sVector.end())
    {
        if (*it == "Hello")
        {
            // After erase, it will be pointing at the next element
            sVector.erase(it);
        }
        else
        {
            // Only increment it if we are not deleting
            it++;
        }
    }
    print_vector("sVector", sVector);
}

void remove_from_vector_with_for()
{
    vector<string> sVector = {"Hello", "Hello", "World"};
    for (auto it = sVector.begin(); it != sVector.end(); it++)
    {
        if (*it == "Hello")
        {
            sVector.erase(it);
            // Need to artificially decrement it back as erasing an element essential is like advancing the iterator to the next element
            it--;
        }
    }
    print_vector("sVector", sVector);
}

int main()
{
    // remove_from_vector_with_while();
    remove_from_vector_with_for();
    return 0;
}