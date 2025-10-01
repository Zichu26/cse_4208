Zichu Pan p.zichu@wustl.edu lab 1

Design Choice:
    Cmd line arguments are pre-parsed prior to creating the game. So the game constructors only receive a list of player names.

Errors:
    In the CartSet class template, the print function should have the const signature as by design printing shouldn't modify any
    member variables. However when using this
        for (typename std::vector< Card<R, S> >::iterator card = cards.begin(); card != cards.end(); ++card)
    setting it const causes an error. This is because when a member function is marked const, the this pointer becomes 
    a pointer to const, which means all member variables are treated as const within that function. However 
    typename std::vector< Card<R, S> >::iterator recommend by the instruction return a non-const iterator.
    You can't use a non-const iterator on a const container. A better way might be to case it to const iterator (a iterator
    that can only read) instead.

Testing and output:
    Exit code used:
        const int SUCCESS = 0;
        const int ERROR_TOO_FEW_ARGS = 1;
        const int ERROR_WRONG_PINOCHLE_PLAYERS = 2;
        const int ERROR_WRONG_HOLDEM_PLAYERS = 3;
        const int ERROR_UNKNOWN_GAME = 4;
        const int ERROR_GAME_CREATION_FAILED = 5;

    ./build/lab1 Pinochle Alice Bob Charlie David
    Output: 
        correct behavior, each player have 12 cards and in combination the cards makes up the deck
    
    Continuing prompting to continue the game
    Output:
        correct behavior, the game continues as expected

    ./build/lab1 HoldEm Alice Bob
    Output:
        correct behavior, each player is dealt 2 cards and the board prints flop, turn and river correctly
    
    Continuing prompting to continue the game
    Output:
        correct behavior, the game continues as expected

    Testing range of players for HoldEm:
        ./lab1 HoldEm 1 2 3 4 5 6 7 8 9
        ./lab1 HoldEm 1 2 
    Output:
        correct behavior

    Testing invalid commands
        ./lab1                                
        ./lab1 Pinochle                     
        ./lab1 HoldEm     
    Output:
        correct behavior + exit code 1

    Testing wrong num players Pinochle:
        .lab1 Pinochle P1 P2 P3 P4 P5 P6   
    Output:
        correct behavior + exit code 2

    Testing wrong num players HoldEm:
        ./lab1 HoldEm Alice
    Output:
        correct behavior + exit code 3

    Testing wrong game name:
        ./lab1 Poker Alice Bob Charlie  
    Output:
        correct behavior + exit code 4

                    
    




