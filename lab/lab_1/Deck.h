// Deck.h Zichu Pan p.zichu@wustl.edu
// The abstract class for a generic deck of cards.
#ifndef DECK_H
#define DECK_H

#include <iostream>

template <typename R, typename S>
class Deck : public CardSet<R, S> {
public:
};

#ifdef TEMPLATE_HEADERS_INCLUDE_SOURCE
#include "Deck.cpp"
#endif

#endif // DECK_H
