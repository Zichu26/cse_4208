#include "MyClass.h"
#include <memory>

void use_unique_ptr(std::unique_ptr<MyClass> ptr) {
    ptr->print();
    return ptr;
}


int main() {
    std::unique_ptr<MyClass> ptr1(new MyClass("hello"));
    std::unique_ptr<MyClass> ptr2(std::move(ptr1));
    ptr1 = use_unique_ptr(std::move(ptr2));
    ptr1->print();

    int success = 0;
    return success;
}