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
