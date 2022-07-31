#include <iostream>
#include <typeinfo>
using namespace std;

void direct_intialization()
{
    string s1("s1 is directly initialized");
    string s2(10, 's');
    cout << s1 << endl;
    cout << s2 << endl;
}

void copy_initialization()
{
    string s1 = "copy initialization";
    string s2 = string(10, '3');
    cout << s1 << endl;
    cout << s2 << endl;
}

void read_input()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << s1 << s2 << endl;
}

void read_input_as_lines()
{
    string line;
    // read until end of file
    while (getline(cin, line))
    {
        if (!line.empty())
        {
            cout << line << endl;
        }
        else
        {
            cout << "empty line" << endl;
        }
    }
}

void string_size()
{
    string s = "hello world";
    cout << "Type of string.size() is not int: " << typeid(s.size()).name() << endl;
    cout << s.size() << endl;
    // The following is true as -3 will be converted into a large unsigned number
    cout << (s.size() < -3) << endl;
}

void string_concat()
{
    cout << "At least one of the operand of a + operator has to be of string type" << endl;
    string text = "Hello, this is a string ";
    string text1 = "By Chunyue MA";
    string text2 = text + text1;
    cout << text << text1 << endl;
    cout << text2 << endl;
    string text3 = text + "from Chunyue"; // legal
    cout << text3 << endl;
    cout << "Two string literals cannot be concatenated with +" << endl;
    // string text4 = "Hello, this is a string " + "from Chunyue"; // illegal
}

void range_base_for()
{
    string s = "Hello World !!!!";
    decltype(s.size()) punct_cnt = 0;
    decltype(s.size()) cap_cnt = 0;
    decltype(s.size()) space_cnt = 0;

    for (auto c : s)
    {
        if (ispunct(c))
            punct_cnt++;
        else if (isupper(c))
            cap_cnt++;
        else if (isspace(c))
            space_cnt++;
    }

    cout << punct_cnt << " punctuation characters in string" << endl;
    cout << cap_cnt << " uppercase characters in string" << endl;
    cout << space_cnt << " space characters in string" << endl;
}

void modify_character()
{
    string s = "hello world";
    cout << "before: " << s << endl;
    for (auto &c : s)
    {
        c = toupper(c);
    }
    cout << "after: " << s << endl;
}

int main()
{
    // direct_intialization();
    // copy_initialization();
    // read_input();
    // read_input_as_lines();
    // string_size();
    // string_concat();
    // range_base_for();
    modify_character();
    return 0;
}
