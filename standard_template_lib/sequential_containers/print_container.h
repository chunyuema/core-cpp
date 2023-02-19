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