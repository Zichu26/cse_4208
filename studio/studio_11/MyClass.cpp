#include "MyClass.h"
#include <iostream>

MyClass::MyClass(const MyClass& other) : str(other.str) {
    std::cout << "Copy constructor: constructing object at " << this 
              << " from object at " << &other << std::endl;
}