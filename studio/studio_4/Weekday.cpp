#include "Weekday.h"

std::ostream& operator<<(std::ostream& os, const Pressure& pressure) {
    switch (pressure) {
        case Pressure::lo:
            os << "Low";
            break;
        case Pressure::med:
            os << "Medium";
            break;
        case Pressure::hi:
            os << "High";
            break;
        case Pressure::pop:
            os << "Pop";
            break;
    }
    
    os << " ";
    return os;
}

Pressure& operator++(Pressure& pressure) {
    switch (pressure) {
        case Pressure::lo:
            pressure = Pressure::med;
            break;
        case Pressure::med:
            pressure = Pressure::hi;
            break;
        case Pressure::hi:
            pressure = Pressure::pop;
            break;
        case Pressure::pop:
            break;
    }
    return pressure;
}