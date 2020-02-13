#include <string>
#include <fstream>
#include "Wizard.h"
#include <iostream>
#include "Fireball.h"
#include "Wall.h"
#include "Orc.h"
#include "Goblin.h"
#include "Pooka.h"
#include "Thorns.h"
#include "Giant.h"
#include "Lightning.h"
#include "Vampire.h"
#include "Rat.h"
#include "Dragon.h"
#include "Leech.h"
#include <random>
#include <time.h>
#include "Gameplay.h"

Wizard::Wizard()
{
    BuildDeck(wizardFileName, wizardDeck);
    SortDeck(wizardDeck);
    AddToHandOnce();
}

void Wizard::GetGameplayTable()
{
    for (int i = 0; i < wizardGameplayTable.size(); i++) {
        cout << endl;
        cout << "WIZARD GAME TABLE: " << endl;
        for (int i = 0; i < wizardGameplayTable.size(); i++) {
            cout << wizardGameplayTable[i]->GetName();
            cout << " ";
            cout << wizardGameplayTable[i]->GetHealth() << endl;
        }
        if (wizardGameplayTable[i]->GetHealth() <= 0) {
            wizardGameplayTable.erase(wizardGameplayTable.begin() + i);
        }
    }

}

void Wizard::Attack(vector<Card*> sorceressGameplayTable, int sorceressHealth) {


    // RANDOMLY SELECT CARD FROM SORCERESS TABLE
    //RANDOM SELECT CARD OR ENEMY PLAYEER
    // DEAL DAMAGE
    // IF NO ENEMY CARDS, DAMAGE ENEMY HEALTH

    // ATM THE SAME CARD CAN BE CHOSEN AGAIN AND AGAIN, NEEDS TO BE EACH CARD CAN ONLY GO ONCE

    srand(time(0));

    for (int i = 0; i < wizardGameplayTable.size(); i++) { // use this to make below function random 

        int randomNumber = rand() % wizardGameplayTable.size();
        int attackAmount = wizardGameplayTable[randomNumber]->GetAttack();

        if (wizardGameplayTable.empty()) {
            break;
        }
        if (sorceressGameplayTable.empty()) {
            sorceressHealth = sorceressHealth - attackAmount;
          
        }
        else {
            int randomEnemy = rand() % sorceressGameplayTable.size();

            cout << "WIZARD BEGINS WITH: " << wizardGameplayTable[randomNumber]->GetName() << endl;
            cout << wizardGameplayTable[randomNumber]->GetName() << " ATTACKS: " << sorceressGameplayTable[randomEnemy]->GetName();
            cout << endl;
            sorceressGameplayTable[randomEnemy]->SetHealth(attackAmount);
            cout << sorceressGameplayTable[randomEnemy]->GetName() << " HEALTH NOW: " << sorceressGameplayTable[randomEnemy]->GetHealth();
            cout << endl;
            if (sorceressGameplayTable[randomEnemy]->GetHealth() <= 0) {
                //remove card from the table / destroy card from game
                int cardNewHealth = 0;
                if (sorceressGameplayTable[randomEnemy]->GetHealth() < 0) {
                    cardNewHealth = sorceressGameplayTable[randomEnemy]->GetHealth();
                    sorceressHealth = sorceressHealth + cardNewHealth;
                }
                cout << endl;
                cout << sorceressGameplayTable[randomEnemy]->GetName() << " has been destroyed!" << endl;
                sorceressGameplayTable.erase(sorceressGameplayTable.begin() + randomEnemy);

            }
        }

    }





}

void Wizard::GetEnemyGameplayTable(vector<Card*> sorceressTable) {
    cout << "SORCERESS GAME TABLE: " << endl;
    for (int i = 0; i < sorceressTable.size(); i++) {
        cout << sorceressTable[i]->GetType();
        cout << " ";
        cout << sorceressTable[i]->GetName();
        cout << " ";
        cout << sorceressTable[i]->GetAttack();
        cout << " ";
        cout << sorceressTable[i]->GetHealth() << endl;
    }
}

void Wizard::AddToHandOnce() { // NEEDS TO ALSO DELETE ENTRY FROM NEW DECK, THESE BOTH NEED TO BE IMPLEMENTED FOR WIZARD
    srand(time(0));

    for (int i = 0; i < 1; i++) {
        int randomNumber = rand() % wizardNewDeck.size();
        wizardHand.push_back(wizardNewDeck[randomNumber]);
        cout << endl << "WIZARD DRAWS: " << wizardHand.back()->GetName();
        wizardNewDeck.erase(wizardNewDeck.begin() + randomNumber);
    }
}

