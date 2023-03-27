#include "game.hpp"
// #include "player.hpp"

Game::Game(Player p1, Player p2)
{
    this->p1 = Player(p1.getName()); // this->p1 = 1 ??
    this->p2 = Player(p2.getName());
}

void Game::playTurn()
{
}

void Game::printLastTurn()
{
}

void Game::playAll()
{
}

void Game::printWiner()
{
}

void Game::printLog()
{
}

void Game::printStats()
{
}