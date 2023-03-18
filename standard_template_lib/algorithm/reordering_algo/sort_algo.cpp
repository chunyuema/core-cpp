#include <iostream>
#include <string>
#include <vector>

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

int main()
{
    use_sort();
    customize_sort();
    return 0;
}