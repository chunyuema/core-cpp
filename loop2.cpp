#include <iostream>
#include <cstdlib>
using namespace std;

void break_statement()
{
    for (int i = 0; i < 5; i++)
    {
        if (i == 3)
        {
            cout << "Program quitting...." << endl;
            break;
        }
        cout << i << " Looping" << endl;
    }

    const string password = "hello";
    string user_input;
    do
    {
        cout << "Enter your password > " << flush;
        cin >> user_input;
        if (user_input == password)
        {
            cout << "Welcome!" << endl;
            break;
        }
        else
        {
            cout << "Access denied" << endl;
        }
    } while (true);
}

void continue_statement()
{
    for (int i = 0; i < 5; i++)
    {
        if (i == 3)
        {
            cout << "Go straight back to the beginning...." << endl;
            continue;
        }
        cout << i << " Looping" << endl;
    }
}

void sum_and_average()
{
    double total = 0;
    double input;
    int count = 0;
    cout << "Enter values to be calculated: > " << flush;
    while (cin >> input)
    {
        total += input;
        count++;
        cout << "Enter values to be calculated: > " << flush;
    }
    double average = 0;
    if (count > 0)
    {
        average = total / count;
    }
    cout << "The average is: " << average << endl;
}

void random_simulation()
{
    // set the random seed using the current time
    srand(time(0));
    for (int i = 1; i <= 10; i++)
    {
        int dice1 = rand() % 6 + 1;
        int dice2 = rand() % 6 + 1;
        cout << dice1 << " " << dice2 << endl;
    }
}

int main()
{
    break_statement();
    continue_statement();
    // sum_and_average();
    // random_simulation();
}
