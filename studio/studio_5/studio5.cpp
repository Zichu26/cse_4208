#include <iostream>
#include <cstring>

int main() {
    const char* str1 = "Hello, ";
    const char* str2 = "World!";
    
    std::cout << "First string: \"" << str1 << "\"" << std::endl;
    std::cout << "Second string: \"" << str2 << "\"" << std::endl;
    
    std::cout << "Length of first string: " << std::strlen(str1) << std::endl;
    std::cout << "Length of second string: " << std::strlen(str2) << std::endl;
    
    return 0;
}