#include <iostream>

#include "damage.h"

using namespace std;

damage::damage()
{

}

damage::~damage()
{

}

void damage::GetTakeDamage(int Attack, int Health)
{
	damage::m_nRemainHealth = Health - Attack;
}

int damage::SetTakeDamage()
{
	return damage::m_nRemainHealth;
}