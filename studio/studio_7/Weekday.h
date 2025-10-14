#ifndef WEEKDAY_H
#define WEEKDAY_H

#include <ostream>
namespace enumerations {
    enum class Weekday {
        Sunday,
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday
    };

    enum class Pressure {
        lo,
        med,
        hi,
        pop
    };

    std::ostream& operator<<(std::ostream& os, const Pressure& pressure);
    std::ostream& operator<<(std::ostream& os, const Weekday& day);
    // int is a dummy parameter used solely to distinguish it from the prefix increment operator.
    Weekday operator++(Weekday& day, int);  
    Weekday operator--(Weekday& day, int);
    Pressure& operator++(Pressure& pressure); 
}

#endif // WEEKDAY_H