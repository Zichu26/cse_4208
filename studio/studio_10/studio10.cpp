#include "MyClass.h"
#include <memory>
#include <iostream>

int main() {
    std::shared_ptr<MyClass> ptr1 = std::make_shared<MyClass>();
    std::shared_ptr<MyClass> ptr2 = std::make_shared<MyClass>(*ptr1);

    std::weak_ptr<MyClass> weak_ptr1 = ptr1;
    std::shared_ptr<MyClass> locked_ptr = weak_ptr1.lock();
    
    if (locked_ptr == nullptr) {
        std::cout << "The weak_ptr no longer points to a valid object" << std::endl;
    } else {
        locked_ptr->print_info();
        locked_ptr = nullptr;
    }
    
    int success = 0;
    return success;
}