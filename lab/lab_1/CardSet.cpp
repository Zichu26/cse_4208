// CardSet.cpp Zichu Pan p.zichu@wustl.edu
// The implementation of CardSet class template
#ifndef CARDSET_CPP
#define CARDSET_CPP

#include "CardSet.h"

template <typename R, typename S>
void CardSet<R, S>::print(std::ostream& os, size_t cardInRow) const {
    size_t i = 0; // card index
    
    for (typename std::vector< Card<R, S> >::iterator card = cards.begin(); card != cards.end(); ++card) {
        // print newline after every cardInRow number of cards are printed
        if (i > 0 && i % cardInRow == 0) {
            os << std::endl;
        }
        os << *card;    // de-reference since card is an iterator
        /*
            (i + 1) % cardInRow != 0 --> true if card is not at end of row
            card + 1 != cards.end() --> true if card is not last card
        */
        if ((i + 1) % cardInRow != 0 && card + 1 != cards.end()) {
            os << " ";
        }
        ++i;
    }
    if (i > 0) {
        os << std::endl;
    }
}

#endif