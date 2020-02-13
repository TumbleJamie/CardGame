#include "Dragon.h"

Dragon::Dragon() {

}

int Dragon::GetType()
{
	return type;
}

string Dragon::GetName()
{
	return name;
}

int Dragon::GetHealth()
{
	return health;
}

int Dragon::GetAttack()
{
	return attack;
}

void Dragon::SetHealth(int enemyAttack)
{
	health = health - enemyAttack;
}
