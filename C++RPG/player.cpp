#include <iostream>

#include "player.h"

using namespace std;

player::player()
{
	player::m_nHealth = 100;
	player::m_nAttack = 200;
}

player::~player()
{

}

void player::CheckHp()
{
	cout << player::m_nHealth;
}

void player::CheckAttack()
{
	cout << player::m_nAttack;
}