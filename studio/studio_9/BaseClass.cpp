#include "BaseClass.h"
#include <iostream>

BaseClass::BaseClass() : name("BaseClass") {
    std::cout << "BaseClass::BaseClass()" << std::endl;
}

BaseClass::~BaseClass() {
    std::cout << "BaseClass::~BaseClass()" << std::endl;
}

void BaseClass::print() {
    std::cout << "BaseClass::print()" << std::endl;
}