#include "Elephant.h"
Elephant::Elephant() {

}

int Elephant::GetType()
{
	return type;
}

string Elephant::GetName()
{
	return name;
}

int Elephant::GetHealth()
{
	return health;
}

int Elephant::GetAttack()
{
	return attack;
}

void Elephant::SetHealth(int enemyAttack)
{
	health = health - enemyAttack;
}

