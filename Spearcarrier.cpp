#include "Spearcarrier.h"

Spearcarrier::Spearcarrier() {

}

int Spearcarrier::GetType()
{
	return type;
}

int Spearcarrier::GetHealth()
{
	return health;
}

int Spearcarrier::GetAttack()
{
	return attack;
}

string Spearcarrier::GetName()
{
	return name;
}

void Spearcarrier::SetHealth(int enemyAttack)
{
	health = health - enemyAttack;
}
