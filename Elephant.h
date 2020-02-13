#pragma once
#include "Card.h"

class Elephant : public Card
{
public:
    int GetType();
    string GetName();
    int GetHealth();
    int GetAttack();
    void SetHealth(int enemyAttack);
    Elephant();

private:
    int type = 8;
    int health = 4;
    int attack = 4;
    string name = "Elephant";
};