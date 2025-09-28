// lab0.cpp Zichu Pan p.zichu@wustl.edu
// Entry point of program, prints out default Pinochle deck and hold 'em deck.
#include <iostream>
#include "PinochleDeck.h"
#include "HoldEmDeck.h"

int main() {
    PinochleGame tmp(3, ["Peter", "Jack", "Dom"]);
    tmp.play();

    return 0;
}
