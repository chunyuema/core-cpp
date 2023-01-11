#include <cassert>
#include <iostream>
#include <string>

using namespace std;

void check_length(size_t threshold, string str)
{
    assert(str.size() < threshold);
}

void print_err(size_t threshold, string str)
{
    if (str.size() > threshold)
    {
        cerr << "Error: " << __FILE__
             << " in funnction: " << __func__
             << " at line: " << __LINE__ << endl;
    }
}

int main()
{
    check_length(9, "Chunyue");
    cout << "Chunyue has less than 9 characters" << endl;

    print_err(3, "Chunyue");

/*
If compiled correctly, the following will be ignored when the NDEBUG option is correctly specified.
*/
#ifndef NDEBUG
    check_length(3, "Chunyue");
    cout << "Chunyue has less than 3 characters" << endl;
#endif
    return 1;
}