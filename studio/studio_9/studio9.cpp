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
    
    auto func_base = std::mem_fn(&BaseClass::print);
    auto func_derived_base = std::mem_fn(&BaseClass::print);
    auto func_derived = std::mem_fn(&DerivedClass::print);
    
    func_base(base);
    func_derived_base(derived);
    func_derived(derived);
    
    int success = 0;
    return success;
}