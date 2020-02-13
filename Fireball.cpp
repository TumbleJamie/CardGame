#include "Fireball.h"

Fireball::Fireball() {

}

int Fireball::GetType()
{
	return type;
}

string Fireball::GetName()
{
	return name;
}

int Fireball::GetHealth()
{
	return health;
}

int Fireball::GetAttack()
{
	return attack;
}

void Fireball::SetHealth(int enemyAttack)
{
	health = health - enemyAttack;
}
