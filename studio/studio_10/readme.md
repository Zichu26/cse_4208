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