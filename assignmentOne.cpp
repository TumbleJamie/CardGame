// assignmentOne.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
#include "Players.h"
#include "Wizard.h"
#include "Sorceress.h"
#include <iostream>

using namespace std;

int main()
{

    cout << "WELCOME TO THE GAME!!" << endl;

    Sorceress* newSorceress = new Sorceress();

    Wizard* newWizard = new Wizard();

    Gameplay* newGame = new Gameplay();

   // newSorceress->GetDeck();

   // newWizard->GetDeck();

   // newSorceress->AddToHandOnce();

   // newSorceress->AddToGameplayTable();

    

    for (int i = 0; i < 30; i++) { // starting to write the main game here with rounds, attacking, drawings cards etc
        cout << endl;
        newSorceress->AddToHandOnce();
        newWizard->AddToHandOnce();
        newSorceress->AddToGameplayTable(newWizard->GetGameplayTableTwo(), newSorceress->GetHealth()); 
        newWizard->AddToGameplayTable(newSorceress->GetGameplayTableTwo(), newSorceress->GetHealth());
        cout << endl << "ROUND " << i << endl;
        cout << endl << "CARDS ON TABLE: " << endl;
        newSorceress->GetGameplayTable();
        cout << endl;
        newWizard->GetGameplayTable();
        cout << endl;
        newSorceress->Attack(newWizard->GetGameplayTableTwo(), newWizard->GetHealth()); // needs to be random 
        cout << endl;
        newWizard->Attack(newSorceress->GetGameplayTableTwo(), newSorceress->GetHealth()); // needs to be random 
        cout << endl;
        if (newSorceress->GetHealth() <= 0) {
            cout << "SORCERESS HAS DIED, WIZARD WINS!!" << endl;
            newGame->GameOver();

        }
        if (newWizard->GetHealth() <= 0) {
            cout << "WIZARD HAS DIED, SORCERESS WINS!!" << endl;
            newGame->GameOver();

        }

        newGame->SetRounds(1);
        if (newGame->GetRounds() <= 0) {
            cout << "NO MORE ROUNDS LEFT, ITS A DRAW";
        }
    }

    // TO DO - CARDS ARE BEING DELETED BUT NOT ENTIRELY - NEED TO LOOK INTO MORE
    
    // VAMPIRE - AFTER ATTACK, INCREASE HEALTH BY ONE (ONLY AFTER IT ATTSACKS)

    // ALLOW USER TO SHUFFLE DECK BEFORE PLAY AND DRAWING A CARD
}


