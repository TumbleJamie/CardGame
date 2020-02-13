#pragma once
#include "Card.h"

class Goblin : public Card
{
public:
    int GetType();
    string GetName();
    int GetHealth();
    int GetAttack();
    void SetHealth(int enemyAttack);
    Goblin();

private:
    int type = 1;
    int health = 1;
    int attack = 2;
    string name = "Goblin";
};