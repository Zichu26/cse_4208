// CardSet.h Zichu Pan p.zichu@wustl.edu
// The class template of more generic collection of cards
#ifndef CARDSET_H
#define CARDSET_H

#include "Card.h"
#include <vector>
#include <iostream>

template <typename R, typename S>
class CardSet {
protected:
    // spacing to prevent miss-intepret as set
    std::vector< Card<R, S> > cards;

public:
    void print(std::ostream& os, size_t cardsInRow) const;
};

#ifdef TEMPLATE_HEADERS_INCLUDE_SOURCE
#include "CardSet.cpp"
#endif

#endif // CARDSET_H