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
		cout << "레벨   : " << Monster->Getm_nLevel();
		cout << "      레벨 : " << Character->Getm_nLevel() << endl;
		cout << "체력   : " << Monster->Getm_nHealth();
		cout << "  체력   : " << Character->Getm_nHealth() << endl;
		cout << "공격력 : " << Monster->Getm_nAttack();
		cout << "        공격력 : " << Character->Getm_nAttack() << endl << endl << endl;

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