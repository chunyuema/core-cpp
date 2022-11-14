// adapted from new-delete.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
#include <new>
using namespace std;

class c1
{
    int _a = 0;
    int _b = 0;
    int _c = 0;

public:
    c1(int i = 0);
    ~c1();
    int a() { return _a; }
    int b() { return _b; }
    int c() { return _c; }
};

c1::c1(int i) : _a(i), _b(i + 1), _c(i + 2)
{
    puts("c1 constructor");
}

c1::~c1()
{
    puts("c1 destructor");
}

void allocate_memory_with_try()
{
    try
    {
        c1 *o1 = new c1;
        printf("o1 = {%d, %d, %d} \n", o1->a(), o1->b(), o1->c());
        delete o1;
    }
    catch (bad_alloc &ba)
    {
        printf("allocation of memory failed: %s\n", ba.what());
    }
}

void allocate_memory_for_array_of_objects()
{
    try
    {
        c1 *o1 = new c1[5];
        delete[] o1;
    }
    catch (bad_alloc &ba)
    {
        printf("allocation of memory failed: %s\n", ba.what());
    }
}

void allocate_memory_without_try()
{
    c1 *o1 = new (nothrow) c1;
    if (o1 == nullptr)
    {
        printf("allocation of memory failed");
    }
    else
    {
        printf("o1 = {%d, %d, %d} \n", o1->a(), o1->b(), o1->c());
        delete (o1);
    }
}

int main()
{
    // allocate_memory_with_try();
    // allocate_memory_for_array_of_objects();
    // allocate_memory_without_try();
    return 0;
}