// Game.h Zichu Pan p.zichu@wustl.edu
// Abstract base class for card games
#ifndef GAME_H
#define GAME_H

#include <vector>
#include <string>

class Game {
protected:
    std::vector<std::string> players;
    bool promptEndGame() const;

public:
    // Design decision: argc, argv[] are already pre-parsed the first
    // two elements [program name] and [game name] are already dropped
    Game(int argc, const char* argv[]);
    
    virtual int play() = 0;
};

#endif // GAME_H