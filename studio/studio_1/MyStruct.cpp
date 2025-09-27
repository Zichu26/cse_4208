#ifndef MYSTRUCT_CPP
#define MYSTRUCT_CPP

// #include "MyStruct.h"

// MyStruct::MyStruct(int v) : value(v) {
// }

template <typename T>
MyStruct<T>::MyStruct(T v) : value(v) {
}

#endif // MYSTRUCT_CPP