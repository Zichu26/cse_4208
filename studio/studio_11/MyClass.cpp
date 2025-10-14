#include "MyClass.h"
#include <iostream>

MyClass::MyClass(const std::string& s) : str(s) {
    std::cout << "Constructor: constructing object at " << this 
              << " with str = \"" << str << "\"" << std::endl;
}

MyClass::MyClass(const MyClass& other) : str(other.str) {
    std::cout << "Copy constructor: constructing object at " << this 
              << " from object at " << &other 
              << " with str = \"" << str << "\"" << std::endl;
}

MyClass::~MyClass() {
    std::cout << "Destructor: destroying object at " << this 
              << " with str = \"" << str << "\"" << std::endl;
}