#pragma once

#include <string>
#include <fstream>
#include <iostream>

using namespace std;

class Card {
public:
    virtual int GetType() = 0;
    virtual int GetHealth() = 0;
    virtual int GetAttack() = 0;
    virtual string GetName() = 0;
    virtual void SetHealth(int enemyAttack) = 0;
};
