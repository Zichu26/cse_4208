// PinochleGame.h Zichu Pan p.zichu@wustl.edu
// Pinochle game class derived from Game base class
#ifndef PINOCHLEGAME_H
#define PINOCHLEGAME_H

#include "Game.h"
#include "PinochleDeck.h"
#include "CardSet.h"
#include <vector>

const int PACKET_SIZE = 3;
const int CARDS_PER_LINE = 8;

class PinochleGame : public Game {
protected:
    PinochleDeck deck;
    std::vector<CardSet<PinochleRank, Suit>> hands;
    virtual void deal();
    void printPlayerHands();
    void collectCards();

public:
    PinochleGame(int argc, const char* argv[]);
    virtual int play() override;
};

#endif // PINOCHLEGAME_H