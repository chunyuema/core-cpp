#include <iostream>

using namespace std;

class Book
{
public:
    Book(string title_val, string auhtor_val, int year_val) : title(title_val), author(auhtor_val), year(year_val) {}
    friend bool operator==(const Book &lhs, const Book &rhs);
    friend bool operator!=(const Book &lhs, const Book &rhs);

private:
    int year;
    string title;
    string author;
};

bool operator==(const Book &lhs, const Book &rhs)
{
    return (lhs.author == rhs.author &&
            lhs.title == rhs.title &&
            lhs.year == rhs.year);
}

bool operator!=(const Book &lhs, const Book &rhs)
{
    // delegate the work to operator==
    return !(lhs == rhs);
}

int main()
{
    Book b1("amazing book", "chunyue", 1998);
    Book b2("amazing book", "chunyue", 1998);
    Book b3("amazing book", "chunyue", 1999);
    cout << (b1 == b2) << endl;
    cout << (b1 != b3) << endl;
    return 0;
}