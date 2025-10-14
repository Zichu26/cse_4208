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