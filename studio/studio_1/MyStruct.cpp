#ifndef MYSTRUCT_CPP
#define MYSTRUCT_CPP

// #include "MyStruct.h"

// MyStruct::MyStruct(int v) : value(v) {
// }

template <typename T>
MyStruct<T>::MyStruct(T v) : value(v) {
}

template <typename T>
ostream& operator<<(ostream& os, const MyStruct<T>& obj) {
    os << obj.value;
    return os;
}

#endif // MYSTRUCT_CPP