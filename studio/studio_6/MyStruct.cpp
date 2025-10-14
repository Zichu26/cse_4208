#include "MyStruct.h"

MyStruct::MyStruct(const MyStruct& other) : x(other.x), y(other.y) {
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