#ifndef MYSTRUCT_H
#define MYSTRUCT_H

// struct MyStruct {
//     int value;
    
//     MyStruct(int v);

//     // MyStruct(const MyStruct&) = delete;
//     // MyStruct& operator=(const MyStruct&) = delete;
//     // ~MyStruct() = delete;
// };

template <typename T = int>
struct MyStruct {
    T value;
    
    MyStruct(T v);
};

#include "MyStruct.cpp"

#endif // MYSTRUCT_H