#pragma once
#include "Card.h"

class Armour : public Card
{
public:
    int GetType();
    string GetName();
    int GetHealth();
    int GetAttack();
    void SetHealth(int enemyAttack);
    Armour();

private:
    int type = 11;
    int health = 1;
    int attack = 0;
    string name = "Armour";
};