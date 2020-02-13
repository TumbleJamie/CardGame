#include "Dwarf.h"

Dwarf::Dwarf() {

}

int Dwarf::GetType()
{
	return type;
}

int Dwarf::GetHealth()
{
	return health;
}

int Dwarf::GetAttack()
{
	return attack;
}

string Dwarf::GetName()
{
	return name;
}
void Dwarf::SetHealth(int enemyAttack)
{
	health = health - enemyAttack;
}
