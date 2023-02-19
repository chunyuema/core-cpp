#include <iostream>
#include <iterator>
using namespace std;

void input_iterator_reading_two_numbers()
{
    double d1 = 0, d2 = 0;
    cout << "Please enter two numbers: " << flush;
    cin.clear();
    // end of stream
    istream_iterator<double> eos;
    // stdin iterator
    istream_iterator<double> iit(cin);

    // reading the first number
    if (iit == eos)
    {
        cout << "No values input for 1st value" << endl;
        return;
    }
    else
    {
        // increment the iterator to read in the next number
        d1 = *iit++;
    }

    // reading the second number
    if (iit == eos)
    {
        cout << "No values input for 2nd value" << endl;
        return;
    }
    else
    {
        d2 = *iit;
    }
    cin.clear();
    cout << d1 << " * " << d2 << " = " << d1 * d2 << endl;
}

int main()
{
    input_iterator_reading_two_numbers();
    return 0;
}