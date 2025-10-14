1. Zichu Pan
2. 
```
Output:
Default constructor called: object_id = 0, address = 0x7ffc604e29b0
Copy constructor called: object_id = 0, address = 0x7ffc604e29a8
Destructor called: object_id = 0, address = 0x7ffc604e29a8
Destructor called: object_id = 0, address = 0x7ffc604e29b0
```
```cpp
// MyClass.h
#ifndef MYCLASS_H
#define MYCLASS_H

#include <cstddef>
class MyClass {
private:
	static size_t object_count;
	size_t object_id;
public:
	MyClass();
	MyClass(const MyClass& other);
	~MyClass();
};
#endif
```
```cpp
// MyClass.cpp
#include "MyClass.h"
#include <iostream>

size_t MyClass::object_count = 0;
MyClass::MyClass() : object_id(object_count) {
	++object_count;
	std::cout << "Default constructor called: object_id = " << object_id << ", address = " << this << std::endl;
}

MyClass::MyClass(const MyClass& other) : object_id(other.object_id) {
	++object_count;
	std::cout << "Copy constructor called: object_id = " << object_id << ", address = " << this << std::endl;
}

MyClass::~MyClass() {
	std::cout << "Destructor called: object_id = " << object_id << ", address = " << this << std::endl;
}
```
```cpp
// main.cpp
#include "MyClass.h"
int main() {
	MyClass obj1;
	MyClass obj2(obj1);
	int success = 0;
	return success;
}
```
3. Memory leak for non-array delete as only one destructor is called for the head of the arrray.
```
array delete:
Default constructor called: object_id = 0, address = 0x21bdeb8
Default constructor called: object_id = 1, address = 0x21bdec0
Default constructor called: object_id = 2, address = 0x21bdec8
Destructor called: object_id = 2, address = 0x21bdec8
Destructor called: object_id = 1, address = 0x21bdec0
Destructor called: object_id = 0, address = 0x21bdeb8
```
```
non-array delete:
Default constructor called: object_id = 0, address = 0x25c2eb8
Default constructor called: object_id = 1, address = 0x25c2ec0
Default constructor called: object_id = 2, address = 0x25c2ec8
Destructor called: object_id = 0, address = 0x25c2eb8
munmap_chunk(): invalid pointer
./run.sh: line 4: 1999817 Aborted                 (core dumped) ./build/studio10
```
4. 
```cpp
std::shared_ptr<MyClass> ptr1 = std::make_shared<MyClass>();
std::shared_ptr<MyClass> ptr2 = std::make_shared<MyClass>(*ptr1);
```
5. 
```
Default constructor called: object_id = 0, address = 0x9ffec0
Copy constructor called: object_id = 0, address = 0xa002f0
print_info called: object_id = 0, address = 0x9ffec0
Destructor called: object_id = 0, address = 0xa002f0
Destructor called: object_id = 0, address = 0x9ffec0
```
6. Before the assignment (`ptr1 = ptr2`)
	- ptr1 owns first object ref count =1
	- ptr2 owns second object ref count =1
	- `weak_ptr1` observes the first object but doesn't own it
	During the assignment (`ptr1 = ptr2`):
	- `ptr1` stops pointing to the first object ref count=0
	- The first object is immediately destroyed with the destructor
	- `ptr1` now points to the second object, its reference count increases to 2
	After the assignment:
	- `weak_ptr1` now points to a destroyed object
	- When we call `weak_ptr1.lock()` the second time, it returns `nullptr` because the object it was observing has been destroyed
```
Default constructor called: object_id = 0, address = 0x15f8ec0
Copy constructor called: object_id = 0, address = 0x15f92f0
print_info called: object_id = 0, address = 0x15f8ec0
-------------------
Destructor called: object_id = 0, address = 0x15f8ec0
-------------------
The weak_ptr no longer points to a valid object
Destructor called: object_id = 0, address = 0x15f92f0
```
7. 