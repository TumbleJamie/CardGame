#pragma once
#include "Card.h"

class Giant : public Card
{
public:
    int GetType();
    string GetName();
    int GetHealth();
    int GetAttack();
    void SetHealth(int enemyAttack);
    Giant();

private:
    int type = 1;
    int health = 4;
    int attack = 4;
    string name = "Giant";
};