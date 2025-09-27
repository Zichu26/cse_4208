1. Zichu Pan
2. 
    Code:
        const char* str1 = "Hello, ";
        const char* str2 = "World!";
        
        std::cout << "First string: \"" << str1 << "\"" << std::endl;
        std::cout << "Second string: \"" << str2 << "\"" << std::endl;
        
        std::cout << "Length of first string: " << std::strlen(str1) << std::endl;
        std::cout << "Length of second string: " << std::strlen(str2) << std::endl;
    Output:
        First string: "Hello, "
        Second string: "World!"
        Length of first string: 7
        Length of second string: 6
3.
    Code:
        std::size_t (*func_ptr)(const char*) = std::strlen;

        std::cout << "First string: \"" << str1 << "\"" << std::endl;
        std::cout << "Second string: \"" << str2 << "\"" << std::endl;
        
        std::cout << "Length of first string: " << (*func_ptr)(str1) << std::endl;
        std::cout << "Length of second string: " << (*func_ptr)(str2) << std::endl;
    Output:
        First string: "Hello, "
        Second string: "World!"
        Length of first string: 7
        Length of second string: 6
4.
    Code:
        float value = 1.5f;
        std::cout << "Value: " << value << std::endl;
        std::cout << "sin(cos(" << value << ")): " << std::sin(std::cos(value)) << std::endl;
    Output:
        Value: 1.5
        sin(cos(1.5)): 0.0706782
5.
    Code:
        std::function<float(float)> sin_func = [](float x) { return std::sin(x); };
        std::function<float(float)> cos_func = [](float x) { return std::cos(x); };

        std::cout << "Value: " << value << std::endl;
        std::cout << "sin_func(cos_func(" << value << ")): " << sin_func(cos_func(value)) << std::endl;
    Output:
        Value: 1.5
        sin(cos(1.5)): 0.0706782
6.
    Code:
        auto composed_func = compose(sin_func, cos_func);
        std::cout << "Value: " << value << std::endl;
        std::cout << "composed_func(" << value << "): " << composed_func(value) << std::endl;

    Output:
        Value: 1.5
        composed_func(1.5): 0.0706782
7.
    Code:
        auto bound_func = std::bind(composed_func, value);
        std::cout << "bound_func(): " << bound_func() << std::endl;

    Output:
        bound_func(): 0.0706782


    

    