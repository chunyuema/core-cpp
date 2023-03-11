#include <stack>
#include <iostream>
#include <cstdlib>

using namespace std;

void stack_basics()
{
    stack<string> s;
    s.push("Tom");
    s.push("Chunyue");
    s.push("Bobby");
    while (s.size() > 0)
    {
        cout << s.top() << "\n";
        s.pop();
    }
}

int stack_calculator()
{
    stack<int> values;
    string input;
    while (cin >> input)
    {
        if (input == "+" || input == "-" || input == "*" || input == "/")
        {
            int second = values.top();
            values.pop();
            int first = values.top();
            values.pop();
            if (input == "+")
                values.push(first + second);
            else if (input == "-")
                values.push(first - second);
            else if (input == "*")
                values.push(first * second);
            else
                values.push(first / second);
        }
        else if (input == "p")
            cout << "Result is: " << values.top() << "\n";
        else if (input == "q")
            return 0;
        else
            values.push(atoi(input.c_str()));
    }
    return 0;
}

int main()
{
    stack_basics();
    // stack_calculator();
    return 0;
}