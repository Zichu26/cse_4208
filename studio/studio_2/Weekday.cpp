#include "Weekday.h"

std::ostream& operator<<(std::ostream& os, const Weekday& day) {
    switch (day) {
        case Weekday::Sunday:
            os << "Sun";
            break;
        case Weekday::Monday:
            os << "Mon";
            break;
        case Weekday::Tuesday:
            os << "Tue";
            break;
        case Weekday::Wednesday:
            os << "Wed";
            break;
        case Weekday::Thursday:
            os << "Thu";
            break;
        case Weekday::Friday:
            os << "Fri";
            break;
        case Weekday::Saturday:
            os << "Sat";
            break;
    }
    
    os << " ";
    return os;
}