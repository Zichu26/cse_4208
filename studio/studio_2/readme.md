1. Zichu Pan
2.
    code:
        Weekday.h
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

        Weekday.cpp

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

        main:
            Weekday today = Weekday::Wednesday;
            std::cout << today << std::endl;

    Output:
        Wed
        
3. 
