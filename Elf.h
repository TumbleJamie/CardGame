#pragma once
#include "Card.h"

class Elf : public Card
{
public:
    int GetType();
    int GetHealth();
    int GetAttack();
    string GetName();
    void SetHealth(int enemyAttack);
    Elf();

private:
    int type = 1;
    int health = 4;
    int attack = 1;
    string name = "Elf";
};