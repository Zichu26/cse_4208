#include "BaseClass.h"
#include "DerivedClass.h"
#include <iostream>

int main() {
    BaseClass base_obj;
    DerivedClass derived_obj;
    
    std::string DerivedClass::*ptr1 = DerivedClass::getNamePointer();
    std::string BaseClass::*ptr2 = DerivedClass::getNamePointer();
    std::string BaseClass::*ptr3 = BaseClass::getNamePointer();
    
    std::cout << derived_obj.*ptr1 << std::endl;
    std::cout << derived_obj.*ptr2 << std::endl;
    std::cout << base_obj.*ptr3 << std::endl;
    
    return 0;
}