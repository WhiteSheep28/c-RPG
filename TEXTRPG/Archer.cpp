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

void cArcher::ArcherSkillTree(cMainSystem* Character, cMainSystem* Enemy)
{
	cMainSystem* pSystem = new cSystem;

	cout << "{ ��ųƮ�� }" << endl;
	cout << "1. ���� ��" << endl;
	cout << "2. ���� ����" << endl;
	cout << "3. ����" << endl;
	cout << "4. ��� ��" << endl;
	cout << "5. ������" << endl;

	pSystem->ArcherSkillSelect(Character, Enemy);
}

void cArcher::Setm_nHungry(cMainSystem* Character)
{
	m_nHungry -= 10;
}