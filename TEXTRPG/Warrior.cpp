#include <iostream>

#include "System.h"
#include "Character.h"
#include "Warrior.h"

using namespace std;

cWarrior::cWarrior()
{
	m_sName = "Warrior";
	m_nHealth = 100;
	m_nAttack = 10;
	m_nHungry = 100;
	m_nLevel = 1;
	m_nCharacterNum = 1;
}

cWarrior::~cWarrior()
{

}

void cWarrior::WarriorSkillSelect(cMainSystem* Character, cMainSystem* Enemy, cMainSystem* Inventory)
{
	cMainSystem* pSystem = new cSystem;

	cout << "{ 스킬트리 }" << endl;
	cout << "1. 파워 스트라이크" << endl;
	cout << "2. 아이언 바디" << endl;
	cout << "3. 콤보 어택" << endl;
	cout << "4. 그라운드 스매시" << endl;
	cout << "5. 인벤토리" << endl;
	cout << "6. 나가기" << endl;

	pSystem->WarriorSkillSelect(Character, Enemy, Inventory);
}

void cWarrior::Setm_nHungry(cMainSystem* Character)
{
	m_nHungry -= 10;
}

void cWarrior::SetPlusm_nHungry()
{
	m_nHungry += 50;
	
}

void cWarrior::SetPlusm_nHealth()
{
	m_nHealth += 40;
}