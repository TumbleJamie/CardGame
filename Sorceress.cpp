#include <string>
#include <fstream>
#include "Sorceress.h"
#include <iostream>
#include "Cannon.h"
#include "Spearcarrier.h"
#include "Swordsman.h"
#include "Elf.h"
#include "Swordswinger.h"
#include "Sword.h"
#include "Armour.h"
#include "Fireball.h"
#include "Bless.h"
#include "Wall.h"
#include "Elephant.h"
#include <random>
#include <time.h>
#include "Gameplay.h"
#include "Wizard.h"

void Sorceress::GetDeck() {
    for (int i = 0; i < sorcressNewDeck.size(); i++) {
        cout << sorcressNewDeck[i]->GetType();
        cout << " ";
        cout << sorcressNewDeck[i]->GetName();
        cout << " ";
        cout << sorcressNewDeck[i]->GetAttack();
        cout << " ";
        cout << sorcressNewDeck[i]->GetHealth() << endl;
    }
}

void Sorceress::AddToGameplayTable(vector<Card*> wizardGameplayTable, int wizardHealth) { // randomise this 

    srand(time(0));

    for (int i = 1; i < 2; i++) { // use this to make below function random 
        int randomNumber = rand() % sorceressHand.size();
  

        sorceressGameplayTable.push_back(sorceressHand[randomNumber]);
        
        if (sorceressHand[randomNumber]->GetType() == 2) {
            // FIREBALL
            if (wizardGameplayTable.empty()) {
                wizardHealth = wizardHealth - 3;
            }
            else {
                int randomEnemy = rand() % wizardGameplayTable.size();
                wizardGameplayTable[randomEnemy]->SetHealth(3);
            }

            //DELETE FROM GAMEPLAY TABLE
        }
        sorceressHand.erase(sorceressHand.begin() + randomNumber);
        

    }

} 

void Sorceress::GetGameplayTable()
{
    for (int i = 0; i < sorceressGameplayTable.size(); i++) {
        cout << endl;
        cout << "SORCERESS GAME TABLE: " << endl;
        for (int i = 0; i < sorceressGameplayTable.size(); i++) {
            cout << sorceressGameplayTable[i]->GetName();
            cout << " ";
            cout << sorceressGameplayTable[i]->GetHealth() << endl;
        }
        if (sorceressGameplayTable[i]->GetHealth() <= 0) {
            sorceressGameplayTable.erase(sorceressGameplayTable.begin() + i); 
        }
    }

}

void Sorceress::GetEnemyGameplayTable(vector<Card*> wizardTable) {
    cout << endl;
    cout << "WIZARD GAME TABLE: " << endl;
    for (int i = 0; i < wizardTable.size(); i++) {
        cout << wizardTable[i]->GetType();
        cout << " ";
        cout << wizardTable[i]->GetName();
        cout << " ";
        cout << wizardTable[i]->GetAttack();
        cout << " ";
        cout << wizardTable[i]->GetHealth() << endl;
    }
}

vector<Card*> Sorceress::GetGameplayTableTwo()
{
    return vector<Card*>(sorceressGameplayTable);
}

int Sorceress::GetHealth()
{
    return health;
}

void Sorceress::Attack(vector<Card*> wizardGameplayTable, int wizardHealth) {


    // RANDOMLY SELECT CARD FROM SORCERESS TABLE
    //RANDOM SELECT CARD OR ENEMY PLAYEER
    // DEAL DAMAGE
    // IF NO ENEMY CARDS, DAMAGE ENEMY HEALTH

    srand(time(0));

    for (int i = 0; i < sorceressGameplayTable.size(); i++) { // use this to make below function random 
        int randomNumber = rand() % sorceressGameplayTable.size();
        int attackAmount = sorceressGameplayTable[randomNumber]->GetAttack();
        if (sorceressGameplayTable.empty()) {
            break;
        }

        if (wizardGameplayTable.empty()) {
            wizardHealth = wizardHealth - attackAmount;
        }
        else {

            int randomEnemy = rand() % wizardGameplayTable.size();

            cout << "SORCERESS BEGINS WITH: " << sorceressGameplayTable[randomNumber]->GetName() << endl;


            cout << sorceressGameplayTable[randomNumber]->GetName() << " ATTACKS: " << wizardGameplayTable[randomEnemy]->GetName();
            cout << endl;
            wizardGameplayTable[randomEnemy]->SetHealth(attackAmount);
            cout << wizardGameplayTable[randomEnemy]->GetName() << " HEALTH NOW: " << wizardGameplayTable[randomEnemy]->GetHealth();
            cout << endl;
            if (wizardGameplayTable[randomEnemy]->GetHealth() <= 0) {
                //remove card from the table / destroy card from game
                
                int cardNewHealth = 0;
                if (wizardGameplayTable[randomEnemy]->GetHealth() < 0) {
                    cardNewHealth = wizardGameplayTable[randomEnemy]->GetHealth();
                    wizardHealth = wizardHealth + cardNewHealth;
                }
                cout << endl;
                cout << wizardGameplayTable[randomEnemy]->GetName() << " HAS BEEN DESTROYED!" << endl;
                wizardGameplayTable.erase(wizardGameplayTable.begin() + randomEnemy);

            }
        }

    }

      
                
            
        
}

