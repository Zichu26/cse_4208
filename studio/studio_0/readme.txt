1. Zichu Pan
2. hostname: iht32-1501.engr.wustl.edu
3. 
    which gcc: /project/compute/compilers/gcc-8.3.0/bin/gcc
    g++ -v: gcc version 8.3.0 (GCC)
4. output: hello, world!
5. 
    no args: usage: ./build/studio0 <arg1> [<arg2> ...]
        return 1
    with args: hello, world!
        return 0
6. 
    [p.zichu@iht32-1501.sif studio_0]$ ./build/studio0 test.txt
    [p.zichu@iht32-1501.sif studio_0]$ cat test.txt
    hello, world!
    [p.zichu@iht32-1501.sif studio_0]$ chmod a-w test.txt
    [p.zichu@iht32-1501.sif studio_0]$ ./build/studio0 test.txt
    Error: could not open file test.txt
    [p.zichu@iht32-1501.sif studio_0]$ echo $?
    2
