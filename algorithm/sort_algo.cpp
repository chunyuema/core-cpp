#include <iostream>
#include <string>
#include <vector>
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

void use_sort()
{
    vector<string> fruits = {"pear", "apple", "grape", "peach"};
    print_str_vector(fruits);
    sort(fruits.begin(), fruits.end());
    print_str_vector(fruits);
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

void partial_sort()
{
    // code from https://cplusplus.com/reference/algorithm/sort/
    int myints[] = {32, 71, 12, 45, 26, 80, 53, 33};
    vector<int> myvector(myints, myints + 8); // 32 71 12 45 26 80 53 33

    // myvector.begin() + 4 is allowed because the iterator here is a random access iterator
    sort(myvector.begin(), myvector.begin() + 4); //(12 32 45 71)26 80 53 33
    print_vector("myvector", myvector);
}

int main()
{
    // use_sort();
    // customize_sort();
    partial_sort();
    return 0;
}