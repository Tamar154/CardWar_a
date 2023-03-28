#pragma once

#include "player.hpp"
#include "card.hpp"

using namespace std;

namespace ariel
{

}

class Game
{
    Player p1;
    Player p2;

public:
    Game(Player, Player);

    void playTurn();
    void printLastTurn();
    void playAll();
    void printWiner();
    void printLog();
    void printStats();

};
