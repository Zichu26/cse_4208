#ifndef DERIVEDCLASS_H
#define DERIVEDCLASS_H

#include "BaseClass.h"

class DerivedClass : public BaseClass {
public:
    std::string derived_name;
    DerivedClass();
    virtual ~DerivedClass();
    virtual void print();
};

#endif