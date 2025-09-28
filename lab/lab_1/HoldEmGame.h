// HoldEmGame.h Zichu Pan p.zichu@wustl.edu
// Hold'Em game class derived from Game base class.
#ifndef HOLDEMGAME_H
#define HOLDEMGAME_H

#include "Game.h"
#include "HoldEmDeck.h"
#include "CardSet.h"
#include <vector>

const int CARDS_PER_LINE = 5;
const int DEAL_FLOP = 3;

enum class HoldEmState {
    preflop = 0,
    flop = 1,
    turn = 2,
    river = 3,
    undefined = 4
};

class HoldEmGame : public Game {
protected:
    HoldEmState state;                                    
    HoldEmDeck deck;                                      
    std::vector<CardSet<HoldEmRank, Suit>> hands;        
    CardSet<HoldEmRank, Suit> board;                    
    
    virtual void deal();                                  

public:
    HoldEmGame(int argc, const char* argv[]);
    virtual int play() override;
};



#endif // HOLDEMGAME_H