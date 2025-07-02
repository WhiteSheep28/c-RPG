#pragma once

#include <iostream>
#include <memory.h>

using namespace std;

class cMainSystem
{
public:
	cMainSystem();
	virtual ~cMainSystem();

	//Ui.h
	virtual void StartUi() { ; } //게임 시작 화면

	virtual void CharacterUi() { ; } //캐릭터 선택


	//캐릭터 소개
	virtual void WarriorUi() { ; }
	virtual void SocererUi() { ; }
	virtual void ArcherUi() { ; }

	virtual void MainSystemUi(cMainSystem* Character) { ; } //메인화면


	//DungeonUi.h
	virtual void TestDungeonUi(cMainSystem* Character, cMainSystem* Inventory) { ; }
	virtual void DungeonUi(cMainSystem* Character, cMainSystem* Inventory, cMainSystem* Monster) { ; }


	//FarmUi.h
	virtual void FarmUi(cMainSystem* Inventory) { ; }


	//Character.h
	virtual void ArcherSkillTree(cMainSystem* Character, cMainSystem* Enemy, cMainSystem* Inventory) { ; }

	string Getm_sName() { return m_sName; }

	int Getm_nHealth() { return m_nHealth; }
	virtual void Setm_nHealth(int EnemyHealth) { ; }

	int Getm_nAttack() { return m_nAttack; }

	int Getm_nHungry() { return m_nHungry; }
	virtual void Setm_nHungry(cMainSystem* Character) { ; }
	virtual void SetPlusm_nHungry() { ; }
	virtual void SetPlusm_nHealth() { ; }
	int Getm_nLevel() { return m_nLevel; }
	int Getm_nCharacterNum() { return m_nCharacterNum; }
	int Getm_nMonsterNum() { return m_nMonsterNum; }


	//System.h
	virtual void SelectSystem() { ; }

	virtual void StartSelect() { ; } //게임 시작, 나가기

	virtual void CharacterSelect() { ; } //캐릭터 선택

	virtual void WarriorIntroduceSelect() { ; } //캐릭터 소개
	virtual void SocererIntroduceSelect() { ; }
	virtual void ArcherIntroduceSelect() { ; }

	virtual void MainSystemSelect(cMainSystem* Character, cMainSystem* Inventory) { ; } //최초 게임 시작
	
	virtual void BreadSelect(cMainSystem* Inventory) { ; }

	virtual void InventorySelect() { ; }

	virtual void ArcherSkillSelect(cMainSystem* Character, cMainSystem* Enemy, cMainSystem* Inventory) { ; }
	virtual void WarriorSkillSelect(cMainSystem* Character, cMainSystem* Enemy, cMainSystem* Inventory) { ; }
	virtual void SocererSkillSelect(cMainSystem* Character, cMainSystem* Enemy, cMainSystem* Inventory) { ; }

	
	//Inventory.h
	virtual void InventoryUi(cMainSystem* Character) { ; }
	virtual void InputInventory(int ItemCode, int ItemNum) { ; }
	virtual void HealthPotionUi() { ; }
	virtual void BreadUi() { ; }
	virtual void HeadUi() { ; } 
	virtual void Bread(cMainSystem* Character) { ; }
	virtual void HealthPotion(cMainSystem* Character) { ; }

	virtual void Setm_nBread() { ; }
	virtual int Getm_nBread() { return m_nBread; }

	virtual void Setm_nBreadCost() { ; }

	virtual void Setm_nHungry() { ; }

	int Getm_nSelect() { return m_nSelect; }

protected:
	string m_sName;
	int m_nHealth;
	int m_nAttack;
	int m_nHungry;
	int m_nLevel;
	int m_nCharacterNum;
	int m_nMonsterNum;

	static int m_nSelect;

	int m_nInventorySlot[10];

	static int m_nBreadCount;
	static int m_nBreadCost;

	int m_nHealthPotionCode;
	int m_nBreadCode;

	int m_nHealthPotion;
	int m_nBread;

	int m_nGetItemCode;

private:
	
};
