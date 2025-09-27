#ifndef MYSTRUCT_H
#define MYSTRUCT_H

struct MyStruct {
    int value;
    
    MyStruct(int v);

    // MyStruct(const MyStruct&) = delete;
    // MyStruct& operator=(const MyStruct&) = delete;
    // ~MyStruct() = delete;
};

#endif // MYSTRUCT_H