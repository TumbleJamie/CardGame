#include "Cannon.h"

Cannon::Cannon() {

}

int Cannon::GetType()
{
	return type;
}

string Cannon::GetName()
{
	return name;
}

int Cannon::GetHealth()
{
	return health;
}

int Cannon::GetAttack()
{
	return attack;
}

void Cannon::SetHealth(int enemyAttack)
{
	health = health - enemyAttack;
}
