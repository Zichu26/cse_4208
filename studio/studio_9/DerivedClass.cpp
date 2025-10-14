#include "DerivedClass.h"
#include <iostream>

DerivedClass::DerivedClass() {
    name = "DerivedClass";
    std::cout << "DerivedClass::DerivedClass()" << std::endl;
}

DerivedClass::~DerivedClass() {
    std::cout << "DerivedClass::~DerivedClass()" << std::endl;
}

void DerivedClass::print() {
    std::cout << "DerivedClass::print()" << std::endl;
}