#include "Swordsman.h"

Swordsman::Swordsman() {

}

int Swordsman::GetType()
{
	return type;
}

int Swordsman::GetHealth()
{
	return health;
}

int Swordsman::GetAttack()
{
	return attack;
}

string Swordsman::GetName()
{
	return name;
}

void Swordsman::SetHealth(int enemyAttack)
{
	health = health - enemyAttack;
}
