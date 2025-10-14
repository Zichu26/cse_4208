#ifndef MYSTRUCT_H
#define MYSTRUCT_H

class MyStruct {
    int x;
    int y;

    MyStruct();

    int getX() const;
    int getY() const;
    MyStruct& setX(int value);
    MyStruct& setY(int value);

};

#endif