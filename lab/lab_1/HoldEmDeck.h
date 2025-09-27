// HoldEmDeck.h Zichu Pan p.zichu@wustl.edu
// The class for the ranks of hold 'em deck.
#ifndef HOLDEMDECK_H
#define HOLDEMDECK_H

#include <vector>
#include <iostream>
#include <iomanip>
#include "Deck.h"
#include "Suit.h"
#include "Card.h"

enum class HoldEmRank {
    two,
    three,
    four,
    five,
    six,
    seven,
    eight,
    nine,
    ten,
    jack,
    queen,
    king,
    ace,
    undefined
};

std::ostream& operator<<(std::ostream& os, const HoldEmRank& rank);

HoldEmRank& operator++(HoldEmRank& rank);

class HoldEmDeck : public Deck<HoldEmRank, Suit> {
public:
    HoldEmDeck(); 
};

#endif // HOLDEMDECK_H
