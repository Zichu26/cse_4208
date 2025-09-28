// lab0.cpp Zichu Pan p.zichu@wustl.edu
// Entry point of program, prints out default Pinochle deck and hold 'em deck.
#include <iostream>
#include "PinochleDeck.h"
#include "HoldEmDeck.h"
#include "PinochleGame.h"

int main() {
    const char* argv[] = { "Peter", "Jack", "Dom" };
    PinochleGame tmp(3, argv);
    tmp.play();

    return 0;
}
