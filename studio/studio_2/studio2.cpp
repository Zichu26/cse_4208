/* A C++ Program in the spirit of the classic example from page 6
   of Kernighan and Ritchie's The C Programming Language, 2nd. Ed. */

#include <iostream> // for cout ostream and endl manipulator
#include "Weekday.h"

using namespace std; // optional, could say std::cout and std::endl below instead

const int SUCCESS = 0; // by convention, where non-zero results are error codes

int main (int argc, char** argv) { // argc and argv not used, but their types are specified
    Weekday today = Weekday::Wednesday;
    std::cout << today << std::endl;
    Weekday start = today;

    do {
        std::cout << today;
        today++;
    } while (today != start);
    
    std::cout << std::endl;

    return SUCCESS; // functional: returns a success/failure code
}
