#ifndef MYSTRUCT_H
#define MYSTRUCT_H

#include <ostream>
using std::ostream;


template <typename T>
class MyStruct;

// forward declaration
template <typename T>
ostream& operator<<(ostream& os, const MyStruct<T>& obj);

template <typename T = int>
class MyStruct {
private:
    T value;
    
public:
    MyStruct(T v);
    
    friend ostream& operator<< <T>(ostream& os, const MyStruct<T>& obj);
};


#include "MyStruct.cpp"

#endif // MYSTRUCT_H