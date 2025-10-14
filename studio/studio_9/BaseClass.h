#ifndef BASECLASS_H
#define BASECLASS_H
#include <string>

class BaseClass {
private:
    std::string name;
public:
    BaseClass();
    virtual ~BaseClass();
    virtual void print();
    static std::string BaseClass::* getNamePointer();
};
#endif