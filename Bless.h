#pragma once
#include "Card.h"

class Bless : public Card
{
public:
    int GetType();
    string GetName();
    int GetHealth();
    int GetAttack();
    void SetHealth(int enemyAttack);
    Bless();

private:
    int type = 4;
    int health = 2;
    int attack = 2;
    string name = "Bless";
};