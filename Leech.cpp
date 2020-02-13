#include "Leech.h"

Leech::Leech() {

}

int Leech::GetType()
{
	return type;
}

string Leech::GetName()
{
	return name;
}

int Leech::GetHealth()
{
	return health;
}

int Leech::GetAttack()
{
	return attack;
}

void Leech::SetHealth(int enemyAttack)
{
	health = health - enemyAttack;
}
