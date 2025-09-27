/* A C++ Program in the spirit of the classic example from page 6
   of Kernighan and Ritchie's The C Programming Language, 2nd. Ed. */

#include <iostream> // for cout ostream and endl manipulator
#include "Weekday.h"

using namespace std; // optional, could say std::cout and std::endl below instead

const int SUCCESS = 0; // by convention, where non-zero results are error codes

int main (int argc, char** argv) { // argc and argv not used, but their types are specified

    Pressure currentPressure = Pressure::pop;
    std::cout << currentPressure << std::endl;

    for (Pressure p = Pressure::lo; p != Pressure::pop; ++p) {
        std::cout << p;
    }
    std::cout << std::endl;

    return SUCCESS; // functional: returns a success/failure code
}
