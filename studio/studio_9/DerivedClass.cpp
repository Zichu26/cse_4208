#include "DerivedClass.h"
#include <iostream>

DerivedClass::DerivedClass() {
    // Access inherited private member through the pointer
    std::string BaseClass::*ptr = BaseClass::getNamePointer();
    this->*ptr = "DerivedClass";
    std::cout << "DerivedClass::DerivedClass()" << std::endl;
}

DerivedClass::~DerivedClass() {
    std::cout << "DerivedClass::~DerivedClass()" << std::endl;
}

void DerivedClass::print() {
    std::cout << "DerivedClass::print()" << std::endl;
}

std::string DerivedClass::* DerivedClass::getNamePointer() {
    return &DerivedClass::name;
}