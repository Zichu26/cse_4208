1. Zichu Pan
2. 
    [p.zichu@iht32-1501.sif studio_3]$ ./build/studio3 + + 1 2 3
    The value calculated is 6
    [p.zichu@iht32-1501.sif studio_3]$ echo $?
    0
    [p.zichu@iht32-1501.sif studio_3]$ ./build/studio3 + + 1 2
    caught exception for unexpected end of expression.
    [p.zichu@iht32-1501.sif studio_3]$ echo $?
    2
3.
    Output:
        GNU gdb (GDB) Rocky Linux 8.2-20.el8.0.1
        Copyright (C) 2018 Free Software Foundation, Inc.
        License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/
        gpl.html>
        This is free software: you are free to change and redistribute it.
        There is NO WARRANTY, to the extent permitted by law.
        Type "show copying" and "show warranty" for details.
        This GDB was configured as "x86_64-redhat-linux-gnu".
        Type "show configuration" for configuration details.
        For bug reporting instructions, please see:
        <http://www.gnu.org/software/gdb/bugs/>.
        Find the GDB manual and other documentation resources online at:
        │    <http://www.gnu.org/software/gdb/documentation/>.

        For help, type "help".
        Type "apropos word" to search for commands related to "word"...
        Reading symbols from ./build/studio3...done.
4.
    Output:
        Breakpoint 1 at 0x401c2d: file /home/compute/p.zichu/cse_4208/studio
        /studio_3/studio3.cpp, line 93.
5.
    Output:
        Continuing.

        Breakpoint 1, parse_and_compute (current_index=@0x7fffffffbfe4: 2,
            last_index=7, argv=0x7fffffffc0e8)
            at /home/compute/p.zichu/cse_4208/studio/studio_3/studio3.cpp:93
        93        if (current_index > last_index) {
6.
    Output:
        #0  parse_and_compute (current_index=@0x7fffffffbfe4: 2,
            last_index=7, argv=0x7fffffffc0e8)
            at /home/compute/p.zichu/cse_4208/studio/studio_3/studio3.cpp:93
        #1  0x0000000000401cec in parse_and_compute (
            current_index=@0x7fffffffbfe4: 2, last_index=7,
            argv=0x7fffffffc0e8)
            at /home/compute/p.zichu/cse_4208/studio/studio_3/studio3.cpp:103
        #2  0x0000000000401a90 in main (argc=8, argv=0x7fffffffc0e8)
            at /home/compute/p.zichu/cse_4208/studio/studio_3/studio3.cpp:46
7.
    Output:
        (gdb) print current_index
        $1 = (int &) @0x7fffffffbfe4: 2
        (gdb) print argv[current_index]
        $2 = 0x7fffffffc7dd "1"