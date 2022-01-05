#include <iostream>
using namespace std;

void print_int_array(int values[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << values[i];
    }
    cout << "" << endl;
}

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

void element_separator()
{
    int values[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < sizeof(values) / sizeof(int); i++)
    {
        if (i != 0)
        {
            cout << '|';
        }
        cout << values[i];
    }
    cout << "" << endl;
}

void find_largest_value_from_input()
{
    const int CAPACITY = 100;
    double values[CAPACITY];
    int current_size = 0;

    double input;
    cout << "Please enter numbers, Q to quit > " << flush;
    while (cin >> input)
    {
        cout << "Please enter numbers, Q to quit > " << flush;
        if (current_size < CAPACITY)
        {
            values[current_size] = input;
            current_size++;
        }
    }

    // finding the largest
    double largest = values[0];
    for (int i = 0; i < current_size; i++)
    {
        if (values[i] > largest)
        {
            largest = values[i];
        }
    }

    for (int i = 0; i < current_size; i++)
    {
        cout << values[i];
        if (values[i] == largest)
        {
            cout << "<=== largest value";
        }
        cout << endl;
    }
}

void selection_sort(double values[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        // find the min position of unsorted
        int min_pos = i;
        for (int j = min_pos + 1; j < size; j++)
        {
            if (values[j] < values[min_pos])
            {
                min_pos = j;
            }
        }
        // swap with the index of i
        if (min_pos != i)
        {
            double temp = values[i];
            values[i] = values[min_pos];
            values[min_pos] = temp;
        }
    }

    cout << "Sorted array: [ ";
    for (int k = 0; k < size; k++)
    {
        cout << values[k] << ' ';
    }
    cout << " ]" << endl;
}

int binary_search(int values[], int size, int target)
{
    int lo = 0;
    int hi = size;
    while (lo < hi)
    {
        int mid = (lo + hi) / 2;
        if (values[mid] == target)
        {
            return mid;
        }
        else if (values[mid] > target)
        {
            hi = mid;
        }
        else
        {
            lo = mid + 1;
        }
    }
    return -1;
}

int main()
{
    // basic_array();
    // multi_dimensional_array();
    // element_separator();
    // find_largest_value_from_input();

    // int values[] = {1, 2, 3, 4};
    // print_int_array(values, 4);

    // double values[] = {78.6, 67.6, 43.7, 56.9, 0.0, 76.8};
    // selection_sort(values, 6);
    // cout << "Values array outside the function is also sorted: [ ";
    // for (int k = 0; k < 6; k++)
    // {
    //     cout << values[k] << ' ';
    // }
    // cout << " ]" << endl;

    // int sorted_integers[] = {1, 3, 45, 67, 89};
    // cout << binary_search(sorted_integers, 5, 67) << endl;

    return 0;
}