#ifndef BASECLASS_H
#define BASECLASS_H

#include <string>

class BaseClass {
private:
    std::string base_name;
public:
    BaseClass();
    virtual ~BaseClass();
    virtual void print();
    static const std::string BaseClass::* get_base_name_ptr();
};

#endif