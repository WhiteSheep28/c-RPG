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

void cWarrior::WarriorSkillSelect(cMainSystem* Character, cMainSystem* Enemy)
{
	cMainSystem* pSystem = new cSystem;

	cout << "{ ��ųƮ�� }" << endl;
	cout << "1. �Ŀ� ��Ʈ����ũ" << endl;
	cout << "2. ���̾� �ٵ�" << endl;
	cout << "3. �޺� ����" << endl;
	cout << "4. �׶��� ���Ž�" << endl;
	cout << "5. ������" << endl;

	pSystem->WarriorSkillSelect(Character, Enemy);
}

void cWarrior::Setm_nHungry(cMainSystem* Character)
{
	m_nHungry -= 10;
}