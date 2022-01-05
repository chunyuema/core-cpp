#include <iostream>
#include <vector>
using namespace std;

void print_vector(vector<double> values)
{
    for (int i = 0; i < values.size(); i++)
    {
        cout << values[i];
        if (i != values.size() - 1)
            cout << ", ";
    }
    cout << endl;
}

void vector_basics()
{
    vector<double> values;
    double input;
    while (cin >> input)
    {
        values.push_back(input);
    }
    print_vector(values);
}

// does not modify the original values
void multiply1(vector<double> values, double factor)
{
    for (int i = 0; i < values.size(); i++)
    {
        values[i] = values[i] * factor;
    }
    cout << "Inside the function: " << endl;
    print_vector(values);
}

void multiply2(vector<double> &values, double factor)
{
    for (int i = 0; i < values.size(); i++)
    {
        values[i] = values[i] * factor;
    }
    cout << "Inside the function: " << endl;
    print_vector(values);
}

int main()
{
    // vector_basics();

    vector<double> values;
    values.push_back(1);
    values.push_back(2);
    values.push_back(3);
    multiply1(values, 2);
    cout << "Outside the function: " << endl;
    print_vector(values);

    multiply2(values, 2);
    cout << "Outside the function: " << endl;
    print_vector(values);

    return 0;
}