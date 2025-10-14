#ifndef MYCLASS_H
#define MYCLASS_H

#include <string>

class MyClass {
private:
    std::string str;

public:
    MyClass() = default;
    MyClass(const MyClass& other);
};

#endif