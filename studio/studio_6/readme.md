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