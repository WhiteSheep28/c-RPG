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
		cout << "1. 게임 시작하기" << endl;
		cout << "2. 게임 나가기" << endl;

		pSystem->StartSelect();
	}
}

void cUi::CharacterUi()
{
	cMainSystem* pSystem = new cSystem;

	while (1)
	{
		system("cls");
		cout << "{ 캐릭터를 선택해 주세요. }" << endl;
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
		cout << "높은 체력과 공격력으로 적에게 데미지를 가하는것이 특기입니다." << endl << endl;
		cout << "{ 스텟 }" << endl;
		cout << "체력 : " << pWarrior->Getm_nHealth() << endl;
		cout << "공격력 : " << pWarrior->Getm_nAttack() << endl << endl;
		cout << "{ 선택지 }" << endl;
		cout << "1. 계속하기" << endl;
		cout << "2. 뒤로가기" << endl;

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
		cout << "강력한 마법과 지속적인 데미지가 특기입니다." << endl << endl;
		cout << "{ 스텟 }" << endl;
		cout << "체력 : " << pSocerer->Getm_nHealth() << endl;
		cout << "공격력 : " << pSocerer->Getm_nAttack() << endl << endl;
		cout << "{ 선택지 }" << endl;
		cout << "1. 계속하기" << endl;
		cout << "2. 뒤로가기" << endl;

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
		cout << "민첩한 발놀림과 연속적인 공격이 특기입니다." << endl << endl;
		cout << "{ 스텟 }" << endl;
		cout << "체력 : " << pArcher->Getm_nHealth() << endl;
		cout << "공격력 : " << pArcher->Getm_nAttack() << endl << endl;
		cout << "{ 선택지 }" << endl;
		cout << "1. 계속하기" << endl;
		cout << "2. 뒤로가기" << endl;

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
		cout << "{ " << Character->Getm_sName() << "의 스탯" << " }" << endl;
		cout << "레벨 : " << Character->Getm_nLevel() << endl;
		cout << "체력 : " << Character->Getm_nHealth() << endl;
		cout << "공격력 : " << Character->Getm_nAttack() << endl;
		cout << "배고픔 : " << Character->Getm_nHungry() << endl;
		cout << endl;
		cout << "{ 선택지 }" << endl;
		cout << "1. 던전 들어가기" << endl;
		cout << "2. 농장 들어가기" << endl;
		cout << "3. 인벤토리" << endl;
		cout << "4. 나가기" << endl;
		
		pSystem->MainSystemSelect(Character, pInventory);
	}
}
	