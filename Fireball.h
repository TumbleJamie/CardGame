#pragma once
#include "Card.h"

class Fireball : public Card
{
public:
    int GetType();
    string GetName();
    int GetHealth();
    int GetAttack();
    void SetHealth(int enemyAttack);
    Fireball();

private:
    int type = 2;
    int health = 0;
    int attack = 3;
    string name = "Fireball";
};