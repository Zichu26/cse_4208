/* A C++ Program in the spirit of the classic example from page 6
   of Kernighan and Ritchie's The C Programming Language, 2nd. Ed. */

#include <iostream> // for cout ostream and endl manipulator
#include "MyStruct.h"

using namespace std; // optional, could say std::cout and std::endl below instead

const int SUCCESS = 0; // by convention, where non-zero results are error codes

int main (int argc, char** argv) { // argc and argv not used, but their types are specified

    MyStruct obj1(1);
    MyStruct obj2(2);
    
    cout << obj1.value << " " << obj2.value << endl;
    
    std::swap(obj1, obj2);
    
    cout << obj1.value << " " << obj2.value << endl;

    return SUCCESS; // functional: returns a success/failure code
}
