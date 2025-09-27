1. Zichu Pan
2. 
    Code:
        MyStruct obj1(1);
        MyStruct obj2(2);
        
        cout << obj1.value << " " << obj2.value << endl;
    Output:
        1 2
3. 
    Code:
            MyStruct(const MyStruct&) = delete;
            MyStruct& operator=(const MyStruct&) = delete;
            // ~MyStruct() = delete;
    The destructor deletion have to be commented out. Once the 2 objects from 2 goes out of scope
    the destructor are automatically called, which results in error. The copy and copy assignment 
    operators were never used.
4. 
    Output:
        1 2
        2 1
5.
    All three =delete declarations had to be commented out.
    Original main function (before swap): only required the custom constructor and destructor.
    It never copied or assigned objects. std::swap function template requires both the copy constructor and
    copy assignment operator.
6.
    Code: see source files
    Main Change:
        template <typename T = int>
        struct MyStruct {
            T value;
            
            MyStruct(T v);
        };

        #include "MyStruct.cpp"
    Since compiler needs full template definition to compile it together.
7.
    Code:
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
