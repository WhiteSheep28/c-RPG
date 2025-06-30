#include <iostream>

#include "MainSystem.h"
#include "System.h"
#include "TestMonster.h"
#include "DungeonUi.h"
#include "Archer.h"

using namespace std;

cDungeonUi::cDungeonUi()
{

}

cDungeonUi::~cDungeonUi()
{

}

void cDungeonUi::TestDungeonUi(cMainSystem* Character, cMainSystem* Inventory)
{
	cMainSystem* pTestMonster = new cTestMonster;
	cMainSystem* pSystem = new cSystem;

	while (1)
	{
		system("cls");
		cout << "{ " << pTestMonster->Getm_sName() << " }";
		cout << "         { " << Character->Getm_sName() << " }" << endl;
		cout << "����   : " << pTestMonster->Getm_nLevel();
		cout << "      ���� : " << Character->Getm_nLevel() << endl;
		cout << "ü��   : " << pTestMonster->Getm_nHealth();
		cout << "  ü��   : " << Character->Getm_nHealth() << endl;
		cout << "���ݷ� : " << pTestMonster->Getm_nAttack();
		cout << "        ���ݷ� : " << Character->Getm_nAttack() << endl << endl << endl;

		if (Character->Getm_nCharacterNum() == 1)
		{
			Character->WarriorSkillSelect(Character, pTestMonster);
		}
		else if (Character->Getm_nCharacterNum() == 2)
		{
			Character->SocererSkillSelect(Character, pTestMonster);
		}
		else
		{
			Character->ArcherSkillTree(Character, pTestMonster);
		}

		if (Getm_nSelect() == 5)
		{
			break;
		}
	}
}