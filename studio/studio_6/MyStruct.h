#ifndef MYSTRUCT_H
#define MYSTRUCT_H

#include <iostream>

class MyStruct {
private:
    int x;
    int y;

public:
    MyStruct();
    MyStruct(const MyStruct& other);
    int getX() const;
    int getY() const;
    MyStruct& setX(int value);
    MyStruct& setY(int value);

};

MyStruct passByValue(MyStruct obj);

#endif