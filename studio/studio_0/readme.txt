1. Zichu Pan
2. hostname: iht32-1501.engr.wustl.edu
3. 
    which gcc: /project/compute/compilers/gcc-8.3.0/bin/gcc
    g++ -v: gcc version 8.3.0 (GCC)
4. 
```
[p.zichu@iht32-1501.sif studio_0]$  cmake -B build && cmake --build build
-- The C compiler identification is GNU 8.3.0
-- The CXX compiler identification is GNU 8.3.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: /project/compute/compilers/gcc-8.3.0/bin/gcc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /project/compute/compilers/gcc-8.3.0/bin/g++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done (1.3s)
-- Generating done (0.1s)
-- Build files have been written to: /home/compute/p.zichu/cse_4208/studio/studio_0/build
[ 50%] Building CXX object CMakeFiles/studio0.dir/studio0.cpp.o
[100%] Linking CXX executable studio0
[100%] Built target studio0

```
output: hello, world!
5. 
    no args: usage: ./build/studio0 <arg1> [<arg2> ...]
        return 1
    with args: hello, world!
        return 0
6. 
    [p.zichu@iht32-1501.sif studio_0]$ ./build/studio0 test.txt
    [p.zichu@iht32-1501.sif studio_0]$ echo $?
    0
    [p.zichu@iht32-1501.sif studio_0]$ cat test.txt
    hello, world!
    [p.zichu@iht32-1501.sif studio_0]$ chmod a-w test1.txt
    [p.zichu@iht32-1501.sif studio_0]$ ./build/studio0 test1.txt
    Error: could not open file test1.txt
    [p.zichu@iht32-1501.sif studio_0]$ echo $?
    2
    [p.zichu@iht32-1501.sif studio_0]$ cat test1.txt
    [p.zichu@iht32-1501.sif studio_0]$
