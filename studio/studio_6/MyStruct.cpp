#include "MyStruct.h"

MyStruct::MyStruct() : x(0), y(0) {
    
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