#include <memory.h>
#include <string>

class StrVec
{
public:
    StrVec() : elements(nullptr), first_free(nullptr), cap(nullptr) {}

    StrVec(const StrVec &); // copy constructor

    StrVec &operator=(const StrVec &);

    ~StrVec();

    void push_back(const std::string &);

    size_t size() const { return first_free - elements; }

    size_t capacity() const { return cap - elements; }

    std::string *begin() const { return elements; }

    std::string *end() const { return first_free; }

private:
    static std::allocator<std::string> alloc;

    void check_and_alloc()
    {
        if (size() == capacity())
            reallocate();
    }

    std::pair<std::string *, std::string *> alloc_and_copy(const std::string *, const std::string *);

    void free();

    void reallocate();

    std::string *elements;
    std::string *first_free;
    std::string *cap;
};

std::allocator<std::string> StrVec::alloc;

void StrVec::push_back(const std::string &s)
{
    // first ensure that there is still room for the new string to be added
    check_and_alloc();

    // add the string into the string vector
    alloc.construct(first_free++, s);
}