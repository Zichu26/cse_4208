// Deck.h Zichu Pan p.zichu@wustl.edu
// The abstract class for a generic deck of cards.
#ifndef DECK_H
#define DECK_H

#include <iostream>

class Deck {
public:
    virtual void print(std::ostream& os) const = 0;
};

#endif // DECK_H
