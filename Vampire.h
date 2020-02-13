#pragma once
#include "Card.h"

class Vampire : public Card
{
public:
    int GetType();
    string GetName();
    int GetHealth();
    int GetAttack();
    int GetDrain();
    void SetHealth(int enemyAttack);
    Vampire();

private:
    int type = 5;
    int health = 3;
    int attack = 2;
    int drain = 1;
    string name = "Vampire";
};