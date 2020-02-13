#include "Swordswinger.h"

Swordswinger::Swordswinger() {

}

int Swordswinger::GetType()
{
	return type;
}

int Swordswinger::GetHealth()
{
	return health;
}

int Swordswinger::GetAttack()
{
	return attack;
}

string Swordswinger::GetName()
{
	return name;
}

void Swordswinger::SetHealth(int enemyAttack)
{
	health = health - enemyAttack;
}
