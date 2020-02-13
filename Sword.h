#pragma once
#include "Card.h"

class Sword : public Card
{
public:
    int GetType();
    string GetName();
    int GetHealth();
    int GetAttack();
    void SetHealth(int enemyAttack);
    Sword();

private:
    int type = 10;
    int health = 0;
    int attack = 2;
    string name = "Sword";
};