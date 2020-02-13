#pragma once
#include "Card.h"

class Rat : public Card
{
public:
    int GetType();
    string GetName();
    int GetHealth();
    int GetAttack();
    void SetHealth(int enemyAttack);
    Rat();

private:
    int type = 7;
    int health = 2;
    int attack = 1;
    string name = "Rat";
};