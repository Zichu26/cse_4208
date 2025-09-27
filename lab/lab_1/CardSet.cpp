// CardSet.cpp Zichu Pan p.zichu@wustl.edu
// The implementation of CardSet class template
#include "CardSet.h"

template <typename R, typename S>
void CardSet<R, S>::print(std::ostream& os, size_t cardInRow) {
    size_t i = 0; // card index
    
    for (typename std::vector< Card<R, S> >::iterator card = cards.begin(); card != cards.end(); ++card) {
        // print newline after every cardInRow number of cards are printed
        if (i > 0 && i % cardInRow == 0) {
            os << std::endl;
        }
        os << *card;    // de-reference since card is an iterator
        /*
            (i + 1) % cardInRow != 0 --> true if card is not at end of row
            std::next(card) != cards.end() --> true if card is not last card
        '''
        if ((i + 1) % cardInRow != 0 && std::next(card) != cards.end()) {
            os << " ";
        }
        */
        ++i;
    }
    if (i > 0) {
        os << std::endl;
    }
}