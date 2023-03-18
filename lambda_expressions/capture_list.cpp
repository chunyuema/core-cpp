#include <iostream>
#include <string>
#include <vector>
#include "../print_containers.h"

using namespace std;

int count_words_with_lambda_on_size(vector<string> &words, vector<string>::size_type sz)
{
    auto wc = count_if(words.begin(), words.end(),
                       // capture sz here because lambda expression needs to use it
                       [sz](const string &s1)
                       { return s1.size() > sz; });
    return wc;
}

int main()
{
    vector<string> names = {"bobby", "chunyue", "max", "sarah", "morgan"};
    cout << "Number of names longer than 5 characters: " << (count_words_with_lambda_on_size(names, 5)) << endl;
    return 0;
}