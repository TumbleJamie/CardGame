#pragma once

#include <string>
#include <fstream>
#include <iostream>

using namespace std;

class Players {
public:
    void BuildDeck(string file, string(&deck)[35]);
    void PrintDeck();
private:
};
