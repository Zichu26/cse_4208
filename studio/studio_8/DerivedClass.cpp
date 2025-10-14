#include "DerivedClass.h"
#include <iostream>

DerivedClass::DerivedClass() {
    std::cout << "DerivedClass::DerivedClass()" << std::endl;
}

DerivedClass::~DerivedClass() {
    std::cout << "DerivedClass::~DerivedClass()" << std::endl;
}