#include "Vampire.h"
Vampire::Vampire() {

}

int Vampire::GetType()
{
	return type;
}

string Vampire::GetName()
{
	return name;
}

int Vampire::GetHealth()
{
	return health;
}

int Vampire::GetAttack()
{
	return attack;
}

int Vampire::GetDrain() {
	return drain;
}

void Vampire::SetHealth(int enemyAttack)
{
	health = health - enemyAttack;
}

