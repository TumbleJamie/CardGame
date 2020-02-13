#include "Sword.h"
Sword::Sword() {

}

int Sword::GetType()
{
	return type;
}

string Sword::GetName()
{
	return name;
}

int Sword::GetHealth()
{
	return health;
}

int Sword::GetAttack()
{
	return attack;
}

void Sword::SetHealth(int enemyAttack)
{
	health = health - enemyAttack;
}

