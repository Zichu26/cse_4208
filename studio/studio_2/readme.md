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
    Code:
        Weekday.h
            #ifndef WEEKDAY_H
            #define WEEKDAY_H

            #include <iostream>

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
            Weekday operator++(Weekday& day, int);

            #endif
        
        Weekday.cpp
            #include "weekday.h"

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

        int main() {
            Weekday day = Weekday::Sunday;
            Weekday start = day;
            
            do {
                std::cout << day;
                day++;
            } while (day != start);
            
            std::cout << std::endl;
            return 0;
        }
      

    Output: 
        Wed Thu Fri Sat Sun Mon Tue
4.
    Code:
    Weekday.h
        Weekday operator--(Weekday& day, int);
    
    Weekday.cpp
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
        int main() {
            Weekday day = Weekday::Sunday;
            Weekday start = day;
            
            do {
                std::cout << day;
                day++;
            } while (day != start);
            
            std::cout << std::endl;
            
            do {
                std::cout << day;
                day--;
            } while (day != start);
            
            std::cout << std::endl;
            
            return 0;
        }
    Output:
        Wed Tue Mon Sun Sat Fri Thu
5.
    Code:
        Weekday.h
            enum class Pressure {
                Low,
                Normal,
                High
            };
        std::ostream& operator<<(std::ostream& os, const Pressure& pressure);

        Weekday.cpp
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
        main
            Pressure currentPressure = Pressure::pop;
            std::cout << currentPressure << std::endl;

    Output:
        Pop
6.
    Code:
        Weekday.h
            Pressure& operator++(Pressure& pressure);
        Weekday.cpp
            Pressure& operator++(Pressure& pressure) {
                switch (pressure) {
                    case Pressure::Low:
                        pressure = Pressure::Normal;
                        break;
                    case Pressure::Normal:
                        pressure = Pressure::High;
                        break;
                    case Pressure::High:
                        // Leave unchanged at highest value
                        break;
                }
                return pressure;
            }
        main:
            for (Pressure p = Pressure::Low; p != Pressure::High; ++p) {
                std::cout << p;
            }
            std::cout << Pressure::High << std::endl;
    Output:
        Low Medium High
