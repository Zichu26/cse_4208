// HoldEmDeck.cpp Zichu Pan p.zichu@wustl.edu
// The implementation of HoldEmRank class.
#include "HoldEmDeck.h"

std::ostream& operator<<(std::ostream& os, const HoldEmRank& rank) {
    switch (rank) {
        case HoldEmRank::two:     os << "2"; break;
        case HoldEmRank::three:   os << "3"; break;
        case HoldEmRank::four:    os << "4"; break;
        case HoldEmRank::five:    os << "5"; break;
        case HoldEmRank::six:     os << "6"; break;
        case HoldEmRank::seven:   os << "7"; break;
        case HoldEmRank::eight:   os << "8"; break;
        case HoldEmRank::nine:    os << "9"; break;
        case HoldEmRank::ten:     os << "10"; break;
        case HoldEmRank::jack:    os << "J"; break;
        case HoldEmRank::queen:   os << "Q"; break;
        case HoldEmRank::king:    os << "K"; break;
        case HoldEmRank::ace:     os << "A"; break;
        default:                  os << "?"; break;
    }
    return os;
}

HoldEmRank& operator++(HoldEmRank& rank) {
    if (rank == HoldEmRank::undefined) {
        return rank;
    }
    rank = static_cast<HoldEmRank>(static_cast<int>(rank) + 1);
    return rank;
}

HoldEmDeck::HoldEmDeck() {
    for (Suit s = Suit::clubs; s != Suit::undefined; ++s) {
        for (HoldEmRank r = HoldEmRank::two; r != HoldEmRank::undefined; ++r) {
            cards.emplace_back(r, s);
        }
    }
}

