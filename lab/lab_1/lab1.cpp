// lab0.cpp Zichu Pan p.zichu@wustl.edu
// Entry point of program, prints out default Pinochle deck and hold 'em deck.
#include <iostream>
#include "PinochleDeck.h"
#include "HoldEmDeck.h"

int main() {
    PinochleDeck pinochleDeck;
    HoldEmDeck holdEmDeck0;
    HoldEmDeck holdEmDeck1;

    std::cout << "Pinochle Deck:" << std::endl;
    pinochleDeck.print(std::cout, 6);
    std::cout << std::endl;

    std::cout << "Texas Hold 'Em Deck:" << std::endl;
    holdEmDeck0.print(std::cout, 13);
    std::cout << std::endl;

    pinochleDeck.shuffle();
    std::cout << "Pinochle Deck:" << std::endl;
    pinochleDeck.print(std::cout, 6);
    std::cout << std::endl;

    holdEmDeck0.shuffle();
    std::cout << "Texas Hold 'Em Deck0:" << std::endl;
    holdEmDeck0.print(std::cout, 13);
    std::cout << std::endl;

    holdEmDeck0 >> holdEmDeck1;
    std::cout << "Texas Hold 'Em Deck0:" << std::endl;
    holdEmDeck0.print(std::cout, 13);

    std::cout << "Texas Hold 'Em Deck1:" << std::endl;
    holdEmDeck1.print(std::cout, 13);

    return 0;
}
