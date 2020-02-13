#pragma once
#include "Card.h"

class Swordswinger : public Card
{
public:
    int GetType();
    int GetHealth();
    int GetAttack();
    string GetName();
    void SetHealth(int enemyAttack);
    Swordswinger();

private:
    int type = 1;
    int health = 2;
    int attack = 2;
    string name = "Swordswinger";
};