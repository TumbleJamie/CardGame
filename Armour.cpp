#include "Armour.h"
Armour::Armour() {

}

int Armour::GetType()
{
	return type;
}

string Armour::GetName()
{
	return name;
}

int Armour::GetHealth()
{
	return health;
}

int Armour::GetAttack()
{
	return attack;
}

void Armour::SetHealth(int enemyAttack)
{
	health = health - enemyAttack;
}

