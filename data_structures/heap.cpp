#include <iostream>
#include <vector>
using namespace std;

class Heap
{
public:
    Heap();
    void push(int new_element);
    int top() const;
    void pop();
    int size() const;

private:
    void fix_heap();
    int get_left_child_index(int index);
    int get_right_child_index(int index);
    int get_parent_index(int index);
    int get_left_child(int index);
    int get_right_child(int index);
    int get_parent(int index);

    vector<int> elements;
};

Heap::Heap()
{
    elements.push_back(0);
}

void Heap::push(int new_element)
{
    elements.push_back(0);
    int index = elements.size() - 1;
    while (index > 1 && get_parent(index) < new_element)
    {
        elements[index] = get_parent(index);
        index = get_parent_index(index);
    }
    elements[index] = new_element;
}

int Heap::top() const
{
    return elements[1];
}

void Heap::pop()
{
    int last_index = elements.size() - 1;
    int last = elements[last_index];
    elements.pop_back();

    if (last_index > 1)
    {
        elements[1] = last;
        fix_heap();
    }
}

int Heap::size() const
{
    return elements.size() - 1;
}

void Heap::fix_heap()
{
    int root = elements[1];
    int last_index = elements.size() - 1;

    int index = 1;
    bool more = true;

    while (more)
    {
        int child_index = get_left_child_index(index);
        if (child_index <= last_index)
        {
            int child = get_left_child(index);
            if (get_right_child_index(index) <= last_index && get_right_child(index) > child)
            {
                child_index = get_right_child_index(index);
                child = get_right_child(index);
            }

            if (child > root)
            {
                elements[index] = child;
                index = child_index;
            }
            else
            {
                more = false;
            }
        }
        else
        {
            more = false;
        }
    }
    elements[index] = root;
}

int Heap::get_left_child_index(int index)
{
    return 2 * index;
}

int Heap::get_right_child_index(int index)
{
    return 2 * index + 1;
}

int Heap::get_parent_index(int index)
{
    return index / 2;
}

int Heap::get_left_child(int index)
{
    return elements[index * 2];
}

int Heap::get_right_child(int index)
{
    return elements[index * 2 + 1];
}

int Heap::get_parent(int index)
{
    return elements[index / 2];
}

int main()
{
    Heap tasks;
    tasks.push(2);
    tasks.push(3);
    tasks.push(1);
    tasks.push(2);
    tasks.push(4);
    tasks.push(9);
    tasks.push(1);
    tasks.push(5);

    while (tasks.size() > 0)
    {
        int task = tasks.top();
        cout << "Now processing task no. " << task << endl;
        tasks.pop();
    }

    return 0;
}
