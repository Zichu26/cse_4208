// PinochleDeck.cpp Zichu Pan p.zichu@wustl.edu
// The implementation for PinochleRank class.
#include "PinochleDeck.h"

std::ostream& operator<<(std::ostream& os, const PinochleRank& rank) {
    switch (rank) {
        case PinochleRank::nine:     os << "9"; break;
        case PinochleRank::jack:     os << "J"; break;
        case PinochleRank::queen:    os << "Q"; break;
        case PinochleRank::king:     os << "K"; break;
        case PinochleRank::ten:      os << "10"; break;
        case PinochleRank::ace:      os << "A"; break;
        default:                     os << "?"; break;
    }
    return os;
}

PinochleRank& operator++(PinochleRank& rank) {
    if (rank == PinochleRank::undefined) {
        return rank;
    }

    rank = static_cast<PinochleRank>(static_cast<int>(rank) + 1);

    return rank;
}

PinochleDeck::PinochleDeck() {
    for (int i = 0; i < COPIES_RANK_SUIT_COMBINATION; ++i) { 
        for (Suit s = Suit::clubs; s != Suit::undefined; ++s) {
            for (PinochleRank r = PinochleRank::nine; r != PinochleRank::undefined; ++r) {
                cards.emplace_back(r, s);
            }
        }
    }
}