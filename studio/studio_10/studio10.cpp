#include "MyClass.h"
#include <memory>

int main() {
    std::shared_ptr<MyClass> ptr1 = std::make_shared<MyClass>();
    std::shared_ptr<MyClass> ptr2 = std::make_shared<MyClass>(*ptr1);
    
    int success = 0;
    return success;
}