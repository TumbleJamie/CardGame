#include "Gameplay.h"

int Gameplay::GetRounds()
{
	return rounds;
}

void Gameplay::SetRounds(int numberToMinus)
{
	rounds = rounds - numberToMinus;
}

void Gameplay::GameOver() {
	cout << endl;
	cout << "The game is over";
	system("pause");
	exit(1);

}




