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
    
    const std::string DerivedClass::* ptr_derived = &DerivedClass::derived_name;
    const std::string DerivedClass::* ptr_base_from_derived = &DerivedClass::base_name;
    const std::string BaseClass::* ptr_base = &BaseClass::base_name;
    
    std::cout << derived.*ptr_derived << std::endl;
    std::cout << derived.*ptr_base_from_derived << std::endl;
    std::cout << base.*ptr_base << std::endl;
    
    int success = 0;
    return success;
}