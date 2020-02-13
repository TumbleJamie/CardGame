#pragma once
#include "Card.h"

class Leech : public Card
{
public:
    int GetType();
    string GetName();
    int GetHealth();
    int GetAttack();
    void SetHealth(int enemyAttack);
    Leech();

private:
    int type = 9;
    int health = 2;
    int attack = 2;
    string name = "Leech";
};