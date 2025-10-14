#include "BaseClass.h"
#include "DerivedClass.h"
#include <iostream>
#include <memory>
#include <string>
#include <functional>

using std::shared_ptr;
using std::make_shared;

int main() {
    BaseClass base;
    DerivedClass derived;
    
    std::function<void(BaseClass&)> func_base = &BaseClass::print;
    std::function<void(DerivedClass&)> func_derived_base = &BaseClass::print;
    std::function<void(DerivedClass&)> func_derived = &DerivedClass::print;
    
    func_base(base);
    func_derived_base(derived);
    func_derived(derived);
    
    int success = 0;
    return success;
}