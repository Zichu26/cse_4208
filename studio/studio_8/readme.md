1. Zichu Pan
2. Construction order:
	- `BaseClass base;` - calls base class constructor
	- `DerivedClass derived;` - first calls base class constructor then derived class constructor
	Destruction order (reverse of construction):
	- When derived class goes out of scope, it first calls derived destructor then calls base destructor
	- Then base goes out of scope and calls base destructor
```
BaseClass::BaseClass()
BaseClass::BaseClass()
DerivedClass::DerivedClass()
DerivedClass::~DerivedClass()
BaseClass::~BaseClass()
BaseClass::~BaseClass()
```
3. 
```
BaseClass::BaseClass()
BaseClass::BaseClass()
DerivedClass::DerivedClass()
Calling print() on base object:
BaseClass::print()
Calling print() on derived object:
DerivedClass::print()
Calling print() on base ref to base):
BaseClass::print()
Calling print() on base ref to derived):
BaseClass::print()
Calling print() on derived ref to derived):
DerivedClass::print()
DerivedClass::~DerivedClass()
BaseClass::~BaseClass()
BaseClass::~BaseClass()
```
4. The only difference is base reference to a derived class. With `virtual` the function call is resolved at run-time based on the dynamic type of the actual object being referred to (`DerivedClass`).
```
BaseClass::BaseClass()
BaseClass::BaseClass()
DerivedClass::DerivedClass()
Calling print() on base object:
BaseClass::print()
Calling print() on derived object:
DerivedClass::print()
Calling print() on base ref to base):
BaseClass::print()
Calling print() on base ref to derived):
DerivedClass::print()
Calling print() on derived ref to derived):
DerivedClass::print()
DerivedClass::~DerivedClass()
BaseClass::~BaseClass()
BaseClass::~BaseClass()
```
5. The calls using pointers behave identically to the calls using references. Both pointers and references enable polymorphic behavior when calling virtual functions.
```
Calling print() on base ptr to base:
BaseClass::print()
Calling print() on base ptr to derived:
DerivedClass::print()
Calling print() on derived ptr to derived:
DerivedClass::print()
```
6. 
```
BaseClass::BaseClass()
BaseClass::BaseClass()
DerivedClass::DerivedClass()
BaseClass::BaseClass()
DerivedClass::DerivedClass()
Calling print() on base prt to base:
BaseClass::print()
Calling print() on base prt to derived:
DerivedClass::print()
Calling print() on derived ptr to derived):
DerivedClass::print()
DerivedClass::~DerivedClass()
BaseClass::~BaseClass()
DerivedClass::~DerivedClass()
BaseClass::~BaseClass()
BaseClass::~BaseClass()
```
7. The destructors are never called.
``` 
BaseClass::BaseClass()
BaseClass::BaseClass()
DerivedClass::DerivedClass()
BaseClass::BaseClass()
DerivedClass::DerivedClass()
Calling print() on base ptr to base
BaseClass::print()
Calling print() on base ptr to derived:
DerivedClass::print()
Calling print() on derived ptr to derived:
DerivedClass::print()
```
8. When we delete the base ptr to the derived class, only `BaseClass::~BaseClass()` is called, not `DerivedClass::~DerivedClass()`. The derived class destructor is skipped and  thus causes a resource leak.
```
/home/compute/p.zichu/cse_4208/studio/studio_8/studio8.cpp: In function ‘int main()’:
/home/compute/p.zichu/cse_4208/studio/studio_8/studio8.cpp:71:12: warning: deleting object of polymorphic class type ‘BaseClas
s’ which has non-virtual destructor might cause undefined behavior [-Wdelete-non-virtual-dtor]
     delete base_ptr3;
            ^~~~~~~~~
/home/compute/p.zichu/cse_4208/studio/studio_8/studio8.cpp:72:12: warning: deleting object of polymorphic class type ‘BaseClas
s’ which has non-virtual destructor might cause undefined behavior [-Wdelete-non-virtual-dtor]
     delete base_ptr4;
            ^~~~~~~~~
/home/compute/p.zichu/cse_4208/studio/studio_8/studio8.cpp:73:12: warning: deleting object of polymorphic class type ‘DerivedC
lass’ which has non-virtual destructor might cause undefined behavior [-Wdelete-non-virtual-dtor]
     delete derived_ptr5;
```
9. 
