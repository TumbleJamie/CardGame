#include "Elf.h"

Elf::Elf() {

}

int Elf::GetType()
{
	return type;
}

int Elf::GetHealth()
{
	return health;
}

int Elf::GetAttack()
{
	return attack;
}

string Elf::GetName()
{
	return name;
}

void Elf::SetHealth(int enemyAttack)
{
	health = health - enemyAttack;
}
