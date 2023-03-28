#include "doctest.h"
#include "sources/player.hpp"
#include "sources/game.hpp"
#include "sources/card.hpp"

TEST_CASE("Checking Initialization")
{
    Player p1("Alice");
    Player p2("Bob");
    Game game(p1, p2);
    
}

TEST_CASE("Testing Game Class")
{
}

TEST_CASE("Testing Card Class")
{
}