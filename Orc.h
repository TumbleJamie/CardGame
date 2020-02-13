#pragma once
#include "Card.h"

class Orc : public Card
{
public:
    int GetType();
    string GetName();
    int GetHealth();
    int GetAttack();
    void SetHealth(int enemyAttack);
    Orc();

private:
    int type = 1;
    int health = 2;
    int attack = 2;
    string name = "Orc";
};