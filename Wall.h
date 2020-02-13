#pragma once
#include "Card.h"

class Wall : public Card
{
public:
    int GetType();
    string GetName();
    int GetHealth();
    int GetAttack();
    void SetHealth(int enemyAttack);
    Wall();

private:
    int type = 6;
    int health = 5;
    int attack = 0;
    string name = "Wall";
};