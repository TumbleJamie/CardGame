#pragma once
#include "Card.h"

class Dwarf : public Card
{
public:
    int GetType();
    int GetHealth();
    int GetAttack();
    string GetName();
    void SetHealth(int enemyAttack);
    Dwarf();

private:
    int type = 1;
    int health = 4;
    int attack = 2;
    string name = "Dwarf";
};

