#include <iostream>
#include <string>
using namespace std;

void find_first_of_and_not_of()
{
    string numbers = "1234567890";
    string mystring = "m1c2y3";
    cout << "First number is found at position: " << mystring.find_first_of(numbers) << endl;
    cout << "First non number is found at position: " << mystring.find_first_not_of(numbers) << endl;
}

void find_last_of_and_not_of()
{
    string numbers = "1234567890";
    string mystring = "m1c2y3";
    cout << "Last number is found at position: " << mystring.find_last_of(numbers) << endl;
    cout << "Last non number is found at position: " << mystring.find_last_not_of(numbers) << endl;
}

void find_forward_and_backward()
{
    string mystring = "mississippi";
    // Use auto to denote string::size_type
    auto first_is_pos = mystring.find("is");
    auto last_is_pos = mystring.rfind("is");
    cout << first_is_pos << ", " << last_is_pos << endl;
}

void find_all_numbers()
{
    string numbers = "1234567890";
    string mystring = "m1c2y3";
    string::size_type pos = 0;
    /* Specify pos as the first index from where the search should begin, continue as long as we can find the next pos */
    while ((pos = mystring.find_first_of(numbers, pos)) != string::npos)
    {
        cout << "Found number at position: " << pos << endl;
        // important to increment the pos to avoid any infinite loops
        ++pos;
    }
}

int main()
{
    // find_first_of_and_not_of();
    // find_last_of_and_not_of();
    // find_forward_and_backward();
    find_all_numbers();
    return 0;
}