#include "BaseClass.h"
#include "DerivedClass.h"
#include <iostream>
#include <memory>
#include <string>

using std::shared_ptr;
using std::make_shared;

int main() {
    BaseClass base;
    DerivedClass derived;
    
    void (BaseClass::*ptr_base_func)() = &BaseClass::print;
    void (DerivedClass::*ptr_derived_base_func)() = &BaseClass::print;
    void (DerivedClass::*ptr_derived_func)() = &DerivedClass::print;
    
    std::cout << "Calling through ptr_base_func on base object:" << std::endl;
    (base.*ptr_base_func)();
    
    std::cout << "Calling through ptr_derived_base_func on derived object:" << std::endl;
    (derived.*ptr_derived_base_func)();
    
    std::cout << "Calling through ptr_derived_func on derived object:" << std::endl;
    (derived.*ptr_derived_func)();
    
    int success = 0;
    return success;
}