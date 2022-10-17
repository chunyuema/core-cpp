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

void vector_initialization()
{
    vector<int> v1 = {1, 2, 3};
    vector<int> v2{4, 5, 6};
    vector<int> v3(10, -1);
    vector<string> v4(5, "hi");
    vector<string> v5(5); // five empty strings
    vector<string> v6 = {"apple", "bear", "coke"};
    for (auto s : v6)
        cout << s << " ";
    cout << endl;
}

void vector_comparison()
{
    vector<int> v1 = {1, 2, 3};
    vector<int> v2{1, 2, 3};
    vector<int> v3(4, 0);
    if (v1 == v2)
    {
        cout << "v1 and v2 are equal" << endl;
    }

    if (v1 != v3)
    {
        cout << "v1 and v3 are not equal" << endl;
    }
}

int main()
{
    // vector_basics();

    // vector<double> values;
    // values.push_back(1);
    // values.push_back(2);
    // values.push_back(3);
    // multiply1(values, 2);
    // cout << "Outside the function: " << endl;
    // print_vector(values);

    // multiply2(values, 2);
    // cout << "Outside the function: " << endl;
    // print_vector(values);

    // vector_initialization();
    vector_comparison();

    return 0;
}