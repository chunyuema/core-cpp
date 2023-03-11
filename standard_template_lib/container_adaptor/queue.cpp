#include <queue>
#include <iostream>
#include <cstdlib>

using namespace std;

void queue_basics()
{
    queue<string> q;
    q.push("Tom");
    q.push("Chunyue");
    q.push("Bobby");
    while (q.size() > 0)
    {
        cout << q.front() << "\n";
        q.pop();
    }
}

int main()
{
    queue_basics();
    return 0;
}