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