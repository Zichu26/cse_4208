#include "DerivedClass.h"
#include <iostream>

DerivedClass::DerivedClass() : derived_name("DerivedClass") {
    std::cout << "DerivedClass::DerivedClass()" << std::endl;
}

DerivedClass::~DerivedClass() {
    std::cout << "DerivedClass::~DerivedClass()" << std::endl;
}

void DerivedClass::print() {
    std::cout << "DerivedClass::print()" << std::endl;
}


const std::string DerivedClass::* DerivedClass::get_derived_name_ptr() {
    return &DerivedClass::derived_name;
}