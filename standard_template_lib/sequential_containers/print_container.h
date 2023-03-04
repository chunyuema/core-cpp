#include <string>
#include <vector>

using namespace std;

template <typename T>
void print_vector(std::string message, std::vector<T> &values)
{
    cout << message << "[ ";
    for (int i = 0; i < values.size(); i++)
    {
        cout << values[i];
        if (i != values.size() - 1)
            cout << ", ";
    }
    cout << " ]" << endl;
}

template <typename T>
void print_vector_with_iterator(string message, vector<T> &values)
{
    cout << message << "[ ";
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