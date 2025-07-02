#pragma once

#include <iostream>

#include "Character.h"
#include "Ui.h"

using namespace std;

class cSystem : public cMainSystem
{
public:
	cSystem();
	virtual ~cSystem();

	virtual void SelectSystem();

	virtual void StartSelect(); //게임 시작, 나가기

	virtual void CharacterSelect(); //캐릭터 선택

	virtual void WarriorIntroduceSelect(); //캐릭터 소개
	virtual void SocererIntroduceSelect();
	virtual void ArcherIntroduceSelect();

	virtual void MainSystemSelect(cMainSystem* Character, cMainSystem* Inventory); //최초 게임 시작

	virtual void BreadSelect(cMainSystem* Inventory);

	virtual void InventorySelect() { ; }

	virtual void ArcherSkillSelect(cMainSystem* Character, cMainSystem* Enemy);
	virtual void WarriorSkillSelect(cMainSystem* Character, cMainSystem* Enemy);
	virtual void SocererSkillSelect(cMainSystem* Character, cMainSystem* Enemy);

protected:

private:
};