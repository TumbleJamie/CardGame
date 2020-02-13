#pragma once
#include "Card.h"

class Cannon : public Card
{
public:
    int GetType();
    string GetName();
    int GetHealth();
    int GetAttack();
    void SetHealth(int enemyAttack);
    Cannon();

private:
    int type = 1;
    int health = 1;
    int attack = 4;
    string name = "Cannon";
};
