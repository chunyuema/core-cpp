#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void print_vector(string message, vector<T> values)
{
    cout << message << endl;
    for (int i = 0; i < values.size(); i++)
    {
        cout << values[i];
        if (i != values.size() - 1)
            cout << ", ";
    }
    cout << endl;
}

void insert_and_erase()
{
    vector<int> v;
    for (int i = 1; i <= 5; i++)
    {
        v.push_back(i);
    }
    print_vector("initial vector", v);
    // insert a single element
    v.insert(v.begin() + 3, 789);
    print_vector("insert 789", v);
    // insert a vector
    v.insert(v.begin(), {45, 67, 89});
    print_vector("insert {45, 67, 89}", v);
    // erase
    v.erase(v.begin() + 3);
    print_vector("erase element at index 3", v);
}

void vector_initialization()
{
    vector<int> v1 = {1, 2, 3};
    vector<int> v2{4, 5, 6};

    // fill vector with same values
    vector<int> v3(10, -1);
    vector<string> v4(5, "hi");
    vector<string> v5(5); // five empty strings
    vector<string> v6 = {"apple", "bear", "coke"};

    // initialize from c array
    constexpr size_t size = 10;
    int ia[size] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> carray_v(ia, ia + size);
    print_vector("c array initialized vector", carray_v);

    // using copy constructor
    vector<int> copy_v(carray_v);
    print_vector("initialize vector with copy", copy_v);

    // using move constructor
    vector<int> move_v(move(copy_v));
    print_vector("initialize vector with move", move_v);
}

void vector_basics()
{
    vector<double> values;
    double input;
    while (cin >> input)
    {
        values.push_back(input);
    }
    // print_vector(values);
}

// does not modify the original values
void multiply1(vector<double> values, double factor)
{
    for (int i = 0; i < values.size(); i++)
    {
        values[i] = values[i] * factor;
    }
    cout << "Inside the function: " << endl;
    // print_vector(values);
}

void multiply2(vector<double> &values, double factor)
{
    for (int i = 0; i < values.size(); i++)
    {
        values[i] = values[i] * factor;
    }
    cout << "Inside the function: " << endl;
    // print_vector(values);
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
    vector_initialization();
    insert_and_erase();

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