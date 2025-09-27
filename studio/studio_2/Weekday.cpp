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

Weekday operator++(Weekday& day, int) {
    switch (day) {
        case Weekday::Sunday:
            day = Weekday::Monday;
            break;
        case Weekday::Monday:
            day = Weekday::Tuesday;
            break;
        case Weekday::Tuesday:
            day = Weekday::Wednesday;
            break;
        case Weekday::Wednesday:
            day = Weekday::Thursday;
            break;
        case Weekday::Thursday:
            day = Weekday::Friday;
            break;
        case Weekday::Friday:
            day = Weekday::Saturday;
            break;
        case Weekday::Saturday:
            day = Weekday::Sunday; 
            break;
    }
    return day;
}

Weekday operator--(Weekday& day, int) {
    switch (day) {
        case Weekday::Sunday:
            day = Weekday::Saturday; 
            break;
        case Weekday::Monday:
            day = Weekday::Sunday;
            break;
        case Weekday::Tuesday:
            day = Weekday::Monday;
            break;
        case Weekday::Wednesday:
            day = Weekday::Tuesday;
            break;
        case Weekday::Thursday:
            day = Weekday::Wednesday;
            break;
        case Weekday::Friday:
            day = Weekday::Thursday;
            break;
        case Weekday::Saturday:
            day = Weekday::Friday;
            break;
    }
    return day;
}