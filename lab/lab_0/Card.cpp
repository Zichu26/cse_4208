// Card.cpp Zichu Pan p.zichu@wustl.edu
// The implementation of Card class.
#include "Card.h"

template <typename R, typename S>
std::ostream& operator<<(std::ostream& os, const Card<R, S>& card) {
    os << card.rank << card.suit;
    return os;
}
