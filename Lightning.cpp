#include "Lightning.h"

Lightning::Lightning() {

}

int Lightning::GetType()
{
	return type;
}

string Lightning::GetName()
{
	return name;
}

int Lightning::GetHealth()
{
	return health;
}

int Lightning::GetAttack()
{
	return attack;
}

void Lightning::SetHealth(int enemyAttack)
{
	health = health - enemyAttack;
}

