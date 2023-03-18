#include <iostream>
#include <string>
#include <vector>
#include "../print_containers.h"

using namespace std;

void sorting_with_lambda_on_size(vector<string> &words)
{
    stable_sort(words.begin(), words.end(),
                [](const string &s1, const string &s2)
                { return s1.size() < s2.size(); });
}

int main()
{
    vector<string> fruits = {"apple", "banana", "orange", "peach", "pear"};
    sorting_with_lambda_on_size(fruits);
    print_vector("After sorting the fruits, ", fruits);
}