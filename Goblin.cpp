#include "Goblin.h"

Goblin::Goblin() {

}

int Goblin::GetType()
{
	return type;
}

string Goblin::GetName()
{
	return name;
}

int Goblin::GetHealth()
{
	return health;
}

int Goblin::GetAttack()
{
	return attack;
}

void Goblin::SetHealth(int enemyAttack)
{
	health = health - enemyAttack;
}
