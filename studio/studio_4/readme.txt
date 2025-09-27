1. Zichu Pan
2. 
    Code:
            std::cout << "Initial value: " << p << std::endl;
            std::cout << "Testing precedence: " << ++p << std::endl;
            std::cout << "Final value: " << p << std::endl;
    Output:
        Initial value: Low
        Testing precedence: Medium  
        Final value: Medium
    The prefix ++ operator have higher precedence.
    The output demonstrated ++p happened which increased Pressure::low to Pressure medium
    and was then printed.
3.
    Code:
        std::cout << "Pressure comparisons:" << std::endl;
        std::cout << p1 << "< " << p2 << ": " << (p1 < p2) << std::endl;
        std::cout << p2 << "< " << p1 << ": " << (p2 < p1) << std::endl;
        std::cout << "\nWeekday comparisons:" << std::endl;
        std::cout << w1 << "< " << w2 << ": " << (w1 < w2) << std::endl;
        std::cout << w2 << "< " << w1 << ": " << (w2 < w1) << std::endl;
    Output:
        Pressure comparisons:
        Medium < High : 1
        High < Medium : 0

        Weekday comparisons:
        Mon < Fri : 1
        Fri < Mon : 0
    This works as when declaring an enum class, each enumerator is automatically assigned an integer
    starting from 0 and increment for each subsequent enumerator. So without operation overloading the
    default comparisons are comparing the underlying int values.
4.
    Code:
        std::cout << "First set of weekdays:" << std::endl;
        for (const auto& day : weekdays1) {
            std::cout << day << " ";
        }
        std::cout << endl;
        std::cout << "\nSecond set of weekdays:" << std::endl;
        for (const auto& day : weekdays2) {
            std::cout << day << " ";
        }
    Output:
        First set of weekdays:
        Mon  Wed  Fri
        Second set of weekdays:
        Sun  Tue  Thu  Sat
5.
    Code:
            std::set<Weekday> intersection;
            std::set_intersection(weekdays1.begin(), weekdays1.end(),
                                weekdays2.begin(), weekdays2.end(),
                                std::inserter(intersection, intersection.end()));
            
            std::cout << "\nIntersection of the two sets:" << std::endl;
            for (const auto& day : intersection) {
                std::cout << day << std::endl;
            }
    Output:
        First set of weekdays:
        Mon  Wed  Fri

        Second set of weekdays:
        Sun  Mon  Tue  Thu  Sat

        Intersection of the two sets:
            Mon
6.
    Code:
        std::set<Weekday> union_set;
        std::set_union(weekdays1.begin(), weekdays1.end(),
                    weekdays2.begin(), weekdays2.end(),
                    std::inserter(union_set, union_set.end()));
        std::cout << "\nUnion of the two sets:" << std::endl;
        for (const auto& day : union_set) {
            std::cout << day << " ";
        }
    Output:
        Union of the two sets:
            Sun  Mon  Tue  Wed  Thu  Fri  Sat