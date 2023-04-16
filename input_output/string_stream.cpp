#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void string_stream_demo()
{
    stringstream ss;

    // Read into stringstream
    ss << 100;
    // This is important
    ss << ' ';
    ss << 200;
    cout << "String string currently holds: " << ss.str() << endl;

    // Output from stringstream
    int a, b;
    ss >> a;
    ss >> b;
    cout << "a = " << a << ", b = " << b << endl;
}

int count_words_in_string(string s)
{
    istringstream iss(s);
    string word;
    int count = 0;
    while (iss >> word)
    {
        count++;
    };
    cout << "Found " << count << " words in ' " << s << " '" << endl;
    return count;
}

int main()
{
    // count_words_in_string("Hello World !");
    string_stream_demo();
    return 0;
}