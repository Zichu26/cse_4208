#include <iostream>
#include <cstring>
#include <cmath>
#include <functional>
#include "Compose_T.h"

int main() {
    const char* str1 = "Hello, ";
    const char* str2 = "World!";

    std::size_t (*func_ptr)(const char*) = std::strlen;
    
    std::cout << "First string: \"" << str1 << "\"" << std::endl;
    std::cout << "Second string: \"" << str2 << "\"" << std::endl;
    
    std::cout << "Length of first string: " << (*func_ptr)(str1) << std::endl;
    std::cout << "Length of second string: " << (*func_ptr)(str2) << std::endl;

    float value = 1.5f;
    std::cout << "Value: " << value << std::endl;
    std::cout << "sin(cos(" << value << ")): " << std::sin(std::cos(value)) << std::endl;


    std::function<float(float)> sin_func = [](float x) { return std::sin(x); };
    std::function<float(float)> cos_func = [](float x) { return std::cos(x); };

    std::cout << "Value: " << value << std::endl;
    std::cout << "sin_func(cos_func(" << value << ")): " << sin_func(cos_func(value)) << std::endl;
    
    auto composed_func = compose(sin_func, cos_func);
    std::cout << "Value: " << value << std::endl;
    std::cout << "composed_func(" << value << "): " << composed_func(value) << std::endl;

    auto bound_func = std::bind(composed_func, value);
    std::cout << "bound_func(): " << bound_func() << std::endl;
    
    return 0;
}