void Wizard::AddToGameplayTable(vector <Card*> sorceressGameplayTable, int sorceressHealth) { // randomise this 

    srand(time(0));

    for (int i = 1; i < 2; i++) { // use this to make below function random 
        int randomNumber = rand() % wizardHand.size();
        


        wizardGameplayTable.push_back(wizardHand[randomNumber]);
        

        if(wizardHand[randomNumber]->GetType() == 2) {
            // FIREBALL
            if (sorceressGameplayTable.empty()) {
                sorceressHealth = sorceressHealth - 3;
            }
            else {
                int randomEnemy = rand() % sorceressGameplayTable.size();
                sorceressGameplayTable[randomEnemy]->SetHealth(3);
            }
            

            //DELETE FROM GAMEPLAY TABLE
        }
        wizardHand.erase(wizardHand.begin() + randomNumber);
        
    }

    // IF CARD IS SPELL TYPE CARD, EFFECTS HAPPEN HERE AND EFFECT THE BOARDS
    // SPELLS ACTIVATE IMMEDIATLEY WHEN PLAYED 
    //FIREBALL - 3 POINT DAMAGE AT MINION OR PLAYER, RANDOMLY CHOSEN
    //LIGHTNING - ONE POINT DAMAGE ALL ENEMIES, INCLUDING PLAYER

    //BLESS RANDOM TARGET INCLU FRIENDLY AND ENEMY
    // ENEMY INFLICT 2 DAMAGE, FRIEND INCREASE HEALTH BY 2

}

int Wizard::GetHealth()
{
    return health;
}

vector<Card*> Wizard::GetGameplayTableTwo()
{
    return vector<Card*> (wizardGameplayTable);
}

void Wizard::GetHand() {
    for (int i = 0; i < wizardHand.size(); i++) {
        cout << wizardHand[i]->GetType();
        cout << " ";
        cout << wizardHand[i]->GetName();
        cout << " ";
        cout << wizardHand[i]->GetAttack();
        cout << " ";
        cout << wizardHand[i]->GetHealth() << endl;
    }
}


void Wizard::GetDeck() {
    for (int i = 0; i < wizardNewDeck.size(); i++) {
        cout << wizardNewDeck[i]->GetType();
        cout << " ";
        cout << wizardNewDeck[i]->GetName();
        cout << " ";
        cout << wizardNewDeck[i]->GetAttack();
        cout << " ";
        cout << wizardNewDeck[i]->GetHealth() << endl;
    }
}

void Wizard::SortDeck(string deck[]) {
    for (int i = 0; i < 35; i++) {
        for (int j = 0; j < 18; j++) {
            if (deck[i][0] == '1' && deck[i][1] == ' ') {
                // card type is one
                // check first letter to see what card it is
                if (deck[i][2] == 'O') {
                    wizardNewDeck.push_back(new Orc());
                    break;
                }
                if (deck[i][2] == 'G') {
                    wizardNewDeck.push_back(new Goblin());
                    break;
                }
                if (deck[i][2] == 'P') {
                    wizardNewDeck.push_back(new Pooka());
                    break;
                }
                if (deck[i][2] == 'T') {
                    wizardNewDeck.push_back(new Thorns());
                    break;
                }
                if (deck[i][2] == 'G') {
                    wizardNewDeck.push_back(new Giant());
                    break;
                }

            } // END OF IF CARD TYPE IS ONE LOOP
            if (deck[i][0] == '2') {
                wizardNewDeck.push_back(new Fireball());
                break;
            }
            if (deck[i][0] == '3') {
                // card type is three
                wizardNewDeck.push_back(new Lightning());
                break;
            }
            if (deck[i][0] == '5') {
                // card type is five
                wizardNewDeck.push_back(new Vampire());
                break;
            }
            if (deck[i][0] == '6') {
                wizardNewDeck.push_back(new Wall());
                break;
            }
            if (deck[i][0] == '7') {
                // card type is seven
                wizardNewDeck.push_back(new Rat());
                break;
            }
            if (deck[i][0] == '8') {
                wizardNewDeck.push_back(new Dragon());
                break;
            }
            if (deck[i][0] == '9') {
                // card type is nine
                wizardNewDeck.push_back(new Leech());
                break;
            }
        } // END OF INNER FOR LOOP

    } // END OF OUTER FOR LOOP 


}
