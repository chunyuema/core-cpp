#include <iostream>
using namespace std;

void basic_array()
{
    int values[3];
    values[0] = 54;
    for (int i = 0; i < 3; i++)
    {
        cout << values[i] << endl;
    }

    double numbers[4] = {1.0, 2.0, 3.0, 4.0};
    double numbers2[4] = {4.0, 6.0, 8.0};
    cout << sizeof(numbers) << endl;
    cout << sizeof(double) << endl;

    for (int i = 0; i < sizeof(numbers) / sizeof(double); i++)
    {
        cout << numbers[i] << endl;
        cout << numbers2[i] << endl;
    }

    // by default setting everything to be zero
    int number_array[5] = {};
    for (int i = 0; i < 5; i++)
    {
        cout << number_array[i] << endl;
    }

    string string_array[5] = {};
    for (int i = 0; i < 5; i++)
    {
        cout << string_array[i] << endl;
    }

    // does not need to have the length declared here, compile can figure it out
    string string_array2[] = {"apple", "banana"};
    for (int i = 0; i < 2; i++)
    {
        cout << string_array2[i] << endl;
    }
}

void multi_dimensional_array()
{
    string animals[2][3];

    string animals2[][3] = {
        {"fox", "dogs", "cat"},
        {"lion", "tiger", "bear"}};

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << "animals[" << i << "][" << j << "] = " << animals2[i][j] << endl;
    //     }
    //     cout << endl;
    // }

    cout << sizeof(string) << endl;
    cout << sizeof(animals2) << endl;
    cout << sizeof(animals2[0]) << endl;
    for (int i = 0; i < sizeof(animals2) / sizeof(animals2[0]); i++)
    {
        for (int j = 0; j < sizeof(animals2[0]) / sizeof(string); j++)
        {
            cout << "animals[" << i << "][" << j << "] = " << animals2[i][j] << endl;
        }
        cout << endl;
    }
}

int main()
{
    // basic_array();
    multi_dimensional_array();
    return 0;
}