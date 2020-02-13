#pragma once
#include "Card.h"

class Pooka : public Card
{
public:
    int GetType();
    string GetName();
    int GetHealth();
    int GetAttack();
    void SetHealth(int enemyAttack);
    Pooka();

private:
    int type = 1;
    int health = 4;
    int attack = 2;
    string name = "Pooka";
};