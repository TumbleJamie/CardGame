#pragma once
#include "Card.h"

class Swordsman : public Card
{
public:
    int GetType();
    int GetHealth();
    int GetAttack();
    string GetName();
    void SetHealth(int enemyAttack);
    Swordsman();

private:
    int type = 1;
    int health = 2;
    int attack = 2;
    string name = "Swordsman";
};