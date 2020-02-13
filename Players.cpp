#include "Players.h"

#include <string>
#include <fstream>
#include "Players.h"
#include <iostream>

void Players::BuildDeck(string file, string(&deck)[35]) {

    ifstream fileOpen(file);

    for (int i = 0; i < 35; i++) {

        getline(fileOpen, deck[i]);
    }

    // switch statement to sort out the type of cards

    // or just if statement showing that [0][i] is 1

    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            // array is 2d array of chars
            // [0][i] = type
            // [i][2] = first letter of name
        }
    }


    fileOpen.close();
}

void Players::PrintDeck() { // For testing purposes to make sure array is filled

}


