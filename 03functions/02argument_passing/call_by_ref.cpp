/*
    Call by reference
    A reference paramter is directly bound to the object from which it is initialized.
    As a result, changes made to the initializer in the function will be preserved
*/

#include <iostream>
using namespace std;

void call_by_ref(int &a)
{
    /* a is not copied to initialize the parameter => better performance when a is large */
    a = 45;
    printf("Inside function, a is reassigned to %d\n", a);
}

/* Avoid unintended side effect with const modifier*/
void call_by_const_ref(const int &a)
{
    // a = 45; /* this line will not be allowed */
    printf("Cannot modify a as it is marked as a const");
}

/*
    This function below not only returns the first time char c appears in string s,
    but also counts the number of its ourrences
*/
int use_call_by_ref_to_return_additional_info(const string &s, char c, int &num_occurence)
{
    auto res = -1;
    num_occurence = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == c)
        {
            if (res == -1)
            {
                res = i;
            }
            ++num_occurence;
        }
    }
    return res;
}

int main()
{
    int a = 33;
    printf("=========================================\n");
    printf("Before calling the funnction, a = %d \n", a);
    call_by_ref(a);
    printf("After calling the function, a = %d\n", a);
    printf("=========================================\n");

    string s = "Hello World!";
    char c = 'l';
    int ctr;
    cout << "The first l appears at index " << use_call_by_ref_to_return_additional_info(s, c, ctr) << endl;
    cout << "Number of l in string: " << ctr << endl;
    printf("=========================================\n");
}