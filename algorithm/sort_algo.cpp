#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <deque>
#include <list>
#include <forward_list>
#include "../print_containers.h"

using namespace std;

void print_str_vector(vector<string> &str_vec)
{
    cout << "[ ";
    for (string s : str_vec)
    {
        cout << s << " ";
    }
    cout << "]" << endl;
}

/* Generic Sort Algorithm supports the following containers: Vector, C array, Array, Deque, String */
void generic_sort()
{
    /* sort vector */
    vector<string> fruits = {"pear", "apple", "grape", "peach"};
    print_vector("Fruits", fruits);
    sort(fruits.begin(), fruits.end());
    print_vector("Fruits", fruits);

    /* sort c array */
    int myints[] = {32, 71, 12, 45, 26, 80, 53, 33};
    int size = sizeof(myints) / sizeof(myints[0]);
    sort(myints, myints + size);
    for (int i = 0; i < size; ++i)
        cout << myints[i] << " ";
    cout << endl;

    /* sort array */
    array<int, 8> myints2 = {32, 71, 12, 45, 26, 80, 53, 33};
    // myints2.begin() + 8 is allowed because the iterator is random access iterator
    sort(myints2.begin(), myints2.begin() + 8);
    for (int i = 0; i < size; ++i)
        cout << myints2[i] << " ";
    cout << endl;

    /* sort deque */
    deque<string> fruits2 = {"pear", "apple", "grape", "peach"};
    sort(fruits2.begin(), fruits2.end());
    print_deque("Fruits", fruits2);

    /* sort string */
    string name = "ChunyueMa";
    sort(name.begin(), name.end());
    cout << name << endl;
}

/* List and Forward List are not supported by generic sort due to lack of Random Access Iterator */
void list_sort()
{
    list<string> fruits = {"pear", "apple", "grape", "peach"};
    fruits.sort();
    print_list_with_iterator("Fruits", fruits);

    forward_list<int> numbers = {32, 71, 12, 45, 26, 80, 53, 33};
    numbers.sort();
    print_forward_list_with_iterator("Numbers", numbers);
}

void partial_sort()
{
    // code from https://cplusplus.com/reference/algorithm/sort/
    int myints[] = {32, 71, 12, 45, 26, 80, 53, 33};
    vector<int> myvector(myints, myints + 8); // 32 71 12 45 26 80 53 33

    // myvector.begin() + 4 is allowed because the iterator here is a random access iterator
    sort(myvector.begin(), myvector.begin() + 4); //(12 32 45 71)26 80 53 33
    print_vector("myvector", myvector);
}

bool is_shorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

void customize_sort()
{
    vector<string> fruits = {"pear", "apple", "orange", "grape"};
    print_str_vector(fruits);
    sort(fruits.begin(), fruits.end(), is_shorter);
    print_str_vector(fruits);
}

int main()
{
    generic_sort();
    list_sort();
    return 0;
}