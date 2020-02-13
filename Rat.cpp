#include "Rat.h"

Rat::Rat() {

}

int Rat::GetType()
{
	return type;
}

string Rat::GetName()
{
	return name;
}

int Rat::GetHealth()
{
	return health;
}

int Rat::GetAttack()
{
	return attack;
}

void Rat::SetHealth(int enemyAttack)
{
	health = health - enemyAttack;
}
