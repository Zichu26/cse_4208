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
