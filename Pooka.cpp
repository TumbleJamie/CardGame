#include "Pooka.h"

Pooka::Pooka() {

}

int Pooka::GetType()
{
	return type;
}

string Pooka::GetName()
{
	return name;
}

int Pooka::GetHealth()
{
	return health;
}

int Pooka::GetAttack()
{
	return attack;
}

void Pooka::SetHealth(int enemyAttack)
{
	health = health - enemyAttack;
}