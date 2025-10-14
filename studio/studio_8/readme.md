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
Calling print() on base prt to base:
BaseClass::print()
Calling print() on base prt to derived:
DerivedClass::print()
Calling print() on derived ptr to derived):
DerivedClass::print()
```

