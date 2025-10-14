#ifndef MYCLASS_H
#define MYCLASS_H

#include <cstddef>

class MyClass {
private:
    static size_t object_count;
    size_t object_id;
    
public:
    MyClass();
    MyClass(const MyClass& other);
    ~MyClass();
    void print_info();
};

#endif