#include <iostream>

#include "TestMonster.h"

using namespace std;

cTestMonster::cTestMonster()
{
	m_sName = "°­Ã¤¿ø";
	m_nHealth = 10000000;
	m_nAttack = 10;
	m_nLevel = 1000;
}

cTestMonster::~cTestMonster()
{

}

void cTestMonster::Setm_nHealth(int EnemyHealth)
{
	cTestMonster::m_nHealth = EnemyHealth;
}
