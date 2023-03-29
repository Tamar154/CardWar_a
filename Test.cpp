#include "doctest.h"
#include "sources/player.hpp"
#include "sources/game.hpp"
#include "sources/card.hpp"

TEST_CASE("Testing exceptions before initialization")
{
    Player p1("Alice");
    Player p2("Bob");
    CHECK_THROWS(p1.stacksize());
    CHECK_THROWS(p2.cardesTaken());
}

TEST_CASE("Testing initialization")
{
    Player p1("Alice");
    Player p2("Bob");
    Game game(p1, p2);

    CHECK(p1.cardesTaken() == 0);
    CHECK(p1.stacksize() == 26);

    CHECK(p2.cardesTaken() == 0);
    CHECK(p2.stacksize() == 26);
}

TEST_CASE("Testing exceptions before playing any turn")
{
    Player p1("Alice");
    Player p2("Bob");
    Game game(p1, p2);

    CHECK_THROWS(game.printLastTurn());
    CHECK_THROWS(game.printWiner());
    CHECK_THROWS(game.printLog());
    CHECK_THROWS(game.printStats());
}

TEST_CASE("Testing a valid turn")
{
    Player p1("Alice");
    Player p2("Bob");
    Game game(p1, p2);

    game.playTurn();
    CHECK((p1.cardesTaken() > 0 || p2.cardesTaken() > 0) == true);
}

TEST_CASE("Testing playing turns")
{
    Player p1("Alice");
    Player p2("Bob");
    Game game(p1, p2);

    CHECK_NOTHROW(game.playTurn());
    CHECK(p1.stacksize() <= 25);
    CHECK(p2.stacksize() <= 25);

    CHECK_NOTHROW(game.playAll());
    CHECK(p1.stacksize() == 0);
    CHECK(p2.stacksize() == 0);
}

TEST_CASE("Testing exceptions after we get a winner")
{
    Player p1("Alice");
    Player p2("Bob");
    Game game(p1, p2);

    game.playAll();
    CHECK_NOTHROW(game.printWiner());
    CHECK_THROWS(game.playTurn());
    CHECK_THROWS(game.playAll());
}