// lab1.cpp Zichu Pan p.zichu@wustl.edu
// Entry point of program, prints out default Pinochle deck and hold 'em deck.
#include <iostream>
#include <memory>
#include <cstring>
#include "PinochleGame.h"
#include "HoldEmGame.h"
#include "PinochleGame.h"

const int PROGRAM_NAME_INDEX = 0;
const int GAME_TYPE_INDEX = 1;
const int FIRST_PLAYER_INDEX = 2;

const int PINOCHLE_PLAYERS = 4;
const int HOLDEM_MIN_PLAYERS = 2;
const int HOLDEM_MAX_PLAYERS = 9;

const int SUCCESS = 0;
const int ERROR_TOO_FEW_ARGS = 1;
const int ERROR_WRONG_PINOCHLE_PLAYERS = 2;
const int ERROR_WRONG_HOLDEM_PLAYERS = 3;
const int ERROR_UNKNOWN_GAME = 4;
const int ERROR_GAME_CREATION_FAILED = 5;

std::shared_ptr<Game> create(int argc, const char* argv[]) {
    std::shared_ptr<Game> game;

   if (std::strcmp(argv[1], "Pinochle") == 0) {
        game = std::make_shared<PinochleGame>(argc - 2, argv + 2);
    } 
    else if (std::strcmp(argv[1], "HoldEm") == 0) {
        game = std::make_shared<HoldEmGame>(argc - 2, argv + 2);
    }

    return game;
}

void usageMessage(const char* programName) {
    std::cout << "Usage: " << programName << " <game_type> <player_names>" << std::endl;
    std::cout << "  Pinochle: requires exactly " << PINOCHLE_PLAYERS << " player names" << std::endl;
    std::cout << "  HoldEm: requires between " << HOLDEM_MIN_PLAYERS << " and " << HOLDEM_MAX_PLAYERS << " player names" << std::endl;
    std::cout << "Example: " << programName << " Pinochle P1 P2 P3 P4" << std::endl;
    std::cout << "Example: " << programName << " HoldEm P1 P2 P3" << std::endl;
}

int parseArguments(int argc, const char* argv[]) {
    // this check is necessary so that calculating numPlayers don't fail
    if (argc < 3) {
        printUsageMessage(argv[PROGRAM_NAME_INDEX]);
        return ERROR_TOO_FEW_ARGS;
    }
    
    int numPlayers = argc - FIRST_PLAYER_INDEX;

    if (std::strcmp(argv[GAME_TYPE_INDEX], "Pinochle") == 0) {
        if (numPlayers != PINOCHLE_PLAYERS) {
            printUsageMessage(argv[PROGRAM_NAME_INDEX]);
            return ERROR_WRONG_PINOCHLE_PLAYERS;
        }
    }
    else if (std::strcmp(argv[GAME_TYPE_INDEX], "HoldEm") == 0) {
        if (numPlayers < HOLDEM_MIN_PLAYERS || numPlayers > HOLDEM_MAX_PLAYERS) {
            printUsageMessage(argv[PROGRAM_NAME_INDEX]);
            return ERROR_WRONG_HOLDEM_PLAYERS;
        }
    }
    else {
        printUsageMessage(argv[PROGRAM_NAME_INDEX]);
        return ERROR_UNKNOWN_GAME;
    }
    
    return SUCCESS;
}

int main(int argc, const char* argv[]) {
    int parseExitCode = parseArguments(argc, argv);
    if (parseExitCode  != SUCCESS) {
        return parseExitCode;
    }
    
    std::shared_ptr<Game> game = create(argc, argv);
    
    if (game) {
        return game->play();
    } 
    else {
        return ERROR_GAME_CREATION_FAILED;
    }
    
    return 0;
}
