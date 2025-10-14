1. Zichu Pan
2. 
```
Sun  Mon  Tue  Wed  Thu  Fri  Sat
Low  Medium  High  Pop
```
3. 
```cpp
// main.cpp
using std::cout; 
using std::endl;

// Weekday.cpp
using std::ostream;
```
4. 
```
/home/compute/p.zichu/cse_4208/studio/studio_7/studio7.cpp: In function ‘int main()’:
/home/compute/p.zichu/cse_4208/studio/studio_7/studio7.cpp:7:5: error: ‘Weekday’ was not declared in this scope
     Weekday day = Weekday::Sunday;
     ^~~~~~~
/home/compute/p.zichu/cse_4208/studio/studio_7/studio7.cpp:7:5: note: suggested alternative:
In file included from /home/compute/p.zichu/cse_4208/studio/studio_7/studio7.cpp:1:
/home/compute/p.zichu/cse_4208/studio/studio_7/Weekday.h:6:16: note:   ‘enumerations::Weekday’
     enum class Weekday {
                ^~~~~~~
/home/compute/p.zichu/cse_4208/studio/studio_7/studio7.cpp:9:17: error: ‘day’ was not declared in this scope
         cout << day << " ";
                 ^~~
/home/compute/p.zichu/cse_4208/studio/studio_7/studio7.cpp:14:5: error: ‘Pressure’ was not declared in this scope
     Pressure pressure = Pressure::lo;
     ^~~~~~~~
/home/compute/p.zichu/cse_4208/studio/studio_7/studio7.cpp:14:5: note: suggested alternative:
In file included from /home/compute/p.zichu/cse_4208/studio/studio_7/studio7.cpp:1:
/home/compute/p.zichu/cse_4208/studio/studio_7/Weekday.h:16:16: note:   ‘enumerations::Pressure’
     enum class Pressure {
                ^~~~~~~~
/home/compute/p.zichu/cse_4208/studio/studio_7/studio7.cpp:15:12: error: ‘pressure’ was not declared in this scope
     while (pressure != Pressure::pop) {
            ^~~~~~~~
/home/compute/p.zichu/cse_4208/studio/studio_7/studio7.cpp:15:24: error: ‘Pressure’ is not a class, namespace, or enumeration
     while (pressure != Pressure::pop) {
                        ^~~~~~~~
/home/compute/p.zichu/cse_4208/studio/studio_7/studio7.cpp:19:13: error: ‘pressure’ was not declared in this scope
     cout << pressure << " ";
             ^~~~~~~~
gmake[2]: *** [CMakeFiles/studio7.dir/build.make:76: CMakeFiles/studio7.dir/studio7.cpp.o] Error 1
gmake[1]: *** [CMakeFiles/Makefile2:83: CMakeFiles/studio7.dir/all] Error 2
gmake: *** [Makefile:91: all] Error 2
```
5. I didn't have to add `using namespace enumerations;` to the source files because the definitions in those files are already inside the `enumerations` namespace block. When code is written inside a namespace block, all the names from that namespace are directly accessible.
```cpp
using namespace enumerations;
```
6. 
```cpp
using enumerations::Weekday; 
using enumerations::Pressure;
```