#pragma once

#include <string>
using namespace std;

class Player
{
    string name;

public:
    Player();
    Player(string);

    string getName();

    int stacksize();
    int cardesTaken();
};