void Sorceress::GetHand() {
    for (int i = 0; i < sorceressHand.size(); i++) {
        cout << sorceressHand[i]->GetType();
        cout << " ";
        cout << sorceressHand[i]->GetName();
        cout << " ";
        cout << sorceressHand[i]->GetAttack();
        cout << " ";
        cout << sorceressHand[i]->GetHealth() << endl;
    }
}

void Sorceress::AddToHandOnce() { // NEEDS TO ALSO DELETE ENTRY FROM NEW DECK, THESE BOTH NEED TO BE IMPLEMENTED FOR WIZARD
    srand(time(0));

    for (int i = 0; i < 1; i++) {
        int randomNumber = rand() % sorcressNewDeck.size();
        sorceressHand.push_back(sorcressNewDeck[randomNumber]);
        cout << endl << "SORCERESS DRAWS: " << sorceressHand.back()->GetName();
        sorcressNewDeck.erase(sorcressNewDeck.begin() + randomNumber);
    }
}

Sorceress::Sorceress() {
    BuildDeck(sorceressFileName, sorceressDeck);
    SortDeck(sorceressDeck); 
    AddToHandOnce();
}

void Sorceress::SortDeck(string deck[]) {
    for (int i = 0; i < 35; i++) {
        for (int j = 0; j < 18; j++) {
            if (deck[i][0] == '1' && deck[i][1] == ' ') {
                // card type is one
                // check first letter to see what card it is
                if (deck[i][2] == 'D') {
                    sorcressNewDeck.push_back(new Dwarf());
                    break;
                }
                if (deck[i][2] == 'C') {
                    sorcressNewDeck.push_back(new Cannon());
                    break;
                }
                if (deck[i][2] == 'S' && deck[i][3] == 'p') {
                    sorcressNewDeck.push_back(new Spearcarrier());
                    break;
                }
                if (deck[i][2] == 'S' && deck[i][3] == 'w') {
                    sorcressNewDeck.push_back(new Swordsman());
                    break;
                }
                if (deck[i][2] == 'E') {
                    sorcressNewDeck.push_back(new Elf());
                    break;
                }
                if (deck[i][2] == 'S' && deck[i][8] == 'w') {
                    sorcressNewDeck.push_back(new Swordswinger());
                    break;
                }

            } // END OF IF CARD TYPE IS ONE LOOP
            if (deck[i][0] == '1' && deck[i][1] == '0') {
                sorcressNewDeck.push_back(new Sword());
                break;
            }
            if (deck[i][0] == '1' && deck[i][1] == '1') {
                sorcressNewDeck.push_back(new Armour());
                break;
            }
            if (deck[i][0] == '2') {
                sorcressNewDeck.push_back(new Fireball());
                break;
            }
            if (deck[i][0] == '3') {
                // card type is three
            }
            if (deck[i][0] == '4') {
                sorcressNewDeck.push_back(new Bless());
                break;
            }
            if (deck[i][0] == '5') {
                // card type is five
            }
            if (deck[i][0] == '6') {
                sorcressNewDeck.push_back(new Wall());
                break;
            }
            if (deck[i][0] == '7') {
                // card type is seven
            }
            if (deck[i][0] == '8') {
                sorcressNewDeck.push_back(new Elephant());
                break;
            }
            if (deck[i][0] == '9') {
                // card type is nine
            }
        } // END OF INNER FOR LOOP

    } // END OF OUTER FOR LOOP 


}



