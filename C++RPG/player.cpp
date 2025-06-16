#include <iostream>

#include "player.h"

using namespace std;

player::player()
{
	player::m_nHealth = 100;
	player::m_nAttack = 10;
}

player::~player()
{

}

void player::CheckHealth()
{
	cout << player::m_nHealth;
}

void player::CheckAttack()
{
	cout << player::m_nAttack;
}

void player::TakeDamage()
{

}

void player::ToDamage()
{

}
