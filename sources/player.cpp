#include "player.hpp"

Player::Player()
{
    this->name = "";
}

Player::Player(string name)
{
    this->name = name;
}

int Player::stacksize()
{
    return 1;
}

int Player::cardesTaken()
{
    return 1;
}
