#include "Wall.h"

Wall::Wall() {

}

int Wall::GetType()
{
	return type;
}

string Wall::GetName()
{
	return name;
}

int Wall::GetHealth()
{
	return health;
}

int Wall::GetAttack()
{
	return attack;
}

void Wall::SetHealth(int enemyAttack)
{
	health = health - enemyAttack;
}
