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

#endif // WEEKDAY_H