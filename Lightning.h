#pragma once
#include "Card.h"

class Lightning : public Card
{
public:
    int GetType();
    string GetName();
    int GetHealth();
    int GetAttack();
    void SetHealth(int enemyAttack);
    Lightning();

private:
    int type = 3;
    int health = 0;
    int attack = 1;
    string name = "Lightning";
};