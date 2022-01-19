#include <iostream>
#define SIZE 10

using namespace std;

template <class T>
void Print(T &vec, int n, string s)
{
    cout << s << ": [" << flush;
    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << flush;
        if (i < n - 1)
        {
            cout << ", " << flush;
        }
    }
    cout << "]" << endl;
}

int Hash(int key)
{
    return key % SIZE;
}

int LinearProbe(int H[], int key)
{
    int idx = Hash(key);
    int i = 0;
    while (H[(idx + i) % SIZE] != 0)
    {
        i++;
    }
    return (idx + i) % SIZE;
}

void Insert(int H[], int key)
{
    int idx = Hash(key);
    if (H[idx] != 0)
    {
        idx = LinearProbe(H, key);
    }
    H[idx] = key;
}

int Search(int H[], int key)
{
    int idx = Hash(key);
    int i = 0;
    while (H[(idx + i) % SIZE] != key)
    {
        i++;
        if (H[(idx + i) % SIZE] == 0)
        {
            return -1;
        }
    }
    return (idx + i) * SIZE;
}

int main()
{
    int A[] = {26, 30, 45, 23, 25, 43, 74, 19, 29};
    int n = sizeof(A) / sizeof(A[0]);
    Print(A, n, "A");

    int HT[SIZE] = {0};
    Print(HT, SIZE, "HT");
    for (int i = 0; i < n; i++)
    {
        Insert(HT, A[i]);
    }
    Print(HT, SIZE, "HT");
    int index = Search(HT, 25);
    cout << "Key found at: " << index << endl;

    index = Search(HT, 35);
    cout << "Key found at: " << index << endl;

    return 0;
}