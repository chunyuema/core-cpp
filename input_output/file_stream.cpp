#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>

using namespace std;

void write_file(string filename)
{
    ofstream fout(filename.c_str());
    if (fout)
    {
        fout << "my string 1" << endl;
        fout << "my string 2" << endl;
        fout << "my string 3" << endl;
    }
    fout.close();
}

void read_file(string filename)
{
    ifstream fin(filename.c_str());
    if (fin)
    {
        char c;
        while (fin.get(c))
        {
            cout << c;
        };
    }
    fin.close();
}

int main()
{
    string filename = "test.txt";
    write_file(filename);
    read_file(filename);
    return 0;
}