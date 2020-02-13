#include "Thorns.h"

Thorns::Thorns() {

}

int Thorns::GetType()
{
	return type;
}

string Thorns::GetName()
{
	return name;
}

int Thorns::GetHealth()
{
	return health;
}

int Thorns::GetAttack()
{
	return attack;
}

void Thorns::SetHealth(int enemyAttack)
{
	health = health - enemyAttack;
}
