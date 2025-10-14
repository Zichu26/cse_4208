#include "MyClass.h"

int main() {
    MyClass obj1("hello");
    MyClass obj2("goodbye");
    MyClass obj3("bro");
    
    obj1 = obj2 = obj3;
    
    int success = 0;
    return success;
}