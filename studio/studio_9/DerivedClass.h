#ifndef DERIVEDCLASS_H
#define DERIVEDCLASS_H

#include "BaseClass.h"
#include <string>

class DerivedClass : public BaseClass {
private:
    std::string derived_name;
public:
    DerivedClass();
    virtual ~DerivedClass();
    void print();
    static const std::string DerivedClass::* get_derived_name_ptr();
};

#endif