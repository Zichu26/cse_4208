#include <iostream>
#include "MyStruct.h"

int main() {
    MyStruct s1;
    std::cout << "x: " << s1.getX() << std::endl;
    std::cout << "y: " << s1.getY() << std::endl;
    s1.setX(33);
    s1.setY(44);
    std::cout << "non const after mutation:" << std::endl;
    std::cout << "x: " << s1.getX() << std::endl;
    std::cout << "y: " << s1.getY() << std::endl;
    
    std::cout << std::endl;
    const MyStruct s2;
    std::cout << "x: " << s2.getX() << std::endl;
    std::cout << "y: " << s2.getY() << std::endl;
    // s2.setX(33);  
    // s2.setY(44);  
    
}