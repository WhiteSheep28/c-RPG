#include <iostream>

#include "System.h"
#include "Character.h"
#include "Archer.h"

using namespace std;

cArcher::cArcher()
{
	m_sName = "Archer";
	m_nHealth = 70;
	m_nAttack = 8;
	m_nHungry = 100;
	m_nLevel = 1;
	m_nCharacterNum = 3;
}

cArcher::~cArcher()
{
	
}

void cArcher::ArcherSkillTree(cMainSystem* Character, cMainSystem* Enemy, cMainSystem* Inventory)
{
	cMainSystem* pSystem = new cSystem;

	cout << "{ ��ųƮ�� }" << endl;
	cout << "1. ���� ��" << endl;
	cout << "2. ���� ����" << endl;
	cout << "3. ����" << endl;
	cout << "4. ��� ��" << endl;
	cout << "5. �κ��丮" << endl;
	cout << "6. ������" << endl;

	pSystem->ArcherSkillSelect(Character, Enemy, Inventory);
}

void cArcher::Setm_nHungry(cMainSystem* Character)
{
	m_nHungry -= 10;
}

void cArcher::SetPlusm_nHungry()
{
	m_nHungry += 50;
}

void cArcher::SetPlusm_nHealth()
{
	m_nHealth += 40;
}