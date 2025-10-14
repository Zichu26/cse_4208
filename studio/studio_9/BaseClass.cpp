#include "BaseClass.h"
#include <iostream>

BaseClass::BaseClass() : base_name("BaseClass") {
    std::cout << "BaseClass::BaseClass()" << std::endl;
}

BaseClass::~BaseClass() {
    std::cout << "BaseClass::~BaseClass()" << std::endl;
}

void BaseClass::print() {
    std::cout << "BaseClass::print()" << std::endl;
}