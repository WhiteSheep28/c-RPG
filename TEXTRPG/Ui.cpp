#include <iostream>

#include "MainSystem.h"
#include "System.h"
#include "Ui.h"
#include "Inventory.h"
#include "DungeonUi.h"
#include "Character.h"
#include "Warrior.h"
#include "Socerer.h"
#include "Archer.h"

cUi::cUi()
{

}

cUi::~cUi()
{

}

void cUi::StartUi()
{
	cMainSystem* pSystem = new cSystem;

	while (1)
	{
		system("cls");
		cout << "{ Text RPG }" << endl;
		cout << "1. ���� �����ϱ�" << endl;
		cout << "2. ���� ������" << endl;

		pSystem->StartSelect();
	}
}

void cUi::CharacterUi()
{
	cMainSystem* pSystem = new cSystem;

	while (1)
	{
		system("cls");
		cout << "{ ĳ���͸� ������ �ּ���. }" << endl;
		cout << "1. Warrior" << endl;
		cout << "2. Socerer" << endl;
		cout << "3. Archer" << endl;

		pSystem->CharacterSelect();
	}
}

void cUi::WarriorUi()
{
	cMainSystem* pSystem = new cSystem;
	cMainSystem* pWarrior = new cWarrior;

	while (1)
	{
		system("cls");
		cout << "{ " << pWarrior->Getm_sName() << " }" << endl;
		cout << "���� ü�°� ���ݷ����� ������ �������� ���ϴ°��� Ư���Դϴ�." << endl << endl;
		cout << "{ ���� }" << endl;
		cout << "ü�� : " << pWarrior->Getm_nHealth() << endl;
		cout << "���ݷ� : " << pWarrior->Getm_nAttack() << endl << endl;
		cout << "{ ������ }" << endl;
		cout << "1. ����ϱ�" << endl;
		cout << "2. �ڷΰ���" << endl;

		pSystem->WarriorIntroduceSelect();

		if (cMainSystem::Getm_nSelect() == 2)
		{
			break;
		}
	}
}

void cUi::SocererUi()
{
	cMainSystem* pSystem = new cSystem;
	cMainSystem* pSocerer = new cSocerer;

	while (1)
	{
		system("cls");
		cout << "{ " << pSocerer->Getm_sName() << " }" << endl;
		cout << "������ ������ �������� �������� Ư���Դϴ�." << endl << endl;
		cout << "{ ���� }" << endl;
		cout << "ü�� : " << pSocerer->Getm_nHealth() << endl;
		cout << "���ݷ� : " << pSocerer->Getm_nAttack() << endl << endl;
		cout << "{ ������ }" << endl;
		cout << "1. ����ϱ�" << endl;
		cout << "2. �ڷΰ���" << endl;

		pSystem->SocererIntroduceSelect();

		if (cMainSystem::Getm_nSelect() == 2)
		{
			break;
		}
	}
}

void cUi::ArcherUi()
{
	cMainSystem* pSystem = new cSystem;
	cMainSystem* pArcher = new cArcher;

	while (1)
	{
		system("cls");
		cout << "{ " << pArcher->Getm_sName() << " }" << endl;
		cout << "��ø�� �߳�� �������� ������ Ư���Դϴ�." << endl << endl;
		cout << "{ ���� }" << endl;
		cout << "ü�� : " << pArcher->Getm_nHealth() << endl;
		cout << "���ݷ� : " << pArcher->Getm_nAttack() << endl << endl;
		cout << "{ ������ }" << endl;
		cout << "1. ����ϱ�" << endl;
		cout << "2. �ڷΰ���" << endl;

		pSystem->ArcherIntroduceSelect();

		if (cMainSystem::Getm_nSelect() == 2)
		{
			break;
		}
	}
}

void cUi::MainSystemUi(cMainSystem* Character)
{
	cMainSystem* pSystem = new cSystem;
	cMainSystem* pInventory = new cInventory;

	while (1)
	{
		system("cls");
		cout << "{ " << Character->Getm_sName() << "�� ����" << " }" << endl;
		cout << "���� : " << Character->Getm_nLevel() << endl;
		cout << "ü�� : " << Character->Getm_nHealth() << endl;
		cout << "���ݷ� : " << Character->Getm_nAttack() << endl;
		cout << "����� : " << Character->Getm_nHungry() << endl;
		cout << endl;
		cout << "{ ������ }" << endl;
		cout << "1. ���� ����" << endl;
		cout << "2. ���� ����" << endl;
		cout << "3. �κ��丮" << endl;
		cout << "4. ������" << endl;
		
		pSystem->MainSystemSelect(Character, pInventory);
	}
}
	