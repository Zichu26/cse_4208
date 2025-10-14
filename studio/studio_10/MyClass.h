#ifndef MYCLASS_H
#define MYCLASS_H

class MyClass {
private:
    static size_t object_count;
    size_t object_id;
    
public:
    MyClass();
    MyClass(const MyClass& other);
    ~MyClass();
};

#endif