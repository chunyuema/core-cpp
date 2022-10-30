#include <iostream>
#include <tuple>
#include <string>
using namespace std;

template <typename T>
void print_tuple_of_sz3(string message, T t)
{
    auto tsize = tuple_size<decltype(t)>::value;
    if (tsize != 3)
        return;
    cout << message << " (" << get<0>(t) << " , "
         << get<1>(t) << " , "
         << get<2>(t) << " ) " << endl;
}

void tuple_initialization()
{
    tuple<int, int, string> t1 = {1, 2, "hello world"};
    print_tuple_of_sz3("list initialization", t1);

    tuple<int, int, string> t2(3, 4, "hi there");
    print_tuple_of_sz3("constructor initialization", t2);

    tuple<int, int, string> t3 = make_tuple(5, 6, "what's up");
    print_tuple_of_sz3("make_tuple function", t3);
}

int main()
{
    tuple_initialization();
    return 0;
}