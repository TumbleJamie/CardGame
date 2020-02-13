#include "Giant.h"

Giant::Giant() {

}

int Giant::GetType()
{
	return type;
}

string Giant::GetName()
{
	return name;
}

int Giant::GetHealth()
{
	return health;
}

int Giant::GetAttack()
{
	return attack;
}

void Giant::SetHealth(int enemyAttack)
{
	health = health - enemyAttack;
}