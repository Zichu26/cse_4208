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
    
