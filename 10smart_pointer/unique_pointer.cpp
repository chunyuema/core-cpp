// https://en.cppreference.com/w/cpp/memory/unique_ptr
/*

std::unique_ptr is a smart pointer that owns and manages another object through a pointer and disposes of that object when the unique_ptr goes out of scope.

there is will be only one pointer at anytime

you cannot copy it to another one

you cannot pass a uniq_ptr into a function (this is because a function call makes a copy of the parameter); instead, use reference to pass into a function
*/