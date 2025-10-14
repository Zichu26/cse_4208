1. Zichu Pan
2. Before adding constructor, there are no errors or warnings. These values came from uninitialized stack memory.
```
x: 0
y: 0
```
	After adding constructor, there are no errors or warnings. These values came from explicit initialization in the constructor's member initialization list.
```
x: 0
y: 0
```
3. Changing struct to class directly results in compilation error because `private` members are only accessible within the class itself.
```
/home/compute/p.zichu/cse_4208/studio/studio_6/studio6.cpp:6:29: error: ‘int MyStruct::x’ is private within this context
     std::cout << "x: " << s.x << std::endl;
```
	`struct` members are `public` by default. `class` members are `private` by default. The `public` specfication needs to be used for `class` to make member variables visisable from outside class.
4. 
```
output:
x: 0
y: 0
non const after mutation:
x: 33
y: 44

x: 0
y: 0
```
```cpp
// main.cpp
#include <iostream>
#include "MyStruct.h

int main() {
	MyStruct s1;
	std::cout << "x: " << s1.getX() << std::endl;
	std::cout << "y: " << s1.getY() << std::endl;
	s1.setX(33);
	s1.setY(44);
	std::cout << "non const after mutation:" << std::endl;
	std::cout << "x: " << s1.getX() << std::endl;
	std::cout << "y: " << s1.getY() << std::endl;
	std::cout << std::endl;
	
	const MyStruct s2;
	std::cout << "x: " << s2.getX() << std::endl;
	std::cout << "y: " << s2.getY() << std::endl;
	// s2.setX(33);
	// s2.setY(44);
}
```
```cpp
// MyStruct.h
#ifndef MYSTRUCT_H
#define MYSTRUCT_H

class MyStruct {
private:
	int x;
	int y;
	
public:
	MyStruct();
	int getX() const;
	int getY() const;
	MyStruct& setX(int value);
	MyStruct& setY(int value);
};
#endif
```
```cpp
// MyStruct.cpp
#include "MyStruct.h"
MyStruct::MyStruct() : x(0), y(0) {
}

int MyStruct::getX() const {
	return x;
}

int MyStruct::getY() const {
	return y;
}

MyStruct& MyStruct::setX(int value) {
	x = value;
	return *this;
}

MyStruct& MyStruct::setY(int value) {
	y = value;
	return *this;
}
```
5. We have explicitly provided a default constructor that sets `m.x` and `m.y` to (0,0). The compiler supplies a copy constructor that performs memberwise copy.
6. 
```output
m.x is 4196240 and m.y is 0
m.x is 7 and m.y is 3
n.x = 7 and n.y = 3
```
	The copy constructor behaved the same, but the compiler supplied default constructor does initialied the member variables so it contains the garbage data from stack.
7. 
```cpp
MyStruct m; // default constructor called
MyStruct result1 = passByValue(m); // copy constructor called twice, once for creating parameter m, once for creating result
m.setX(7).setY(3);
MyStruct result2 = passByValue(m); // copy constructor called twice, once for creating parameter m, once for creating result
MyStruct n(m); // copy constructor called once
MyStruct result3 = passByValue(n); // copy constructor called twice, once for creating parameter n, once for creating result
```
8. You get a compiler error saying the constructor is private and cannot be accessed from `main()`. You cannot create variables using default construction and the compiler does not supply its own default constructor.
