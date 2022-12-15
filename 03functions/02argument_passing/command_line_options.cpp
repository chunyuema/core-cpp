#include <iostream>
using namespace std;

/*
    If you run your compiled program as: ./a.out chunyue ma is here
    You will get:
        Number of command line arguments: 5
        Arguments are: ./a.out chunyue ma is here
*/
int main(int argc, char **argv)
{
    cout << "Number of command line arguments: " << argc << endl;
    cout << "Arguments are: ";
    for (int i = 0; i < argc; i++)
    {
        cout << argv[i] << " ";
    }
    cout << endl;
}