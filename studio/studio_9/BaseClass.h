#ifndef BASECLASS_H
#define BASECLASS_H
#include <string>

class BaseClass {
public:
    std::string name;
    BaseClass();
    virtual ~BaseClass();
    virtual void print();
};
#endif