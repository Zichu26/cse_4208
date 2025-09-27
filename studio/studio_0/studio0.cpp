/* A C++ Program in the spirit of the classic example from page 6
   of Kernighan and Ritchie's The C Programming Language, 2nd. Ed. */

#include <iostream> // for cout ostream and endl manipulator

using namespace std; // optional, could say std::cout and std::endl below instead

const int SUCCESS = 0; // by convention, where non-zero results are error codes
const int NO_ARGUMENTS = 1;

int main (int argc, char** argv) { // argc and argv not used, but their types are specified
    if (argc < 2) {
        cout << "usage: " << argv[0] << " <arg1> [<arg2> ...]" << endl;
        return NO_ARGUMENTS;
    }
    
    cout << "hello, world!" << endl; // procedural: has an effect

    return SUCCESS; // functional: returns a success/failure code
}
