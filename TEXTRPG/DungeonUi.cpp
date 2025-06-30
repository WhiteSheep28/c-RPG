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
		cout << "레벨   : " << pTestMonster->Getm_nLevel();
		cout << "      레벨 : " << Character->Getm_nLevel() << endl;
		cout << "체력   : " << pTestMonster->Getm_nHealth();
		cout << "  체력   : " << Character->Getm_nHealth() << endl;
		cout << "공격력 : " << pTestMonster->Getm_nAttack();
		cout << "        공격력 : " << Character->Getm_nAttack() << endl << endl << endl;

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