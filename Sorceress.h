#pragma once
#include <string>
#include <fstream>
#include "Players.h"
#include <iostream>
#include <vector>
#include "Card.h"
#include "Dwarf.h"
#include "Gameplay.h"
#include "Wizard.h"

class Sorceress : public Players {
public:

    Sorceress();

    // getter for deck
    void GetDeck();
    void SortDeck(string deck[]);
    void GetHand();
    void AddToHandOnce();
    void AddToGameplayTable(vector<Card*> wizardGameplayTable, int wizardHealth);
    void GetGameplayTable();
    int GetHealth();
    void Attack(vector<Card*> wizardGameplayTable, int wizardHealth);
    void GetEnemyGameplayTable(vector<Card*> wizardTable);

    vector <Card*> GetGameplayTableTwo();

private:
    int health = 30;
    string sorceressDeck[35];
    string sorceressFileName = "sorceress.txt";
    vector<Card*> sorcressNewDeck;
    vector<Card*> sorceressHand;
    vector<Card*> sorceressGameplayTable;
};

