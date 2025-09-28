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
    std::cout << R"(
    (｡•́︿•̀｡) Aww... is it time to say goodbye already?

    💭 Would you like to end the game? (yes/no): 
    )";

    std::string response;
    std::cin >> response;

    if (response == "yes") {
        return true;
    } else {
        std::cout << R"(
        (ง •̀_•́)ง Yatta! Let’s keep going! The fun’s not over yet~! 🌟
        )" << std::endl;
        return false;
    }
}