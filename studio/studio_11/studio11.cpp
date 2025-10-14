#include "MyClass.h"
#include <memory>

int main() {
    std::unique_ptr<MyClass> ptr1(new MyClass("hello"));
    std::unique_ptr<MyClass> ptr2(std::move(ptr1));
    
    int success = 0;
    return success;
}