// Suit.h Zichu Pan p.zichu@wustl.edu
// The class for the suit of a deck of playing card.

#ifndef SUIT_H
#define SUIT_H

#include <iostream>

enum Suit {
    clubs, 
    diamonds, 
    hearts, 
    spades,
    undefined
};

std::ostream& operator<<(std::ostream& os, const Suit& suit);

Suit& operator++(Suit& suit);

#endif // SUIT_H