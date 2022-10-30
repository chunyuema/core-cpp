#include <iostream>
#include <queue>
#include <list>
#include <string>
#include <deque>
using namespace std;

template <typename T>
void report_queue(string msg, T &q)
{
    cout << msg << ": ";
    size_t sz = q.size();
    if (sz)
        cout << "front: " << q.front() << ", back: " << q.back() << ", size: " << sz;
    else
        cout << "empty queue";
    cout << endl;
}

void q_initialization()
{
    // init from list
    list<int> l1 = {2, 45, 3, 12, 7};
    queue<int, list<int>> q1(l1);
    report_queue("queue from list", q1);

    // init from deque (more efficient)
    deque<int> d1 = {2, 45, 3, 12, 7};
    queue<int, deque<int>> q2(d1);
    report_queue("queue from list", q2);
}

void q_methods()
{
    // by default deque is used
    queue<string> q1;
    for (string s : {"foo", "bar", "boo", "far"})
    {
        q1.push(s);
    }
    report_queue("init q", q1);

    while (!q1.empty())
    {
        q1.pop();
    }
    report_queue("after popping everything out: ", q1);
}

int main()
{
    cout << "queue is a container adapter which adapts the deque into a first in first out container" << endl;
    // q_initialization();
    // q_methods();
    return 0;
}