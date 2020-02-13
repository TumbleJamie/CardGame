#pragma once
#include <string>
#include <fstream>
#include "Players.h"
#include <iostream>
#include <vector>
#include "Card.h"

using namespace std;

class Wizard : public Players {
public:
    Wizard();
    //getter for deck
    void GetDeck();
    void SortDeck(string deck[]);
    void GetHand();
    void AddToHandOnce();
    void AddToGameplayTable(vector <Card*> sorceressGameplayTable, int sorceressHealth);
    int GetHealth();
    void GetGameplayTable(); 
    void Attack(vector<Card*> sorceressGameplayTable, int sorceressHealth);
    void GetEnemyGameplayTable(vector<Card*> sorceressTable);

    vector <Card*> GetGameplayTableTwo();

private:
    string wizardDeck[35];
    string wizardFileName = "wizard.txt";
    int health = 30;
    vector<Card*> wizardNewDeck;
    vector<Card*> wizardHand;
    vector<Card*> wizardGameplayTable;
};
