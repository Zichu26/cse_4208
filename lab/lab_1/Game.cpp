// Game.cpp Zichu Pan p.zichu@wustl.edu
// Implementation of the Game base class
#include "Game.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

Game::Game(int argc, const char* argv[]) {
    for (int i = 0; i < argc; ++i) {
        players.push_back(std::string(argv[i]));
    }
}

bool Game::promptEndGame() const {
    std::cout << "Would you like to end the game? (yes/[anything else will end game]): ";

    std::string response;
    std::cin >> response;

    if (response == "yes") {
        return true;
    } else {
        return false;
    }
}