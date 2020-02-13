#pragma once
#include "Card.h"

class Spearcarrier : public Card
{
public:
    int GetType();
    int GetHealth();
    int GetAttack();
    string GetName();
    void SetHealth(int enemyAttack);
    Spearcarrier();

private:
    int type = 1;
    int health = 1;
    int attack = 2;
    string name = "Spearcarrier";
};