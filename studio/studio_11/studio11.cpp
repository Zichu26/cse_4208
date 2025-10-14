#include "MyClass.h"

int main() {
    MyClass obj1("hello");
    MyClass obj2("goodbye");
    MyClass obj3("bro");
    
    obj3 = obj2 = obj1;
    
    int success = 0;
    return success;
}