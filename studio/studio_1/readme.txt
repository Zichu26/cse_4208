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
    