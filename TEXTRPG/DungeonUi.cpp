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
	cMainSystem* pSystem = new cSystem;
}

void cDungeonUi::DungeonUi(cMainSystem* Character, cMainSystem* Inventory, cMainSystem* Monster)
{
	cMainSystem* pSystem = new cSystem;

	while (1)
	{
		system("cls");
		cout << "{ " << Monster->Getm_sName() << " }";
		cout << "         { " << Character->Getm_sName() << " }" << endl;
		cout << "����   : " << Monster->Getm_nLevel();
		cout << "      ���� : " << Character->Getm_nLevel() << endl;
		cout << "ü��   : " << Monster->Getm_nHealth();
		cout << "  ü��   : " << Character->Getm_nHealth() << endl;
		cout << "���ݷ� : " << Monster->Getm_nAttack();
		cout << "        ���ݷ� : " << Character->Getm_nAttack() << endl << endl << endl;

		if (Character->Getm_nCharacterNum() == 1)
		{
			Character->WarriorSkillSelect(Character, Monster, Inventory);
		}
		else if (Character->Getm_nCharacterNum() == 2)
		{
			Character->SocererSkillSelect(Character, Monster, Inventory);
		}
		else
		{
			Character->ArcherSkillTree(Character, Monster, Inventory);
		}

		if (Getm_nSelect() == 6)
		{
			break;
		}
	}
}