#include <iostream>
#include <cstring>

int main() {
    const char* str1 = "Hello, ";
    const char* str2 = "World!";

    std::size_t (*func_ptr)(const char*) = std::strlen;
    
    std::cout << "First string: \"" << str1 << "\"" << std::endl;
    std::cout << "Second string: \"" << str2 << "\"" << std::endl;
    
    std::cout << "Length of first string: " << (*func_ptr)(str1) << std::endl;
    std::cout << "Length of second string: " << (*func_ptr)(str2) << std::endl;
    
    return 0;
}