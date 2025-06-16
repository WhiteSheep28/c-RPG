#include <iostream>

#include "monster.h"

using namespace std;

monster::monster()
{
	monster::m_nHealth = 100;
	monster::m_nAttack = 10;
}

monster::~monster()
{

}

void monster::CheckHealth()
{
	cout << monster::m_nHealth;
}

void monster::CheckAttack()
{
	cout << monster::m_nAttack;
}

void monster::TakeDamage()
{

}

void monster::ToDamage()
{

}