#ifndef BASECLASS_H
#define BASECLASS_H

class BaseClass {
public:
    std::string base_name;
    BaseClass();
    virtual ~BaseClass();
    virtual void print();
};

#endif