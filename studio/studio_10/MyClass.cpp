#include "MyClass.h"
#include <iostream>

size_t MyClass::object_count = 0;

MyClass::MyClass() : object_id(object_count) {
    ++object_count;
    std::cout << "Default constructor called: object_id = " << object_id << ", address = " << this << std::endl;
}

MyClass::MyClass(const MyClass& other) : object_id(other.object_id) {
    ++object_count;
    std::cout << "Copy constructor called: object_id = " << object_id << ", address = " << this << std::endl;
}

MyClass::~MyClass() {
    std::cout << "Destructor called: object_id = " << object_id << ", address = " << this << std::endl;
}