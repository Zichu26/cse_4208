// PinochleDeck.h Zichu Pan p.zichu@wustl.edu
// The class for the ranks of Pinochle deck.
#ifndef PINOCHLEDECK_H
#define PINOCHLEDECK_H

#include <vector>
#include <iostream>
#include <iomanip>
#include "Suit.h"
#include "Card.h"
#include "Deck.h"

int const COPIES_RANK_SUIT_COMBINATION = 2;

enum class PinochleRank {
    nine,
    jack,
    queen,
    king,
    ten,
    ace,
    undefined
};

std::ostream& operator<<(std::ostream& os, const PinochleRank& rank);

PinochleRank& operator++(PinochleRank& rank);

class PinochleDeck : public Deck<PinochleRank, Suit> {

public:
    PinochleDeck();
};

#endif // PINOCHLEDECK_H
