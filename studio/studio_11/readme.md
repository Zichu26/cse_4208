1. Zichu Pan
2. 
```
class MyClass {
private:
    std::string str;
};
```
3. 
```
Copy constructor: constructing object at 0x7fff24ff2590 from object at 0x7fff24ff25b0
```
4. 
```
Constructor: constructing object at 0x7ffedc404490 with str = "hello"
Copy constructor: constructing object at 0x7ffedc404470 from object at 0x7ffedc404490 with str = "hello"
Destructor: destroying object at 0x7ffedc404470 with str = "hello"
Destructor: destroying object at 0x7ffedc404490 with str = "hello"
```
5. 
```
Constructor: constructing object at 0x7ffe1d1fa1d0 with str = "hello"
Constructor: constructing object at 0x7ffe1d1fa1b0 with str = "goodbye"
Constructor: constructing object at 0x7ffe1d1fa190 with str = "bro"
Assignment operator: assigning to object at 0x7ffe1d1fa1b0 with str = "goodbye" from object at 0x7ffe1d1fa1d0 with str = "hello"
Assignment operator: assigning to object at 0x7ffe1d1fa190 with str = "bro" from object at 0x7ffe1d1fa1b0 with str = "hello"
Destructor: destroying object at 0x7ffe1d1fa190 with str = "hello"
Destructor: destroying object at 0x7ffe1d1fa1b0 with str = "hello"
Destructor: destroying object at 0x7ffe1d1fa1d0 with str = "hello"
```
6. 
```
Constructor: constructing object at 0x192deb0 with str = "hello"
Destructor: destroying object at 0x192deb0 with str = "hello"
```
7. 
```
Constructor: constructing object at 0x25c5eb0 with str = "hello"
print(): object at 0x25c5eb0 with str = "hello"
Destructor: destroying object at 0x25c5eb0 with str = "hello"
```
8. 
