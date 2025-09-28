#include "PinochleGame.h"
#include <iostream>
#include <string>

PinochleGame::PinochleGame(int argc, const char* argv[]) : Game(argc, argv) {
    for (int i = 0; i < argc; ++i) {
        hands.push_back(CardSet<PinochleRank, Suit>());
    }
}

void PinochleGame::deal() {
    const int PACKET_SIZE = 3;
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

void PinochleGame::printPlayerHands() const {
    std::cout << R"(
    ✨(≧◡≦) ♡ Time to reveal everyone's magical hands! ♡ (≧◡≦)✨
    )" << std::endl;

    for (size_t i = 0; i < players.size(); ++i) {
        std::cout << "\n🌟 " << players[i] << "'s hand appears... ✨" << std::endl;
        (CardSet<PinochleRank, Suit>&(hands[i])).print(std::cout, 8);

        std::cout << "(*^▽^*) So pretty~!\n";
    }

    std::cout << R"(
    (๑˃ᴗ˂)ﻭ All hands revealed! Let the magic continue~ 🌈
    )" << std::endl;
}

void PinochleGame::collectCards() {
    for (size_t i = 0; i < hands.size(); ++i) {
        deck.collect(hands[i]);
    }
}

int PinochleGame::play() {
    std::cout << R"(
    ☆*:.｡. o(≧▽≦)o .｡.:*☆
    ~*~ Welcome to the Magical World of Pinochle! ~*~
    ☆*:.｡. Let's have a fun time playing! .｡.:*☆
    )" << std::endl;

    std::cout << "✨ Players joining the fun: " << players.size() << " ✨" << std::endl;
    
    while (true) {
        std::cout << R"(
        (ﾉ◕ヮ◕)ﾉ*:･ﾟ✧ === New Round is Beginning! === ✧ﾟ･: *ヽ(◕ヮ◕ヽ)
        )" << std::endl;

        std::cout << "🎴 Shuffling the magic deck... *shuffa shuffa~*" << std::endl;
        deck.shuffle();
    
        std::cout << "📦 Dealing cards... Here you go! (*≧ω≦)" << std::endl;
        deal();
        
        printPlayerHands();
        
        std::cout << "💫 Gathering all the cards back... Thank you, cards! (ღ✪v✪)ღ" << std::endl;
        collectCards();
        
        if (promptEndGame()) {
            std::cout << R"(
            (＾▽＾)／ Thanks for playing Magical Pinochle~!!
            🌈 Until next time, stay sparkly! ✨
            )" << std::endl;
            return 0; 
        }
    }
}

