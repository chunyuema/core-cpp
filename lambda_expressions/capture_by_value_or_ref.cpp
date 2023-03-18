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

void capture_by_reference()
{
    int v1 = 10000;
    auto f = [&v1]
    { return v1; };
    // reassign v1
    v1 = 10;
    // affects the lambda expression
    cout << f() << endl;
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

    vector<string> str_vec = {"hello!",
                              "hi~",
                              "how are you?"};
    capture_by_reference_necessary(str_vec);
    return 0;
}