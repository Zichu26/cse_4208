#include "BaseClass.h"
#include "DerivedClass.h"
#include <iostream>
#include <memory>

using std::shared_ptr;
using std::make_shared;

int main() {
    // BaseClass base;
    // DerivedClass derived;

    // BaseClass& base_ref1 = base;
    // BaseClass& base_ref2 = derived;
    // DerivedClass& derived_ref = derived;    

    // std::cout << "Calling print() on base object:" << std::endl;
    // base.print();
    
    // std::cout << "Calling print() on derived object:" << std::endl;
    // derived.print();
    
    // std::cout << "Calling print() on base ref to base):" << std::endl;
    // base_ref1.print();
    
    // std::cout << "Calling print() on base ref to derived):" << std::endl;
    // base_ref2.print();
    
    // std::cout << "Calling print() on derived ref to derived):" << std::endl;
    // derived_ref.print();

    // BaseClass* base_ptr1 = &base;
    // BaseClass* base_ptr2 = &derived;
    // DerivedClass* derived_ptr = &derived;

    // std::cout << "Calling print() on base ptr to base:" << std::endl;
    // base_ptr1->print();
    
    // std::cout << "Calling print() on base ptr to derived:" << std::endl;
    // base_ptr2->print();
    
    // std::cout << "Calling print() on derived ptr to derived:" << std::endl;
    // derived_ptr->print();

    // shared_ptr<BaseClass> base_ptr1 = make_shared<BaseClass>();
    // shared_ptr<BaseClass> base_ptr2 = make_shared<DerivedClass>();
    // shared_ptr<DerivedClass> derived_ptr = make_shared<DerivedClass>();
    
    // std::cout << "Calling print() on base prt to base:" << std::endl;
    // base_ptr1->print();
    
    // std::cout << "Calling print() on base prt to derived:" << std::endl;
    // base_ptr2->print();
    
    // std::cout << "Calling print() on derived ptr to derived):" << std::endl;
    // derived_ptr->print();

    BaseClass* base_ptr3 = new BaseClass();
    BaseClass* base_ptr4 = new DerivedClass();
    DerivedClass* derived_ptr5 = new DerivedClass();
    
    std::cout << "Calling print() on base ptr to base" << std::endl;
    base_ptr3->print();
    
    std::cout << "Calling print() on base ptr to derived:" << std::endl;
    base_ptr4->print();
    
    std::cout << "Calling print() on derived ptr to derived:" << std::endl;
    derived_ptr5->print();

    int success = 0;
    return success;
}