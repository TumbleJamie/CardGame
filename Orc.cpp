#include "Orc.h"

Orc::Orc() {

}

int Orc::GetType()
{
	return type;
}

string Orc::GetName()
{
	return name;
}

int Orc::GetHealth()
{
	return health;
}

int Orc::GetAttack()
{
	return attack;
}

void Orc::SetHealth(int enemyAttack)
{
	health = health - enemyAttack;
}
