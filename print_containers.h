#include <string>
#include <vector>
#include <list>
#include <deque>
#include <forward_list>

using namespace std;

template <typename T>
void print_vector(std::string message, std::vector<T> &values)
{
    cout << message << " vector = [ ";
    for (int i = 0; i < values.size(); i++)
    {
        cout << values[i];
        if (i != values.size() - 1)
            cout << ", ";
    }
    cout << " ]" << endl;
}

template <typename T>
void print_deque(std::string message, std::deque<T> &values)
{
    cout << message << " deque = [ ";
    for (int i = 0; i < values.size(); i++)
    {
        cout << values[i];
        if (i != values.size() - 1)
            cout << ", ";
    }
    cout << " ]" << endl;
}

template <typename T>
void print_list_with_iterator(std::string message, list<T> &values)
{
    cout << message << " list = [ ";
    auto it = values.begin();
    while (it != values.end())
    {
        cout << *it;
        it++;
        if (it != values.end())
            cout << ", ";
    }
    cout << " ]" << endl;
}

template <typename T>
void print_forward_list_with_iterator(std::string message, forward_list<T> &values)
{
    cout << message << " forward list = [ ";
    auto it = values.begin();
    while (it != values.end())
    {
        cout << *it;
        it++;
        if (it != values.end())
            cout << ", ";
    }
    cout << " ]" << endl;
}

template <typename T>
void print_vector_with_iterator(string message, vector<T> &values)
{
    cout << message << " vector = [ ";
    auto it = values.begin();
    while (it != values.end())
    {
        cout << *it;
        it++;
        if (it != values.end())
            cout << ", ";
    }
    cout << " ]" << endl;
}