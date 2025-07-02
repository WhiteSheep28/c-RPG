#include <iostream>

#include "MainSystem.h"
#include "System.h"
#include "Character.h"
#include "Socerer.h"

using namespace std;

cSocerer::cSocerer()
{
	m_sName = "Socerer";
	m_nHealth = 60;
	m_nAttack = 3;
	m_nHungry = 100;
	m_nLevel = 1;
	m_nCharacterNum = 2;
}

cSocerer::~cSocerer()
{

}

void cSocerer::SocererSkillSelect(cMainSystem* Character, cMainSystem* Enemy, cMainSystem* Inventory)
{
	cMainSystem* pSystem = new cSystem;

	cout << "{ ��ųƮ�� }" << endl;
	cout << "1. ���� ��" << endl;
	cout << "2. ���� ��ǳ" << endl;
	cout << "3. ȭ�� ���" << endl;
	cout << "4. � ����" << endl;
	cout << "5. �κ��丮" << endl;
	cout << "6. ������" << endl;

	pSystem->SocererSkillSelect(Character, Enemy, Inventory);
}

void cSocerer::Setm_nHungry(cMainSystem* Character)
{
	m_nHungry -= 10;
}

void cSocerer::SetPlusm_nHungry()
{
	m_nHungry += 50;
}

void cSocerer::SetPlusm_nHealth()
{
	m_nHealth += 40;
}