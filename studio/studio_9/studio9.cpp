#include "BaseClass.h"
#include "DerivedClassc.h"
#include <iostream>
#include <string>

int main() {
    Base base_obj;
    Derived derived_obj;
    
    const std::string Derived::* ptr_to_derived_inherited = &Derived::class_name;
    const std::string Base::* ptr_to_base_member = &Base::class_name;
    
    std::cout << derived_obj.*ptr_to_derived_inherited << std::endl;
    std::cout << base_obj.*ptr_to_base_member << std::endl;
    
    int success = 0;
    return success;
}