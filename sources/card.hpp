#pragma once

#include <string>
using namespace std;

class Card
{
    int number;
    string suit;

public:
    Card(int, string);

    string getSuit();
    int getNum();
};
