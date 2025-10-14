1. Zichu Pan
2. 
```
output:
BaseClass::BaseClass()
BaseClass::BaseClass()
DerivedClass::DerivedClass()
DerivedClass
BaseClass
BaseClass
DerivedClass::~DerivedClass()
BaseClass::~BaseClass()
BaseClass::~BaseClass()
```
```cpp
DerivedClass derived;
const std::string DerivedClass::* ptr_derived = &DerivedClass::derived_name;
const std::string DerivedClass::* ptr_base_from_derived = &DerivedClass::base_name;
const std::string BaseClass::* ptr_base = &BaseClass::base_name;
std::cout << derived.*ptr_derived << std::endl;
std::cout << derived.*ptr_base_from_derived << std::endl;
std::cout << base.*ptr_base << std::endl;

int success = 0;

return success;
```
3. 
```cpp
const std::string DerivedClass::* ptr_derived = DerivedClass::get_derived_name_ptr(); 
const std::string DerivedClass::* ptr_base_from_derived = BaseClass::get_base_name_ptr(); 
const std::string BaseClass::* ptr_base = BaseClass::get_base_name_ptr();
```
4. 
```output
BaseClass::BaseClass()
BaseClass::BaseClass()
DerivedClass::DerivedClass()
BaseClass::print()
DerivedClass::print()
DerivedClass::print()
DerivedClass::~DerivedClass()
BaseClass::~BaseClass()
BaseClass::~BaseClass()
```
```cpp
void (BaseClass::*ptr_base_func)() = &BaseClass::print;
void (DerivedClass::*ptr_derived_base_func)() = &BaseClass::print;
void (DerivedClass::*ptr_derived_func)() = &DerivedClass::print;

(base.*ptr_base_func)();
(derived.*ptr_derived_base_func)();
(derived.*ptr_derived_func)();
```