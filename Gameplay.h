#pragma once
#include "Players.h"
#include <vector>
#include "Card.h"

class Gameplay : public Players
{
public:
	int GetRounds();
	void SetRounds(int numberToMinus);
	void GameOver();
	
private:
	int rounds = 30;
};

