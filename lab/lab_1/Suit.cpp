// Suit.cpp Zichu Pan p.zichu@wustl.edu
// The implementation of of Suit class.
#include "Suit.h"

std::ostream& operator<<(std::ostream& os, const Suit& suit) {
    switch (suit) {
        case Suit::clubs:     os << "C"; break;
        case Suit::diamonds:  os << "D"; break;
        case Suit::hearts:    os << "H"; break;
        case Suit::spades:    os << "S"; break;
        default:              os << "?"; break;
    }
    return os;
}

Suit& operator++(Suit& suit) {
    if (suit == Suit::undefined) {
        return suit;
    }

    suit = static_cast<Suit>(static_cast<int>(suit) + 1);

    return suit;
}
