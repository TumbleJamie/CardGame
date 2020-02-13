#pragma once
#include "Card.h"

class Dragon : public Card
{
public:
    int GetType();
    string GetName();
    int GetHealth();
    int GetAttack();
    void SetHealth(int enemyAttack);
    Dragon();

private:
    int type = 8;
    int health = 4;
    int attack = 4;
    string name = "Dragon";
};