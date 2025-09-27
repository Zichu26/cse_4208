#ifndef WEEKDAY_H
#define WEEKDAY_H

#include <ostream>

enum class Weekday {
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

std::ostream& operator<<(std::ostream& os, const Weekday& day);
// int is a dummy parameter used solely to distinguish it from the prefix increment operator.
Weekday operator++(Weekday& day, int);  
Weekday operator--(Weekday& day, int);

#endif // WEEKDAY_H