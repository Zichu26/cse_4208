// lab0.cpp Zichu Pan p.zichu@wustl.edu
// Entry point of program, prints out default Pinochle deck and hold 'em deck.
#include <iostream>
#include "PinochleDeck.h"
#include "HoldEmDeck.h"

int main() {
    PinochleDeck pinochleDeck;
    HoldEmDeck holdEmDeck;

    std::cout << "Pinochle Deck:" << std::endl;
    pinochleDeck.print(std::cout, 6);
    std::cout << std::endl;

    std::cout << "Texas Hold 'Em Deck:" << std::endl;
    holdEmDeck.print(std::cout, 13);
    std::cout << std::endl;

    return 0;
}
