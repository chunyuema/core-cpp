#include <iostream>
#include <vector>
#include <string>
using namespace std;

void capture_by_value()
{
    int v1 = 10000;
    auto f = [v1]
    { return v1; };
    // reassign v1
    v1 = 10;
    // does not affect the lambda expression
    cout << f() << endl;
}

void capture_by_mutable_value()
{
    int v1 = 10000;
    // with mutable, you can change the value of the captured value
    auto f = [v1]() mutable
    { return ++v1; };
    cout << f() << endl;
    // original v1 is not affected
    cout << v1 << endl;
}

void capture_by_reference()
{
    int v1 = 10000;
    // no mutable keyword is required as v1 is captured by reference
    auto f = [&v1]
    { return ++v1; };
    // reassign v1
    v1 = 10;
    // affects the lambda expression
    cout << f() << endl;
    // original v1 is updated to 11 as well
    cout << v1 << endl;
}

void capture_by_reference_necessary(vector<string> &words, ostream &os = cout, char c = ' ')
{
    for_each(words.begin(), words.end(),
             // os has to be captured by reference here as it cannot be copied
             [&os, c](const string &s)
             { os << s << c; });
}

int main()
{
    capture_by_value();
    capture_by_reference();
    capture_by_mutable_value();

    vector<string> str_vec = {"hello!", "hi~", "how are you?"};
    capture_by_reference_necessary(str_vec);
    return 0;
}