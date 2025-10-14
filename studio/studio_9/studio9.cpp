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
    
    const std::string DerivedClass::* ptr_derived = DerivedClass::get_derived_name_ptr();
    const std::string DerivedClass::* ptr_base_from_derived = BaseClass::get_base_name_ptr();
    const std::string BaseClass::* ptr_base = BaseClass::get_base_name_ptr();
    
    std::cout << derived.*ptr_derived << std::endl;
    std::cout << derived.*ptr_base_from_derived << std::endl;
    std::cout << base.*ptr_base << std::endl;
    
    int success = 0;
    return success;
}