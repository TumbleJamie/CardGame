#include "Bless.h"
Bless::Bless() {

}

int Bless::GetType()
{
	return type;
}

string Bless::GetName()
{
	return name;
}

int Bless::GetHealth()
{
	return health;
}

int Bless::GetAttack()
{
	return attack;
}

void Bless::SetHealth(int enemyAttack)
{
	health = health - enemyAttack;
}
