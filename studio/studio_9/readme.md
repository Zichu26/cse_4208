1. Zichu Pan
2. 
```
output:
BaseClass::BaseClass()
BaseClass::BaseClass()
DerivedClass::DerivedClass()
DerivedClass
DerivedClass
BaseClass
DerivedClass::~DerivedClass()
BaseClass::~BaseClass()
BaseClass::~BaseClass()
```
```cpp
BaseClass base_obj;
DerivedClass derived_obj;
std::string DerivedClass::*ptr1 = &DerivedClass::name;
std::string BaseClass::*ptr2 = &BaseClass::name;
std::string BaseClass::*ptr3 = &BaseClass::name;
std::cout << derived_obj.*ptr1 << std::endl;
std::cout << derived_obj.*ptr2 << std::endl;
std::cout << base_obj.*ptr3 << std::endl;

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
5. With virtual functions, the call uses dynamic dispatch - the actual function called is determined at runtime based on the actual type of the object (`derived` is a `DerivedClass`), so it calls the overridden version.
```
output:
BaseClass::BaseClass()
BaseClass::BaseClass()
DerivedClass::DerivedClass()
BaseClass::print()
BaseClass::print()
DerivedClass::print()
DerivedClass::~DerivedClass()
BaseClass::~BaseClass()
BaseClass::~BaseClass()
```
6. 
```cpp
std::function<void(BaseClass&)> func_base = &BaseClass::print;
std::function<void(DerivedClass&)> func_derived_base = &BaseClass::print;
std::function<void(DerivedClass&)> func_derived = &DerivedClass::print;
```
7. 
```cpp
auto func_base = std::mem_fn(&BaseClass::print); 
auto func_derived_base = std::mem_fn(&BaseClass::print); 
auto func_derived = std::mem_fn(&DerivedClass::print);
```