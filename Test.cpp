#include "doctest.h"
#include "sources/player.hpp"
#include "sources/game.hpp"
#include "sources/card.hpp"

Player p1("Alice");
Player p2("Bob");
Game game(p1,p2);

/*
Player
*/
TEST_CASE("Player Constructor")
{
    Player p1("A");
    CHECK(p1.getName() == "A");
    
    
}