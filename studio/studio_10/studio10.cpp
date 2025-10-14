#include "MyClass.h"

int main() {
    MyClass* ptr = new MyClass[3];
    delete ptr;
    
    int success = 0;
    return success;
}