#pragma once
#include "Card.h"

class Thorns : public Card
{
public:
    int GetType();
    string GetName();
    int GetHealth();
    int GetAttack();
    void SetHealth(int enemyAttack);
    Thorns();

private:
    int type = 1;
    int health = 4;
    int attack = 1;
    string name = "Thorns";
};