#ifndef MYSTRUCT_H
#define MYSTRUCT_H

class MyStruct {
private:
    int x;
    int y;
    
public:
    MyStruct();
    int getX() const;
    int getY() const;
    MyStruct& setX(int value);
    MyStruct& setY(int value);

};

#endif