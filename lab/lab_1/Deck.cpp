// Deck.cpp Zichu Pan p.zichu@wustl.edu
// The implementation of CardSet class template
#ifndef DECK_CPP
#define DECK_CPP

#include "Deck.h"

template <typename R, typename S>
void Deck<R, S>::shuffle() {
    std::random_device rd;
    std::mt19937 gen(rd());
    
    std::shuffle(CardSet<R, S>::cards.begin(), 
                 CardSet<R, S>::cards.end(), 
                 gen);
}

#endif