#include "PinochleGame.h"
#include <iostream>
#include <string>

PinochleGame::PinochleGame(int argc, const char* argv[]) : Game(argc, argv) {
    for (int i = 0; i < argc; ++i) {
        hands.push_back(CardSet<PinochleRank, Suit>());
    }
}

void PinochleGame::deal() {
    while (!deck.is_empty()) {
        // Deal card to each player
        for (size_t playerIndex = 0; playerIndex < hands.size(); ++playerIndex) {
            // Deal 3 card to the player
            for (int cardCount = 0; cardCount < PACKET_SIZE && !deck.is_empty(); ++cardCount) {
                deck >> hands[playerIndex];
            }
        }
    }
}

void PinochleGame::printPlayerHands() {
    for (size_t i = 0; i < players.size(); ++i) {
        std::cout << "\n" << players[i] << "'s hand:" << std::endl;
        hands[i].print(std::cout, PinochleGame::CARDS_PER_LINE);
    }
}

void PinochleGame::collectCards() {
    for (size_t i = 0; i < hands.size(); ++i) {
        deck.collect(hands[i]);
    }
}

int PinochleGame::play() {
    std::cout << "Pinochle" << std::endl;

    std::cout << "Number of Players: " << players.size()  << std::endl;
    int round_number = 1;
    while (true) {
        std::cout << "Round " << round_number << std::endl;
        deck.shuffle();
        deal();
        printPlayerHands();
        collectCards();
        if (promptEndGame()) {
            std::cout << "Game Over" << std::endl;
            return 0; 
        }
        round_number++;
    }
}

