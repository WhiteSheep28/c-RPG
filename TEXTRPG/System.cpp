#include <iostream>
#include <windows.h>

#include "MainSystem.h"
#include "System.h"
#include "Ui.h"
#include "DungeonUi.h"
#include "FarmUi.h"
#include "Inventory.h"
#include "Character.h"
#include "Warrior.h"
#include "Socerer.h"
#include "Archer.h"

using namespace std;

cSystem::cSystem()
{

}

cSystem::~cSystem()
{

}

void cSystem::SelectSystem()
{
	cin >> cMainSystem::m_nSelect;
}

void cSystem::StartSelect()
{
	cMainSystem* pUi = new cUi;

	cSystem::SelectSystem();

	switch (Getm_nSelect())
	{
	case 1: pUi->CharacterUi();
	case 2: exit(1);
	default: break;
	}
}

void cSystem::CharacterSelect()
{
	cMainSystem* pUi = new cUi;

	cSystem::SelectSystem();

	switch (Getm_nSelect())
	{
	case 1:
	{
		pUi->WarriorUi();
		break;
	}
	case 2:
	{
		pUi->SocererUi();
		break;
	}
	case 3: 
	{
		pUi->ArcherUi();
		break;
	}
	default: break;
	}
}

void cSystem::WarriorIntroduceSelect()
{
	cMainSystem* pUi = new cUi;
	cMainSystem* pWarrior = new cWarrior;

	cSystem::SelectSystem();

	switch (Getm_nSelect())
	{
	case 1: pUi->MainSystemUi(pWarrior);
	case 2: break;
	default: break;
	}
}

void cSystem::SocererIntroduceSelect()
{
	cMainSystem* pUi = new cUi;
	cMainSystem* pSocerer = new cSocerer;

	cSystem::SelectSystem();

	switch (Getm_nSelect())
	{
	case 1: pUi->MainSystemUi(pSocerer);
	case 2: break;
	default: break;
	}
}

void cSystem::ArcherIntroduceSelect()
{
	cMainSystem* pUi = new cUi;
	cMainSystem* pArcher= new cArcher;

	cSystem::SelectSystem();

	switch (Getm_nSelect())
	{
	case 1: pUi->MainSystemUi(pArcher);
	case 2: break;
	default: break;
	}
}

void cSystem::MainSystemSelect(cMainSystem* Character, cMainSystem* Inventory)
{
	cSystem::SelectSystem();

	switch (Getm_nSelect())
	{
	case 1:
	{
		Character->Setm_nHungry(Character);
		
		cMainSystem* pFarmUi = new cFarmUi;
		cMainSystem* pDungeonUi = new cDungeonUi;

		pFarmUi->m_nBreadCount++;
		pDungeonUi->TestDungeonUi(Character, Inventory);
		break;
	}
	case 2:
	{
		cMainSystem* pFarmUi = new cFarmUi;
		pFarmUi->FarmUi(Inventory);
		break;
	}
	case 3: 
	{
		Inventory->InventoryUi();
		break;
	}
	case 4:
	{
		exit(1);
	}
	default: break;
	}
}

void cSystem::ArcherSkillSelect(cMainSystem* Character, cMainSystem* Enemy)
{
	cSystem::SelectSystem();
	int nTempEnemyHealth = Enemy->Getm_nHealth();
	int nEnemyHealth = Enemy->Getm_nHealth();
	int nCharacterAttack = Character->Getm_nAttack();

	switch (Getm_nSelect())
	{
	case 1:
	{
		nEnemyHealth -= nCharacterAttack * 2;
		Enemy->Setm_nHealth(nEnemyHealth);
		break;
	}
	case 2:
	{
		nEnemyHealth -= nCharacterAttack * 2;
		Enemy->Setm_nHealth(nEnemyHealth);
		break;
	}
	case 3: 
	{
		nEnemyHealth -= nCharacterAttack * 2;
		Enemy->Setm_nHealth(nEnemyHealth);
		break;
	}
	case 4:
	{
		nEnemyHealth -= nCharacterAttack * 100;
		Enemy->Setm_nHealth(nEnemyHealth);
		break;
	}
	case 5:
	{
		break;
	}
	default:
	{

	}
	}

	if (Getm_nSelect() >= 1 && Getm_nSelect() <= 4)
	{
		cout << Enemy->Getm_sName() << "에게 " << nTempEnemyHealth - nEnemyHealth << "만큼의 데미지!";
		Sleep(1000);
	}
}

void cSystem::WarriorSkillSelect(cMainSystem* Character, cMainSystem* Enemy)
{
	cSystem::SelectSystem();
	int nTempEnemyHealth = Enemy->Getm_nHealth();
	int nEnemyHealth = Enemy->Getm_nHealth();
	int nCharacterAttack = Character->Getm_nAttack();

 	switch (Getm_nSelect())
	{
	case 1:
	{
		nEnemyHealth -= nCharacterAttack * 2;
		Enemy->Setm_nHealth(nEnemyHealth);
		break;
	}
	case 2:
	{
		nEnemyHealth -= nCharacterAttack * 2;
		Enemy->Setm_nHealth(nEnemyHealth);
		break;
	}
	case 3:
	{
		nEnemyHealth -= nCharacterAttack * 2;
		Enemy->Setm_nHealth(nEnemyHealth);
		break;
	}
	case 4:
	{
		nEnemyHealth -= nCharacterAttack * 100;
		Enemy->Setm_nHealth(nEnemyHealth);
		break;
	}
	case 5:
	{
		break;
	}
	default:
	{

	}
	}

	if (Getm_nSelect() >= 1 && Getm_nSelect() <= 4)
	{
		cout << Enemy->Getm_sName() << "에게 " << nTempEnemyHealth - nEnemyHealth << "만큼의 데미지!";
		Sleep(1000);
	}
}

void cSystem::SocererSkillSelect(cMainSystem* Character, cMainSystem* Enemy)
{
	cSystem::SelectSystem();
	int nTempEnemyHealth = Enemy->Getm_nHealth();
	int nEnemyHealth = Enemy->Getm_nHealth();
	int nCharacterAttack = Character->Getm_nAttack();

	switch (Getm_nSelect())
	{
	case 1:
	{
		nEnemyHealth -= nCharacterAttack * 2;
		Enemy->Setm_nHealth(nEnemyHealth);
		break;
	}
	case 2:
	{
		nEnemyHealth -= nCharacterAttack * 2;
		Enemy->Setm_nHealth(nEnemyHealth);
		break;
	}
	case 3:
	{
		nEnemyHealth -= nCharacterAttack * 2;
		Enemy->Setm_nHealth(nEnemyHealth);
		break;
	}
	case 4:
	{
		nEnemyHealth -= nCharacterAttack * 100;
		Enemy->Setm_nHealth(nEnemyHealth);
		break;
	}
	case 5:
	{
		break;
	}
	default:
	{

	}
	}

	if (Getm_nSelect() >= 1 && Getm_nSelect() <= 4)
	{
		cout << Enemy->Getm_sName() << "에게 " << nTempEnemyHealth - nEnemyHealth << "만큼의 데미지!";
		Sleep(1000);
	}
}

void cSystem::BreadSelect(cMainSystem* Inventory)
{
	cSystem::SelectSystem();

	switch (Getm_nSelect())
	{
	case 1: break;
	case 2: break;
	default: break;
	}
}