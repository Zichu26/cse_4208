/* A C++ Program in the spirit of the classic example from page 6
   of Kernighan and Ritchie's The C Programming Language, 2nd. Ed. */

#include <iostream> // for cout ostream and endl manipulator
#include "Weekday.h"
#include <set>
#include <algorithm>
#include <iterator>

using namespace std; // optional, could say std::cout and std::endl below instead

const int SUCCESS = 0; // by convention, where non-zero results are error codes

int main (int argc, char** argv) { // argc and argv not used, but their types are specified

    Pressure p = Pressure::lo;
    
    std::cout << "Initial value: " << p << std::endl;
    std::cout << "Testing precedence: " << ++p << std::endl;
    std::cout << "Final value: " << p << std::endl;

    Pressure p1 = Pressure::med;
    Pressure p2 = Pressure::hi;
    
    Weekday w1 = Weekday::Monday;
    Weekday w2 = Weekday::Friday;
    
    std::cout << "Pressure comparisons:" << std::endl;
    std::cout << p1 << "< " << p2 << ": " << (p1 < p2) << std::endl;
    std::cout << p2 << "< " << p1 << ": " << (p2 < p1) << std::endl;
    std::cout << "\nWeekday comparisons:" << std::endl;
    std::cout << w1 << "< " << w2 << ": " << (w1 < w2) << std::endl;
    std::cout << w2 << "< " << w1 << ": " << (w2 < w1) << std::endl;

    std::set<Weekday> weekdays1 = {Weekday::Monday, Weekday::Wednesday, Weekday::Friday};
    std::set<Weekday> weekdays2 = {Weekday::Sunday, Weekday::Monday, Weekday::Tuesday, Weekday::Thursday, Weekday::Saturday};
    
    std::cout << "First set of weekdays:" << std::endl;
    for (const auto& day : weekdays1) {
        std::cout << day << " ";
    }
    std::cout << endl;
    std::cout << "\nSecond set of weekdays:" << std::endl;
    for (const auto& day : weekdays2) {
        std::cout << day << " ";
    }
    std::cout << endl;

    std::set<Weekday> intersection;
    std::set_intersection(weekdays1.begin(), weekdays1.end(),
                         weekdays2.begin(), weekdays2.end(),
                         std::inserter(intersection, intersection.end()));
    
    std::cout << "\nIntersection of the two sets:" << std::endl;
    for (const auto& day : intersection) {
        std::cout << day << std::endl;
    }

    return SUCCESS; // functional: returns a success/failure code
}
