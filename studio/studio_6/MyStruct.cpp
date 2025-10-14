#include "MyStruct.h"

MyStruct::MyStruct() : x(0), y(0) {
    std::cout << "Default constructor: MyStruct()" << std::endl;
    std::cout << "  Address: " << this << std::endl;
    std::cout << "  Values: x_val=" << x << ", y_val=" << y << std::endl;
}

MyStruct::MyStruct(const MyStruct& other) : x(other.x), y(other.y) {
    std::cout << "Copy constructor: MyStruct(const MyStruct& other)" << std::endl;
    std::cout << "  Address: " << this << std::endl;
    std::cout << "  Source address: " << &other << std::endl;
    std::cout << "  Values: x_val=" << x << ", y_val=" << y << std::endl;
}

int MyStruct::getX() const {
    return x;
}

int MyStruct::getY() const {
    return y;
}

MyStruct& MyStruct::setX(int value) {
    x = value;
    return *this;
}

MyStruct& MyStruct::setY(int value) {
    y = value;
    return *this;
}

MyStruct passByValue(MyStruct obj) {
    return obj;
}