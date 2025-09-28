// HoldEmGame.cpp Zichu Pan p.zichu@wustl.edu
// Implementation of Hold'Em game class.
#include "HoldEmGame.h"
#include <iostream>

HoldEmGame::HoldEmGame(int argc, const char* argv[]) : Game(argc, argv), state(HoldEmState::preflop) {
    for (int i = 0; i < argc; ++i) {
        hands.push_back(CardSet<HoldEmRank, Suit>());
    }
}

void HoldEmGame::deal() {
    switch (state) {
        case HoldEmState::preflop:
            // First card to each player
            for (size_t i = 0; i < hands.size(); ++i) {
                deck >> hands[i];
            }
            // Second card to each player
            for (size_t i = 0; i < hands.size(); ++i) {
                deck >> hands[i];
            }
            state = HoldEmState::flop;
            break;
            
        case HoldEmState::flop:
            // Deal 3 card to board
            for (int i = 0; i < DEAL_FLOP; ++i) {
                deck >> board;
            }
            state = HoldEmState::turn;
            break;
            
        case HoldEmState::turn:
            // Deal 1 card to board
            deck >> board;
            state = HoldEmState::river;
            break;
            
        case HoldEmState::river:
            // Deal 1 card to board 
            deck >> board;
            state = HoldEmState::undefined;
            break;
            
        case HoldEmState::undefined:
            break;
    }
}

int HoldEmGame::play() {
    std::cout << "Hold'Em" << std::endl;
    int round_number = 1;
    while (true) {
        std::cout << "Round " << round_number << std::endl;
        // Preflop
        deck.shuffle();
        state = HoldEmState::preflop;
        deal();
        for (size_t i = 0; i < players.size(); ++i) {
            std::cout << players[i] << "'s hand: ";
            hands[i].print(std::cout, CARDS_PER_LINE);
            std::cout << std::endl;
        }
        
        // Flop
        deal();
        std::cout << "BOARD (flop): ";
        board.print(std::cout, CARDS_PER_LINE);
        std::cout << std::endl;
        
        // Turn
        deal();
        std::cout << "BOARD (turn): ";
        board.print(std::cout, CARDS_PER_LINE);
        std::cout << std::endl;
        
        // River
        deal();
        std::cout << "BOARD (river): ";
        board.print(std::cout, CARDS_PER_LINE);
        
        // Collect all cards back to deck
        for (size_t i = 0; i < hands.size(); ++i) {
            deck.collect(hands[i]);
        }
        deck.collect(board);
        
        if (promptEndGame()) {
            return 0;  
        }
        round_number++;
    }
}
