#include <iostream>
#include <array>
#include <string>
using namespace std;

template <typename T, size_t N>
void print_array(string message, array<T, N> &a)
{
    cout << message << " : ";
    for (T &i : a)
        cout << i << " ";
    cout << endl;
}

void array_initialization()
{
    array<int, 5> a1 = {1, 2, 3, 4, 5};
    array<string, 3> a2 = {"hello", "hi", "how are you?"};
    print_array("integer array", a1);
    print_array("string array", a2);

    // copy initialization
    array<string, 3> a3 = a2;
    print_array("string array", a3);
}

void accessing_by_index()
{
    array<int, 5> a1 = {1, 2, 3, 4, 5};
    cout << "element at index 1: " << a1[1] << endl;
    cout << "element at index 3: " << a1[3] << endl;
}

void direct_access_data()
{
    array<string, 5> a2;
    a2 = {"hi",
          "how are you?",
          "I am fine and you?"};
    string *sp = a2.data();
    for (size_t i = 0; i < a2.size(); ++i)
    {
        cout << "element at " << i << " is " << *sp++ << endl;
    }
}

int main()
{
    cout << "A wrapper around the traditional c array" << endl;
    array_initialization();
    // accessing_by_index();
    // direct_access_data();
    return 0;
}