#ifndef WEEKDAY_H
#define WEEKDAY_H

#include <ostream>

enum class Pressure {
    lo,
    med,
    hi,
    pop
};

std::ostream& operator<<(std::ostream& os, const Pressure& pressure);
std::ostream& operator<<(std::ostream& os, const Weekday& day);
// int is a dummy parameter used solely to distinguish it from the prefix increment operator.
Pressure& operator++(Pressure& pressure); 

#endif // WEEKDAY_H